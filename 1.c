//Reverse a String using Stack

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char ch) {
    stack[++top] = ch;
}

// Pop function
char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop to reverse
    printf("Reversed string: ");
    for(i = 0; i < strlen(str); i++) {
        printf("%c", pop());
    }

    return 0;
}