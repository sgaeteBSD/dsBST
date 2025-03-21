#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

class bst {
public:
  bst();
  ~bst();
  void insert(BTNode* &pass, int &data);
  bool remove(BTNode* &root, int key);
  BTNode* search(int key, bool self);
  BTNode* &getRoot();
  void print();
private:
  BTNode* root;
  BTNode* trueSearch(BTNode* node, int key, bool self);
};

#endif
