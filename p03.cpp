#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "Linked List after inserting at beginning: ";
    printList(head);

    return 0;
}

/*
output
Linked List after inserting at beginning: 10 20 30
*/

