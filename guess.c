#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    printf("WELCOME TO THE RANDOM GUESS GAME \n");
    int a;
    int i = 0;
    printf("Enter the number:");
    scanf("%d", &a);
    while(a!=number) {
        if(a>number) {
            printf("Lower number please:");
            scanf("%d", &a);
            i++;
        } else if(a<number){
            printf("Greater number please:");
            scanf("%d", &a);
            i++;
        } else {
            printf("Please enter a valid number");
        }
    }
    printf("You finally guessed the number! \n");
    printf("The number of guesses taken were: %d \n", i+2);
    return 0;
}
