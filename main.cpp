#include <iostream>
#include "main.h"

using namespace std;


// the entry point for our application
int main()
{
    PrintIntro();
    PlayGame();
    AskToPlayAgain();
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

void PlayGame()
{
    // loop for the number of turns asking for guesses
    constexpr int NUMBERS_OF_TURNS = 5;
    for (int i = 0; i < NUMBERS_OF_TURNS; i++ ) {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    };
}

string GetGuess()
{
    // get a guess from the player
    cout << "Enter the name: ";
    string Guess;
    getline(cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    cout << "Do you want to play again ? Please press Yes (y) or No (n): ";
    string Responce;
    getline(cin, Responce);

    return (Responce[0] == 'y') || (Responce[0] == 'Y');
}
