#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T &p1, T &p2)
{
	T	temp(p1);

	p1 = p2;
	p2 = temp;
}

template<typename T> const T min(const T &p1, const T &p2)
{
	if (p1 < p2)
		return p1;
	else
		return p2;
}

template<typename T> const T max(const T &p1, const T &p2)
{
	if (p1 > p2)
		return p1;
	else
		return p2;
}


#endif
