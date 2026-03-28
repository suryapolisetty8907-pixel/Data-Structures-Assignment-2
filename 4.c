//Printer Queue Simulation

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX - 1) {
        printf("Queue Full\n");
        return;
    }
    if(front == -1) front = 0;
    queue[++rear] = x;
}

void dequeue() {
    if(front == -1) {
        printf("Queue Empty\n");
        return;
    }
    printf("Printed document: %d\n", queue[front++]);

    if(front > rear)
        front = rear = -1;
}

void display() {
    int i;
    if(front == -1) {
        printf("No pending documents\n");
        return;
    }
    printf("Pending documents: ");
    for(i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, doc;

    while(1) {
        printf("\n1.Add Document\n2.Print Document\n3.Display\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter document ID: ");
                scanf("%d", &doc);
                enqueue(doc);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
        }
    }
}