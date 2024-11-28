#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(void)
{
    int casuale, num, x, y;
    float capitale, somma_puntata;
    char noe[20] = {""}, puntata[1], n[1] = "N", r[1] = "R";

    printf("Inserisci nome, capitale, puntata: N per nero, R per rosso, e somma puntata\n");
    scanf("%s %f %s %f", &nome, &capitale, &puntata, &somma_puntata);

    srand(time(NULL));
    casuale = rand();
    num = (casuale % 37);
    printf("Numero uscito=%d\n", num);
    printf("> %s %.2f %s %.2f\n", nome, capitale, puntata, somma_puntata);

    if (strcmp(n, puntata) == 0)
        x = 1;
    else if (strcmp(r, puntata) == 0)
        x = 2;

    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 9 || num == 12 || num == 14 || num == 16 || num == 18 || num == 19 || num == 21 || num == 23 || num == 25 || num == 27 || num == 30 || num == 32 || num == 34 || num == 36)
        y = 2,
        else y = 1;

    if (num == 0)
    {
        capitale = capitale - somma_puntata;
        printf("%s %.2f Z > PERSO", nome, capitale);
    }
    else if (x == 2 && y == 2)
    {
        capitale = capitale + somma_puntata;
        printf("%s %.2f R > VINTO", nome, capitale);
    }
    else if (x == 1 && y == 1)
    {
        capitale = capitale + somma_puntata;
        printf("%s %.2f N > VINTO", nome, capitale);
    }
    else if (x == 1 && y == 2)
    {
        capitale = capitale - somma_puntata;
        printf("%s %.2f R > PERSO", nome, capitale);
    }
    else if (x == 2 && y == 1)
    {
        capitale = capitale - somma_puntata;
        printf("%s %.2f N > PERSO", nome, capitale);
    }
    return 0;
}