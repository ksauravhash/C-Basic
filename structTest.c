#include <stdio.h>

struct Item {
    int health, timeLimit;
    char name[20];
};

void main() {
    struct Item ball;
    ball.health = 100;
    ball.timeLimit = 250;
    strcpy(ball.name, "Ball");

}
