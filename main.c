#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mialib.h"




int main(int argc, char** argv) {
    int i;
    studente s[N];

 for (i = 0; i < N; i++) {
        printf("Inserisci il nome del %d° studente: ", i + 1);
        scanf("%s", s[i].nome);
        printf("Inserisci il cognome del %d° studente: ", i + 1);
        scanf("%s", s[i].cognome);
        printf("Inserisci la classe del %d° studente: ", i + 1);
        scanf("%s", s[i].classe);
        printf("Inserisci il sesso del %d° studente (M o F): ", i + 1);
        scanf("%s", s[i].sesso);
        printf("Inserisci l'eta del %d° studente: ", i + 1);
        scanf("%d", &(s[i].eta));
    }

    
    ordinarecord(s, N);
    smista(s, N);
    

    return (EXIT_SUCCESS);
}

