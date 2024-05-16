#include <stdio.h>

void tri_bulle(int tab[], int taille) {
    int i, j, temp;
    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int taille, i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);



    int tab[taille];
    printf("Entrez les éléments du tableau : ");
    for (i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }

    tri_bulle(tab, taille);

    printf("Tableau trié : ");
    for (i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}