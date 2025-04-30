# Number Guessing Game in C

This is a simple console-based number guessing game written in C. The program randomly selects a number between 1 and 100, and the user attempts to guess the number. After each guess, the program provides feedback on whether the guess was too high or too low.

## 🧠 How It Works

- The program generates a random number using the current time as the seed.
- The user is prompted to guess the number repeatedly.
- The program gives hints:
  - "higher number please" if the guess is too low.
  - "lower number please" if the guess is too high.
- Once the correct number is guessed, the program congratulates the user and shows the total number of attempts.

## 📄 Code Highlights

- Uses `rand()` and `srand(time(0))` to generate random numbers.
- Uses a `do-while` loop to handle repeated guesses.
- Tracks number of attempts with `no_of_guesses`.

## ▶️ How to Run

1. **Compile the code** using GCC:
   ```bash
   gcc guess_game.c -o guess_game
