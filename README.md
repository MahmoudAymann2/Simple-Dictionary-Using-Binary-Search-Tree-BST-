# Simple-Dictionary-Using-Binary-Search-Tree-BST-
This project implements a simple dictionary using a Binary Search Tree (BST) in C++. The dictionary allows users to perform basic operations such as creating the dictionary, displaying its contents, searching for a keyword, deleting a keyword, and inserting new keywords.

Features:
Create Dictionary: Allows the user to input keywords and their meanings to build the dictionary.
Display Dictionary: Displays all keywords and their meanings in sorted order (in-order traversal of BST).
Search Keyword: Searches for a specific keyword in the dictionary and displays the number of comparisons made.
Delete Keyword: Deletes a specified keyword from the dictionary.
Insert Keyword: Inserts a new keyword and its meaning into the dictionary at the correct position.

Code Structure:

1) Node Structure:
Represents each node in the BST.
Contains a keyword, its meaning, and pointers to left and right children.

2) Dictionary Class (dict):

  Public Members:
  root: Pointer to the root node of the BST.
  create(): Creates the dictionary by adding nodes.
  disp(node *): Displays the dictionary in sorted order.
  insert(node *root, node *temp): Inserts a new node into the BST.
  search(node *, char []): Searches for a keyword in the BST.
  del(node *, char []): Deletes a node with a specified keyword.
  min(node *): Finds the node with the minimum value in a subtree.
  
  Private Methods:
  None (all methods are public in this implementation).
