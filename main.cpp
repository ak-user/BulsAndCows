#include <iostream>
#include "main.h"

using namespace std;


// the entry point for our application
int main()
{
    PrintIntro();
    PlayGame();
    return 0; // exit the application
}

void PrintIntro()
{
    // introduce the game
    constexpr int WORLD_LENGTH = 5;

    cout << "welcome to Bulls and Cows, a fun world game." << endl;
    cout << "Can you guess the " << WORLD_LENGTH;
    cout << " letter isogram I'm thinking of?" << endl;
    cout << endl;
}

string GetGuessAndPrintBack()
{
    // get a guess from the player
    cout << "Enter the name: ";

    string Guess;
    getline(cin, Guess);

    // print the guess back to them
    cout << "Your guess was: " << Guess << endl;
    cout << endl;
    return Guess;
}

void PlayGame()
{
    // loop for the number of turns asking for guesses
    constexpr int NUMBERS_OF_TURNS = 5;
    for (int i = 0; i < NUMBERS_OF_TURNS; i++ ) {
        GetGuessAndPrintBack();
    };
}