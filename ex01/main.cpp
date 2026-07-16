#include "iter.hpp"





int main( void )
{
	int size;

	std::string stringARR[3] = {"MANUEL", "FERNANDEZ",  "ESTEBAN"};
	const char* charARR = "ELISA";
	int intARR[3] = {34, -77, 25};
	float floatARR[3] = {3.4f, -7.7f, 2.5f};
	double doubleARR[3] = {34.34, -77.77, 25.25};

	size = sizeof(stringARR) / sizeof(stringARR[0]);
	::iter(stringARR, size, printT<std::string>);
	std::cout << std::endl;

	size = std::strlen(charARR);
	::iter(charARR, size, printT<char>);
	std::cout << std::endl;

	size = sizeof(intARR) / sizeof(intARR[0]);
	::iter(intARR, size, printT<int>);
	std::cout << std::endl;

	::iter(intARR, size, plusOne<int>);
	std::cout << std::endl;

	::iter(intARR, size, printT<int>);
	std::cout << std::endl;

	size = sizeof(floatARR) / sizeof(floatARR[0]);
	::iter(floatARR, size, printT<float>);
	std::cout << std::endl;

	::iter(floatARR, size, plusOne<float>);
	std::cout << std::endl;

	::iter(floatARR, size, printT<float>);
	std::cout << std::endl;

	size = sizeof(doubleARR) / sizeof(doubleARR[0]);
	::iter(doubleARR, size, printT<double>);
	std::cout << std::endl;

	::iter(doubleARR, size, plusOne<double>);
	std::cout << std::endl;

	::iter(doubleARR, size, printT<double>);
	std::cout << std::endl;

	return (0);
}
