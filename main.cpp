//.cpp
// Reverses a singly linked list using an iterative approach

#include <iostream>
#include <ctime>

#include "NodeClass.h"

void printList(NodeClassPtr head);
void headInsert(NodeClassPtr &head, NodeClassPtr &newItem);
void populateList(NodeClassPtr &head);
void ReverseList(NodeClassPtr &head);// Iterative approach

int main(void) {
    srand(time(0));

    NodeClassPtr head = NULL;
    populateList(head);

    std::cout<<"Original Singly-Linked List\n";
    printList(head);

    ReverseList(head);

    std::cout<<"Original Singly-Linked List Reversed\n";
    printList(head);
    
    return 0;
}

void ReverseList(NodeClassPtr &head){
    // Initialize current, previous and next
    NodeClassPtr current = head;
    NodeClassPtr prev = NULL;
    NodeClassPtr nextNode = NULL;

    while (current != NULL) {
        nextNode = current->getNext();// Stores currents next
        current->setNext(prev);// Reverse current node's pointer
        prev = current;// Moving one position ahead.
        current = nextNode;
    }
    head = prev;
}

void populateList(NodeClassPtr &head){
    for(int i=0; i<5; i++){
        int data=(rand() % 30);
        NodeClassPtr tempPush = new NodeClass(data);
        headInsert(head, tempPush);
    }
}

void printList(NodeClassPtr head) {
    for (NodeClassPtr itr = head; itr != NULL; itr = itr->getNext()) {//iterating through every node
        std::cout <<  itr->getData()<<" ";
    }
    std::cout << std::endl;
}

void headInsert(NodeClassPtr &head, NodeClassPtr &newItem) {
    newItem->setNext(head);
    head = newItem;
    newItem = nullptr;
}
