#include<iostream>
using namespace std;

void add(ListNode*, int);
void print(ListNode*);
void remove(ListNode*, int);

class ListNode{
	public: 
		ListNode* next;
		int data;
};
int main(){

	ListNode* head;
	
	add(head, 10);
	add(head, 20);
	add(head, 30);

	print(head);

	remove(head, 20);
	
	print(head);
	
	return 0;
}

void add(ListNode*, int){
}

void print(ListNode*){
}

void remove(ListNode*, int){
}