#pragma once
struct Node
{
	T data;
	Node* next;
	Node(const T& val, Node* pNext = NULL):data(val),next(pNext){}
};
