//============================================================================
// Name        : tree.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TreeNode.h"
#include "Tree.h"
int InputANumber()
{
	int a;
	std::cout<<"input a number that you want to search for: ";
	std::cin>>a;
	return a;
}


int main() {
	//Instantiate a tree of integers.
	//fill it with 10 different predefined integers (unsorted!)
	Tree<int> tree1;
	tree1.insertNode(27);
	tree1.insertNode(13);
	tree1.insertNode(42);
	tree1.insertNode(6);
	tree1.insertNode(17);
	tree1.insertNode(33);
	tree1.insertNode(48);
	tree1.insertNode(50);
	tree1.insertNode(47);
	tree1.insertNode(20);
	tree1.insertNode(11);
	tree1.insertNode(1);
	//int A=0;
	//A=InputANumber();
	//tree1.search(A);//search( const NODETYPE value )
	//outputTree(tree1);

	std::cout<<"Right First In order:\n";
	tree1.RightFirstInOrderTraversal();
	return 0;
}
