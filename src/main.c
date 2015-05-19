/* Created by Tony Schneider on 11/29/2011
 * Last Modified by Tony Schneder on 11/29/2011
 *
 * horse.c
 * A game where the user has N chances to guess a random word pulled
 * from a file before they lose, one letter at a time.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameFunctions.h"

int main()
{
    char guessWords[50][25];

    FILE *inp = fopen("dictionary.txt", "r");
    
    //Grabs a random word from the file dictionary.txt to use in the game
    int counter = 0;
    while (fscanf(inp, "%s", guessWords[counter]) != EOF)
    {
        counter++;
    }

    //Gets a random number between 0 abd counter to use for an index
    srand(time(NULL));
    int stringNumber = rand() % counter;
  
    //Starts the game
    startGame(guessWords[stringNumber]);

    return (1);
}
