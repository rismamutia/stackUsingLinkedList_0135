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
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next pointer of the new node to the current
        top = newNode; // 4. update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }

    //is empty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; //return true if the top pointer is NULL, indicating an empty stack
    }

    //Pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; //if the stack is empty, print message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; //update the top pointer to the next node
    }
}
