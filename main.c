#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>

#define MAX_NAME_LENGTH 64


void promt_start(int *linesNb, char *player1, char *player2, bool *player1Begin ){
    printf("You are starting a new game of puissance4 \n");
    do{
        printf("How many numbers of lines do you wan to play ?\n");
        scanf("%d", linesNb);
        
    }
    while(!isdigit(*linesNb));
    printf("%s \n", isdigit(*linesNb) ? "true":"false");
    printf("you have choose %i \n", *linesNb);
    printf("this is ok");
}
int main(int argc, char* argv[]){
    // 1. get les setting de parties ( nb colonnes, lignes) 
    // 2. savoir qui commence
    int *LinesNb = malloc(sizeof(int));
    char *player1 = malloc(sizeof(char)*MAX_NAME_LENGTH);
    char *player2 = malloc(sizeof(char)*MAX_NAME_LENGTH);
    bool *player1Begin = malloc(sizeof(bool));
    promt_start(LinesNb, player1, player2, player1Begin);
    // 3. initailiser le board
    //* 
    // 4.TOUR 
    // jeu va serparer en tour
        // j1 joue
        // check de si gagne ou pas
        // *
        // j2 joue
        // check de si gagne ou pas
        // *
    // *6. print le tableau representatif de la partie
    // 7. fin de partie free
    
}

// 1 - flag maybe
// argv desctrurer
// regles de flag?  et nb col 
// derouler avec scanf etc les joueurs
// qui commence   menu 1-J 2-A
 
// ** ou [][] de taille ptr de ptr  valeur x | o - malloc


// logique de tour
// print tab
// J-1 joue choisi colonne | 1 , 2 , 3 etc si pas valide reprint
// check win - check pas complete
// j-2
// check win - check pas complete

// while not flag var true -> play
// print winner
// 7. free

