#pragma once
template <typename T>
class array
{
	static const unsigned size = 10;
	T elems[size];
public:
	T & operator[](unsigned i)
		throw (std::out_of_range){
		//����Ԫ��ʱ���Ƚ���
		if (i >= size)
			throw std::out_of_range("Access out of range");
		else return elems[i];
	}
};