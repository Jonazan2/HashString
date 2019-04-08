#include <iostream>
#include <cstring>
#include <array>

#include "hash.h"


int main(int argc, char** argv)
{
	std::array<uint64_t, 2> array_hashed_test = { Hash("red"), Hash("blue") };

	constexpr uint64_t str_hashed = Hash("red");
	for (uint64_t hash : array_hashed_test)
	{
		if (str_hashed == hash)
		{
			std::cout << "red is in the array\n";
		}
	}

	return 0;
}