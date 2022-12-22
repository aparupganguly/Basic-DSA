#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("After Traversal of the Linked list we get : %d\n", ptr->data);
        ptr = ptr-> next;

    }
}
int main()

{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;

    first->data = 9;
    first->next = second;

    second->data = 8;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    Traversal(head);

    return 0;
}