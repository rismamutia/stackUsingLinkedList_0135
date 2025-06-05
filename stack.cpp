#include <iostream>
using namespace std;

//Node class representing a single node in the linkedlist
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack Class
class Stack
{
private:
    Node *top; //pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; //Initalize the stack with a null top pointer
    }

    //push operation: insert an element into the top of the stack

    int push(int value)
}
