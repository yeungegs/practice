// simple C program to traverse a linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

/**
 *This function prints contents of linked list starting from the given node
 */

void printList(struct node *n)
{
	while (n != NULL)
	{
		printf(" %d ", n->data);
		printf("\n");
		n = n->next;
	}
}

int main()
{
	struct node *head;
        struct node *second;
	struct node *third;

	head = NULL;
	second = NULL;
	third = NULL;

	/* allocate 3 nodes in the heap */
	head = (struct node*)malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));

	/* assign data in first node */
	head->data = 1;
	
	/* link first node with second */
	head->next = second;

	/* assign data to second node */
	second->data = 2;

	/* link second node with third */
	second->next = third;

	third->data = 3;
	third->next=NULL;

	printList(head);
	
	return (0);
}
