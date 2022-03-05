//
// Created by Yarbanga Wendconté B on 05/03/2022.
//

#include <stdio.h>

int taille_utile(char chaine[]);
void reverse_v2 (char str[],  char resultat[], int taille_utile); 

int main (void)
{
    char chaine[]="oooppp";
    int t=taille_utile(chaine);
    printf("la taille : %d",t);

    char str_r[t] ; 
    reverse_v2(chaine, str_r, t) ;
    
    printf(" l'inverse de la chaine est : %s", str_r) ; 

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


void reverse_v2 (char str[],  char resultat[], int taille_utile){
    
    int i, j=0 ;
    
    for(i=taille_utile-1; i>=0; i--){
        resultat[j]=str[i]; 
        j++ ; 
    }
    resultat[taille_utile]='\0';
    
}

