#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at end in O(1) using tail
void insertAtEnd(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Display + Count in one traversal O(n)
void displayAndCount(Node* head) {
    int count = 0;
    Node* temp = head;

    cout << "Linked List: ";
    while (temp != NULL
	) {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;
}

// Free memory safely
void freeList(Node* &head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int value;

    cout << "Enter 5 values: ";
    for (int i = 0; i < 5; i++) {
        cin >> value;
        insertAtEnd(head, tail, value);
    }

    displayAndCount(head);
    freeList(head);

    return 0;
}
