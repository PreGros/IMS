# Úvod

# Poznatky day one
- Nákupy se budou dovážet do boxů s 4 hodinovým intervalem začínající v 8:00 a končící v 20:00
- Při plnění boxů novými nákupy se budou nevyzvednuté převážet zpět (řešení nevyzvednutých nákupů u poslední dovážky? až ráno?)

## Cesta
- Vyjíždí z depa - Inženýrské stavby Brno Hudcova
- Zastávky:
    -> 3m
    1) Olšanského
    -> 4m
    2) Dětské hřiště Nové náměstí, Nové nám.
    -> 8m
    3) Portoriko, Srbská 51
    -> 4m
    4) Husitská
    -> 4m
    5) Charvatská
    -> 3m
    6) Skácelova
    -> 3m
    7) Makovského náměstí 3
    -> 3m
    8) Rosického nám. 196
    -> 10m
- Zpátky do depa - Inženýrské stavby Brno Hudcova

## Jak dlouho může trvat vyložení / naložení jednoho boxu
## Jak dlouho může trvat naložení / vyložení auta v depu
dodávka s chladicím boxem 3750x1700 - vejde se do ní maximálně 90 plně naložených tašek
Jedna vyzvedávací stanice 18 boxů do každého boxu se vejdou max dvě tašky
Z toho nám vychází, že jedno auto při plné obsazenosti nákladového prostoru a maximálním vytížením vyzvedávací stanice zvládne obsloužit dvě stanice v jedné cestě

# Testování vyložení / naložení jednoho boxu
## První test
Při vykládání dodávky jedním pracovníkem trvá obsluha jednoho boxu v rozmezí 20 až 30 sekund, tedy střední hodnota je 25 sekund (odpovídá zhruba normálnímu rozdělení). U 18 boxů to výjde na 7 minut a 30 sekund +- 90 sekund. Je potřeba si přičíst 3 minuty na režii potřebnou k zaparkování, odemčení stanice, uzamčení stanice a odjezdu.
## Druhý test
Při vykládání dodávky dvěma pracovníky trvá obsluha jednoho boxu v rozmězí 12 až 18 sekund, tedy střední hodnota je 15 sekund (odpovídá zhruba normálnímu rozdělení). U 18 boxů to výjde na 4 minut a 30 sekund +- 54 sekund. Je potřeba si přičíst 2 minuty na režii potřebnou k zaparkování, odemčení stanice, uzamčení stanice a odjezdu. 

## SHO
Doba naložení jedné tašky do auta v depu trvá 10 +- 3 sekundy (norm).