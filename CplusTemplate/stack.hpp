#pragma once
#include <stdexcpt.h>
template <typename T> class my_stack; // Previous define.
template <typename T>
class listNode 
{
	T value;
	listNode *next;
	listNode(T const &v, listNode *n) :
		value(v), next(n) {}

	friend class my_stack<T>;
};

template <typename T=int>
class my_stack 
{

};
