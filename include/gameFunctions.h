/* Created by Tony Schneider on 11/29/2011
 * Last Modified by Tony Schneider on 11/29/2011
 *
 * gameFunctions.h
 * Set of functions used to run a game of "Horse"
 *
 */

printWithSpaces();

initializeBlankString();

revealGuessedLetter();

checkGuess();


/***********************************************************/
/* THE FUNCTIONS BELOW ARE ALREADY COMPLETED.  DON'T ALTER */
/***********************************************************/

//Sets game up, checks for win condition, prints relevant data 
void startGame(char wordToGuess[]);

//Clears the unix terminal of previous input
void clearScreen();

//Prints part of the horse based on the ratio between the two numbers
void drawHorse(int guessedSoFar, int allowedGuesses);
