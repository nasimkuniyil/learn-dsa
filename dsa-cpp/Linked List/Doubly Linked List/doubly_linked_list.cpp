#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
  Node* prev;

  Node() : data(0), next(nullptr), prev(nullptr) {}
};

int main() {
  cout << "Hey Nasim, are you ready to learn Doubly Linked List?" << endl;
  return 0;
}
