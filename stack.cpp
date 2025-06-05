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

    //Peek/top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if(isEmpty())
        {
            cout << "List is empty." << endl;
            return; //if the stack is empty, print a message and return
        }
        else{
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }// Return the value of the top node
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choise: ";
        cin >> choise;

        switch(choise)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); //push the enterred value onto the stack

        }
    }  
     

}
