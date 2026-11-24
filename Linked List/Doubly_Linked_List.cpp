#include <iostream>
using namespace std;

// Structure of a Doubly Linked List Node
struct node
{
    int data;
    node* prev;
    node* next;
};

int main()
{
    // Declare head and tail pointers
    node* head = NULL;
    node* tail = NULL;

    // Create five nodes dynamically
    node* node1 = new node;
    node* node2 = new node;
    node* node3 = new node;
    node* node4 = new node;
    node* node5 = new node;

    // Store user input in five nodes
    cout << "Enter five integer values: " << endl;

    cin >> node1->data;
    cin >> node2->data;
    cin >> node3->data;
    cin >> node4->data;
    cin >> node5->data;

    // Connect the first node
    node1->prev = NULL;
    node1->next = node2;

    // Connect the second node
    node2->prev = node1;
    node2->next = node3;

    // Connect the third node
    node3->prev = node2;
    node3->next = node4;

    // Connect the fourth node
    node4->prev = node3;
    node4->next = node5;

    // Connect the fifth node
    node5->prev = node4;
    node5->next = NULL;

    // Set head and tail pointers
    head = node1;
    tail = node5;

    // Forward Traversal
    cout << "\nForward Traversal:" << endl;

    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal:" << endl;

    temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    // Count total number of nodes
    int count = 0;
    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // Display total nodes
    cout << "\nTotal Nodes: " << count << endl;

    // Free dynamically allocated memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    return 0;
}

