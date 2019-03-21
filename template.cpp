/*
 * template.cpp
 * Copyright (C) 2019 chris <chris@christopher>
 *
 * Distributed under terms of the MIT license.
 */
#include  <iostream>

template<int N> struct Factorial{
	static const int result = N*Factorial<N-1>::result;
};

template <> struct Factorial<0>{
	static const int result = 1;
};

int main()
{
	std::cout << "Factorial of 7 = " << Factorial<7>::result << std::endl;
	return 0;
}
