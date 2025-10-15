//Basic Linked List Program in C++.
#include <iostream>
using namespace std;

// Define Node structure
class Node {
public:
    int data;
    Node* next;
};

// Function to print the linked list
void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main() {
    // Create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data and connect nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print the linked list
    cout << "Linked List elements: ";
    printList(head);

    return 0;
}
