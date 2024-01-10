#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {
    srand(time(NULL));
    int move_index = rand() % 3; // To store a random number from 0 to 2 
    
    char moves[3][10] = { "Rock", "Paper", "Scissor" };

    char computer_move[10];
    strcpy(computer_move, moves[move_index]);

    printf("Welcome to the Game\n");
    printf("Please pick your move ( Rock, Paper, Scissor )\n");

    char user_move[10];
    scanf("%s", user_move);

    // the strcmp(prtr, "value") function compares the value i want to compare with the stored value in prtr
    if( strcmp( computer_move, "Rock" ) == 0) {

        if( strcmp( user_move, "Rock" ) == 0 )
            printf("No winner");
        else if( strcmp( user_move, "Paper" ) == 0 )
            printf("YOU WIN!! Congrats!");
        else
            printf("You Lost..");
            
    }
    else if( strcmp( computer_move, "Paper" ) == 0 ) {

        if( strcmp( user_move, "Paper" ) == 0 )
            printf("No winner");
        else if( strcmp( user_move, "Scissor" ) == 0 )
            printf("YOU WIN!! Congrats!");
        else
            printf("You Lost..");

    }
    else if( strcmp( computer_move, "Scissor" ) == 0 ) {

        if( strcmp( user_move, "Scissor" ) == 0 )
            printf("No winner");
        else if( strcmp( user_move, "Rock" ) == 0 )
            printf("YOU WIN!! Congrats!");
        else
            printf("You Lost..");

    }

    return 0;
}