#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template<typename T, typename F> void iter(const T* arr, const int size, F function)
{
	for (int i = 0; i < size; i++)
		function(arr[i]);
}

template<typename T, typename F> void iter(T* arr, const int size, F function)
{
	for (int i = 0; i < size; i++)
		function(arr[i]);
}



template<typename T> void printT(const T &e)
{
	std::cout << e << std::endl;
}

template<typename T> void plusOne(T &e)
{
	e++;
}

#endif
