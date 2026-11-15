
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secretNumber, guess;
    int attempts = 0;

    /* Initialize random number generator */
    srand((unsigned int)time(NULL));

    /* Generate a random number between 1 and 100 */
    secretNumber = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess the number between 1 and 100.\n");

    while (1)
    {
        printf("Enter your guess: ");
        fflush(stdout);

        if (scanf("%d", &guess) != 1)
        {
            printf("Invalid input! Please enter an integer.\n");
            return 1;
        }

        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }

        attempts++;

        if (guess < secretNumber)
        {
            printf("Too low! Try a higher number.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try a lower number.\n");
        }
        else
        {
            printf("\nCongratulations! You guessed correctly.\n");
            printf("Correct number: %d\n", secretNumber);
            printf("Total attempts: %d\n", attempts);
            printf("Final score: %d points\n", 100 - (attempts - 1));
            break;
        }
    }

    return 0;
}
