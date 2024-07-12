#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int tries = 0;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    while (tries < 7) { // Allow the player to guess up to 7 times
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    if (guess != secretNumber) {
        cout << "Sorry, you didn't guess the number. The correct number was " << secretNumber << "." << endl;
    }

    return 0;
}