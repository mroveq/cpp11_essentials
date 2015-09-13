// ---------------------------------------------------------------------------
// This software is in the public domain, furnished "as is", without technical
// support, and with no warranty, express or implied, as to its usefulness for
// any purpose.
//
// auto_curio_1.cpp
// Auto curio nr 1
//
// Author: lucas <lucas@mroveq.com>
// ---------------------------------------------------------------------------

#include <iostream>
#include <typeinfo>

int main()
{
	auto a_1 = 100;
	auto a_2(100);
	auto a_3 = { 100 };
	auto a_4{100};

	// a_1 and a_2 is int type
	std::cout << typeid(a_1).name() << std::endl;
	std::cout << typeid(a_2).name() << std::endl;

	// what do you think? What type will be?
	std::cout << typeid(a_3).name() << std::endl;
	std::cout << typeid(a_4).name() << std::endl;

	return 0;
}
