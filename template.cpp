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

template <int N, int D> struct Frak{
	static const long Num = N;
	static const long Dem = D;
};

template <int N, typename F> struct ScalarMultiplication{
	typedef Frak<N*F::Num, N*F::Dem> result;
};

int main()
{
	std::cout << "Factorial of 7 = " << Factorial<7>::result << std::endl;
	typedef Frak<2, 3> TwoThirds;
	typedef ScalarMultiplication<3, TwoThirds>::result ThreeTwoThirds;
	std::cout << ThreeTwoThirds::Num;
	return 0;
}

