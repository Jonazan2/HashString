#pragma once

#include <cstdint>

constexpr uint32_t Stringlength(const char* str)
{
	return *str ? 1 + Stringlength(str + 1) : 0;
}

constexpr uint64_t Hash(const char* str)
{
	constexpr uint64_t basis = 0xcbf29ce484222325;
	constexpr uint64_t prime = 0x100000001b3;

	uint64_t hash = basis;
	const uint32_t len = Stringlength(str);
	for (uint32_t i = 0; i < len; i++)
	{
		hash = hash ^ str[i];
		hash = hash * prime;
	}
	return hash;
}
