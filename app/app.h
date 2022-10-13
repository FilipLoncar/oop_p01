#pragma once

#include <string>
#include <iostream>

namespace vsite::oop::p1 
{
/*  
* function declarations
*/

	double f1(int a, int b);
	bool f2(bool a);
	int f3(int a = 1, int b = 2, int c = 3, int d = 4);

	std::string f4(int a);
	std::string f4(bool a);
	std::string f4(double a);

	bool f5(std::string& s, int a);

}
