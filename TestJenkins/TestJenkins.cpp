// TestJenkins.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <assert.h>

int fn_1();

int main()
{
	int x = fn_1();

	printf("x = %d\n", x);

	assert(x == 42);

    return 0;
}

int fn_1() {
	return 1;
}

