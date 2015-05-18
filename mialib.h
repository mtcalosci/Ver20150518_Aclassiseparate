#define MAXSTRLEN 25
#define MAXCLASSLEN 5
#define N 4
#define FMNAME "maschi.csv"
#define FFNAME "femmine.csv"

struct s_studente {
    char nome [MAXSTRLEN];
    char cognome [MAXSTRLEN];
    char classe [MAXSTRLEN];
    char sesso[2];
    unsigned int eta;
};
typedef struct s_studente studente;

void ordinarecord(studente s[], int n);
void smista(studente s[], int n);