#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number
    int randomNumber = (rand() % 100) + 1;
    int guessed;
    int no_of_guesses = 0;

    do{
    printf("guess the number :  ");
    scanf("%d", &guessed);

    if(guessed < randomNumber){
        printf("higher number please\n");
    }
    else if (guessed > randomNumber){
        printf("lower number please\n");
    }
    else{
        printf("you guessed it right\n");
    }
    no_of_guesses++;

    }while(guessed != randomNumber);

    printf("you guessed it in %d attempts", no_of_guesses);

    return 0;
}
