#pragma once
template <typename T>
struct Node
{
	T data;
	Node* next;
	
	Node(T val) {
		data = val;
		next = nullptr;
	}
};

