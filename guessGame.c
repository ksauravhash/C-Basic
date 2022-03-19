#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void main() {
    srand(time(0));
    int guessNumber;
    int randomNumber = rand()%10;
    bool isValueGuessed = false;

    int i = 1;
    while(i<=10) {
        printf("What is the secret number?\n");
        scanf("%d", &guessNumber);
        if(guessNumber < randomNumber)
            printf("Your number is smaller than the acutal number.\n");
        else if(guessNumber > randomNumber)
            printf("Your number is greater than the acutal number.\n");
        else {
            isValueGuessed=true;
            break;
        }
        i++;
    }
    if(isValueGuessed)
        printf("You win!");
    else
        printf("You have lost all your lives. You lose!");
}