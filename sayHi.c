#include <stdio.h>

void sayHi(char name[]) {
    printf("Hi %s.\nYou are welcome here.\nThank you for your presence", name);
}

void main() {
    char name[20];
    printf("What is your name?\n");
    fgets(name, 20, stdin);
    sayHi(name);
}