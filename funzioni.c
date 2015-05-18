
#include <stdio.h>
#include "mialib.h"

void ordinarecord(studente s[], int n) {
    int j, i;
    studente temp;
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1 - j; i++) {
            if (strcmp(s[i].cognome, s[i + 1].cognome) > 0) {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;

            }
        }
    }
}

void smista(studente s[], int n) {
    int i;
    FILE *maschi;
    FILE *femmine;
    maschi = fopen(FMNAME, "w");
    if (maschi == NULL) {
        fprintf(stderr, "Errore nell'apertura del file maschi.csv.\n");
    }
    femmine = fopen(FFNAME, "w");
    if (femmine == NULL) {
        fprintf(stderr, "Errore nell'apertura del file femmine.csv. \n");
    }

    for (i = 0; i < n; i++) {
        if (!strcmp(s[i].sesso, "M")) {
            fprintf(maschi, "%s; %s; %s; %s; %d; \n", s[i].nome, s[i].cognome, s[i].classe, s[i].sesso, s[i].eta);
        } else {
            if (!strcmp(s[i].sesso, "F")) {
                fprintf(femmine, "%s; %s; %s; %s; %d; \n", s[i].nome, s[i].cognome, s[i].classe, s[i].sesso, s[i].eta);
            }
        }
    }
    fclose(maschi);
    fclose(femmine);
}

