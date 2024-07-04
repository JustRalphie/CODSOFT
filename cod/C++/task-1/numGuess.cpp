#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // range of the number
  int min_number = 1;
  int max_number = 100;

  // get different number each time
  srand(static_cast<unsigned int>(time(0)));

  // generates the random number
  int number = rand() % (max_number - min_number + 1) + min_number;

  int guess, num_guesses = 0;

  cout << "I'm thinking of a number between " << min_number << " and " << max_number << ". Try to guess it!" << endl;

  // loops until the user guesses the number
  while (guess != number) {
    cout << "Take a guess: ";
    if (!(cin >> guess)) {
      cout << "Invalid input. Please enter a number." << endl;
      cin.clear();
      continue;
    }

    num_guesses++;

    // checks if the guess is correct
    if (guess == number) {
      cout << "You guessed it in " << num_guesses << " tries! Congratulations!" << endl;
    } else if (guess < number) {
      cout << "Too low, try again!" << endl;
    } else {
      cout << "Too high, try again!" << endl;
    }
  }

  return 0;
}
