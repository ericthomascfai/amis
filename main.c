#include <stdio.h>
#include <stdbool.h>

char amis[6][255]; //tableau 2d 6 lignes 255 colonnes
int cpt; //compteur de nombres de lignes remplies
/***************définitions*****************/
void saisienom();
void affichernoms();
void menu();
/*************implémentation*****************/

void saisienom() {
    if(cpt<=6) { //on test si le compteur est à 6
        printf("Veuillez saisir un nom\n");
        scanf("%s", amis[cpt]); //rempli la ligne avec le scan
    //attention pas de &devant le nom de tableau
    }
    else
    {
        printf("Trop de noms max 6\n");
    }

    cpt++; //incrémentation du compteur
}


void menu()
{
    int choix=0;
    printf("1-Entrer un nom\n");
    printf("2-Afficher les noms\n");
    scanf("%d",&choix); //ne pas oublier &
    switch (choix) {
        case 1:
            saisienom();
            break; //attention à ne pas oublier
        case 2:
            affichernoms();
            break;
    }
}

void affichernoms()
{
    for(int i=0;i<cpt;i++) //boucle allant de i à cpt pour afficher uniquement les lignes remplies
    {

     printf("%s\n",amis[i]); //on offiche la ligne i du tableau

    }
}
int main() {
    /*******boucle infinie sur menu*******************/
        do {
            menu();
        }
        while(true);
}
