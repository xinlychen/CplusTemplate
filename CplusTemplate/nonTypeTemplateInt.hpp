#pragma once
template <typename T>
class array
{
	static const unsigned size = 10;
	T elems[size];
public:
	T & operator[](unsigned i)
		throw (std::out_of_range){
		//访问元素时首先进行
		if (i >= size)
			throw std::out_of_range("Access out of range");
		else return elems[i];
	}
};