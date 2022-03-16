#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>

#define MAX_NAME_LENGTH 64


void promt_start( char *player1, char *player2, bool *player1Begin ){
    printf("You are starting a new game of puissance4 \n");
    // do{
    //     printf("How many numbers of lines do you wan to play ?\n");
    //     scanf("%d", linesNb);
        
    // }
    // while(isdigit(*linesNb));
}

char **initializeBoard( int cols, int rows){
    char **matrix;
    // for(int i=0; i<rows; i++){
    //    matrix[i] = malloc(sizeof(char) * cols);
    // }
    matrix = malloc(sizeof(char*) * rows );
    for(int j = 0; j < cols + 1 ; j++){
        matrix[j] = malloc(sizeof(char)* (cols + 1));
    } 
 for(int j = 0; j < cols + 1 ; j++){
    for(int i =0 ; i < rows ; i++){
           if(j == cols+1) {
                matrix[i][j] = '\0';
           }else{
                matrix[i][j] = ' ';
           }
       }
 }
    return matrix;
}

void init(int *row, int *col, char *player1, char *player2) {
    printf("You are starting a new game of puissance4 \n");
    printf("How many rows and columns ?\n");
    while (scanf("%d %d", row, col) < 2) {
        getchar();
        printf("Must be an integer value greater than 0\n");
    }
    printf("Playing with %d lines and %d columns\n", *row, *col);    
}


int main(int argc, char* argv[]){
    // 1. get les setting de parties ( nb colonnes, lignes) 
    // 2. savoir qui commence
    //int *LinesNb = malloc(sizeof(int));
    // int LinesNb = 6;
    // char *player1 = malloc(sizeof(char)*MAX_NAME_LENGTH);
    // char *player2 = malloc(sizeof(char)*MAX_NAME_LENGTH);
    // bool *player1Begin = malloc(sizeof(bool));
    // promt_start( player1, player2, player1Begin);


    int row, col;
    char player1[MAX_NAME_LENGTH], player2[MAX_NAME_LENGTH];

    init(&row, &col, player1, player2);


    // 3. initailiser le board x
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

