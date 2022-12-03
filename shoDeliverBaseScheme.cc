#include "simlib.h"
#define carSpaceInt 90

Stat ahoj("Statistiky");

// INIT
int payload = 235;
int car = 0;
double startOfLoading = 0;
double loading;

Facility PackingFacility("PackingFacility");

class Worker : public Process{
    public:
        void Behavior();
};

Worker *worker;

class Car : public Process{
    void Behavior() {
        car = 0;
        loading = Time - startOfLoading;
        ahoj(loading);
        Wait(10); // approx. 10m
        startOfLoading = Time;
        worker->Activate();
        Cancel();
    }
};

void Worker::Behavior(){
    double obsluha;
    startOfLoading = Time;
    while (true)
    {
        if ((payload > 0) && (car < 90))
        {
            obsluha = 0.25; // approx. 10s
            Wait(obsluha);
            payload = payload - 1;
            car = car + 1;
        }
        else if (car == 90)
        {
            (new Car)->Activate();
            worker->Passivate();
        }
        else if (car == 0)
        {
            Print("Break\n");
            break;
        }
        else
        {
            (new Car)->Activate();
            worker->Passivate();
        }
    }
    Cancel();
};

//GENERÁTOR
class Generator : public Event {
    void Behavior(){
        auto temp = new Worker();
        worker = temp;
        worker->Activate();
        Cancel();
    }
};

int main()
{
    Print("IMS - Base scheme\n");
    SetOutput("baseScheme.out");
    Init(0, 1000);
    (new Generator)->Activate();
    Run();
    ahoj.Output();
    return 0;
}