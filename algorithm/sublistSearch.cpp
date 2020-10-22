#include <bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
	int data; 
	Node* next; 
}; 

bool findList(Node* first, Node* second) 
{ 
	Node* ptr1 = first, *ptr2 = second; 

	if (first == NULL && second == NULL) 
		return true; 

	if ( first == NULL || 
		(first != NULL && second == NULL)) 
		return false; 
	while (second != NULL) 
	{ 
		while (ptr1 != NULL) 
		{ 
			// If second list becomes empty and first 
			// not then return false 
			if (ptr2 == NULL) 
				return false; 

			// If data part is same, go to next 
			// of both lists 
			else if (ptr1->data == ptr2->data) 
			{ 
				ptr1 = ptr1->next; 
				ptr2 = ptr2->next; 
			} 

			// If not equal then break the loop 
			else break; 
		} 
 
		if (ptr1 == NULL) 
			return true; 

		// Initialize ptr1 with first again 
		ptr1 = first; 

		// And go to next node of second list 
		second = second->next; 
	} 

	return false; 
} 

{ 
	while (node != NULL) 
	{ 
		printf("%d ", node->data); 
		node = node->next; 
	} 
} 

// Function to add new node to linked lists 
Node *newNode(int key) 
{ 
	Node *temp = new Node; 
	temp-> data= key; 
	temp->next = NULL; 
	return temp; 
} 

/* Driver program to test above functions*/
int main() 
{ 
	/* Let us create two linked lists to test 
	the above functions. Created lists shall be 
		a: 1->2->3->4 
		b: 1->2->1->2->3->4*/
	Node *a = newNode(1); 
	a->next = newNode(2); 
	a->next->next = newNode(3); 
	a->next->next->next = newNode(4); 

	Node *b = newNode(1); 
	b->next = newNode(2); 
	b->next->next = newNode(1); 
	b->next->next->next = newNode(2); 
	b->next->next->next->next = newNode(3); 
	b->next->next->next->next->next = newNode(4); 

	findList(a,b) ? cout << "LIST FOUND" : 
					cout << "LIST NOT FOUND"; 

	return 0; 
} 