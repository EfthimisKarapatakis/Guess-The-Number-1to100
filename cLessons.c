#include <stdio.h>
#include <stdlib.h>     // To use the rand() ans srand().
#include <time.h>       // To use time()

int main() {
    int guess;
    int i;
    int attemps = 0;
    //char more = 'b';

    srand(time(NULL));                  // We use this command to make rand() give each time a different number.
    int number = rand() % 100 + 1;      // Random number 1 to 100.
    printf("%d", number);

    for (i = 1; i >= 1; i++){
        printf("\n\nGuess a number 1 to 100: ");
        scanf("%d", &guess);

        if (guess > number){
            printf("The number you are searching is Smaller.\n");
            attemps++;
        } else if (guess < number){
            printf("The number you are searching is Bigger.\n");
            attemps++;
        } else {
            attemps++;
            printf("You found the Number, it was %i!\t", guess);
            printf("Attemps: %d \n\n", attemps);
            i = -1;
        }
    }

    return 0;
}

