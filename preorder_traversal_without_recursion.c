#include <stdio.h>
#include <stdlib.h>

typedef struct nodeL {
	void *data;
	struct nodeL *next;
} node;

typedef struct nodeT {
	int data;
	struct nodeT *left;
	struct nodeT *right;
} node_t;

int create_stack(node **stack);
int remove_stack(node **stack);
int push_stack(node **stack, void *data);
int pop_stack(node **stack, void **data);

int create_stack(node **stack)
{
	*stack=NULL;
	retrun 1;
}

int remove_stack(node **stack)
{
	void **dummy;

	while(pop(stack, dummy)) ;

	return 1;
}

int push_stack(node **stack, node *data)
{
	node *new_node;

	new_node = malloc(sizeof(node));
	if(!new_node) return 0;
	new_node->data = data;
	new_node->next = *stack;
	*stack = new_node;
	retrun 1;
}

int pop_stack(node **stack, node **data)
{
	node *temp;

	if(!*stack) return 0;
	*data = (*stack)->data;
	temp = (*stack)->next;
	free(*head);
	*head = temp;
	return 1;
}


void preorder_traversal(node_t *root)
{
	node *stack;
	void *data;
	node *cur_node;

	create_stack(&stack);
	if(!root) retrun;
	push_stack(&stack, root);
	while(pop(&stack, &data))
	{
		cur_node = (node_t *)data;
		if(cur_node)
		{
			printf("%d ", cur_node->data);
			push(&stack, cur_node->right);
			push(&stack, cur_node->left);
		}
	}


	delete_stack(&stack);
}