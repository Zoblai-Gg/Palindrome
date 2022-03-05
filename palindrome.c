//
// Created by Yarbanga Wendconté B on 05/03/2022.
//

#include <stdio.h>

int taille_utile(char chaine[]);

int main (void)
{
    char chaine[]="oooppp";
    int t=taille_utile(chaine);
    printf("la taille : %d",t);
    return 0;
}

int taille_utile(char chaine[])
{
    int i = 0;
    while(chaine[i] != '\0'){
        i++;
    }
    return i;
}
