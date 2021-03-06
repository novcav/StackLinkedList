// 
// This is a program to implement singly linked list stack.
//

#include "stdafx.h"
#include "stack.h"

int main()
{
	int val;
	CStack stack;
	
	printf("Stack a Last-In-First-Out (LIFO) data structure.\n\n");
	printf("In a LIFO data structure, the last element added to the stack\n");
	printf("will be the first one to be removed as shown in the example.\n\n");

	printf("Items are added to stack in an order as follow:\n\n");

	for (val = 0; val < 10; ++val)
	{
		printf("Item No. %d\n", val);
		stack.Add(val);
	}
	
	printf("\nThen, items are removed from stack.\n\n");

	while(!stack.IsEmpty())
	{
		stack.Remove(&val);
		printf("Item No. %d\n", val);
	}


	printf("\nPress any key to exit.\n");
	getchar();

    return 0;
}

