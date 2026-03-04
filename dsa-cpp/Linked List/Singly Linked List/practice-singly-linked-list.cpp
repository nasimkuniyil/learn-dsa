#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;
  Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
  Node* head;

 public:
  int size = 0;

  LinkedList() { head = nullptr; }

  // add node at beginning
  void prependNode(int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
      head = newNode;
      size++;
      return;
    }

    newNode->next = head;
    head = newNode;
    size++;
  }

  // add node in the last
  void appendNode(int val) {
    Node* newNode = new Node(val);
    Node* current = head;

    while (current->next) {
      current = current->next;
    }
    current->next = newNode;
    size++;
  }

  // delete all nodes
  void deleteAllNodes() {
    if (!head) {
      cout << "list is empty" << endl;
      return;
    }
    Node* current = head;
    Node* temp = nullptr;
    while (current) {
      temp = current;
      current = current->next;
      delete temp;
    }
    size = 0;
    head = nullptr;
    cout << "deleted all nodes" << endl;
  }

  // delete last node
  void deleteLastNode() {
    if (!head) {
      cout << "node is empty" << endl;
      return;
    }
    Node* current = head;
    while (current->next->next) {
      current = current->next;
    }
    delete current->next;
    current->next = nullptr;
    size--;
  }

  // display all nodes from linked list
  void diplayAllNodes() {
    if (!head) {
      cout << "node is empty" << endl;
      return;
    }

    Node* current = head;

    while (current) {
      cout << current->data << " -> ";
      current = current->next;
    }
    cout << endl;
  }
};

int main() {
  LinkedList* list = new LinkedList();

  list->diplayAllNodes();
  list->prependNode(10);
  list->prependNode(20);
  list->prependNode(30);
  list->appendNode(40);
  cout << "size : " << list->size << endl;
  list->diplayAllNodes();
  list->deleteLastNode();
  cout << "size :" << list->size << endl;
  list->deleteAllNodes();
  list->diplayAllNodes();
  cout << "size :" << list->size << endl;

  delete list;
}
