// Stack a Last-In-First-Out (LIFO) data structure. 
//  In a LIFO data structure, the last element added to the stack will be the first one to be removed

#include "stdafx.h"
#include "stack.h"

// constructor
CStack::CStack()
{
	Top = NULL;
	Count = 0;
}

// destructor
CStack::~CStack()
{
	RemoveAll();
}

// determine if stack is empty
bool CStack::IsEmpty()
{
	return (Top == NULL);
}

// add node to the top of the stack
//
//
//          +------------+
//          |            |     Node
//          +------------+
//                |
//                v
//
//
//
//          +------------+
//          |            |   Top
//          +------------+
//                |
//                v
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//               NULL
//
void CStack::Add(int val)
{
	STACK *Node;

	Node = new STACK;

	Node->val = val;
	Node->Next = NULL;

	if(IsEmpty())
	{
		Top = Node;
	}
	else
	{
		Node->Next = Top;
		Top      = Node;
	}

	Count++;
}

// remove the top node of the stack
//
//
//          +------------+
//          |            |   Top
//          +------------+
//                |
//                v
//
//
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//          +------------+
//          |            |
//          +------------+
//                |
//                v
//               NULL
//
void CStack::Remove(int *val)
{
	STACK* Node;

	Node = Top;
	Top = Top->Next;

	*val = Node->val;

	delete Node;
	Count--;
}

// remove all nodes
void CStack::RemoveAll()
{
	int val;

	while(!IsEmpty()) Remove(&val);
}

// return total node of the stack
int CStack::GetCount()
{
	return Count;
}
