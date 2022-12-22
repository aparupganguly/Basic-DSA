
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocates the memory in heap memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = NULL;

    printf("Head Data Of the Linked List is : %d\n", head->data);

    return 0;
}