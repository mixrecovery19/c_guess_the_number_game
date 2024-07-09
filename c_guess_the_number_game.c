#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, oneTwoSev, guess, attempts = 0;
    
    srand(time(0));    
    number = rand() % 100 + 1;
    oneTwoSev = 127;

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have picked a number between 1 and 100.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess = oneTwoSev) {
            printf("Switch ECU to race mode");
        } else if (guess < 1 || guess > 100) {
            printf("Please input a number between 1 and 100.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}