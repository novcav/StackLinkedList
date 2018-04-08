// Stack a Last-In-First-Out (LIFO) data structure. 
//  In a LIFO data structure, the last element added to the stack will be the first one to be removed

#pragma once

typedef struct STACK STACK;

struct STACK{
	int val;
	STACK *Next;
};

class CStack
{
private:
	STACK *Top;
	unsigned int Count;

public:
	CStack();
	~CStack();

	bool IsEmpty();
	void Add(int val);
	void Remove(int *val);
	void RemoveAll();

	int GetCount();
};

