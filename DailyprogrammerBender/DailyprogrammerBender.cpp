// DailyprogrammerBender.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

unsigned int byte[8];
int asciiNumber = 0;
int _tmain(int argc, _TCHAR* argv[])
{
	byte[0] = 0;
	byte[1] = 1;
	byte[2] = 0;
	byte[3] = 0;
	byte[4] = 0;
	byte[5] = 0;
	byte[6] = 0;
	byte[7] = 0;




	
	for (int i = 0; i < 8; i++)
	{
		
		

		
		if (byte[i] == 1)
		{
			asciiNumber += 1 * pow(2, i);
		}
	}
	std::cout << asciiNumber << std::endl;

	system("pause");
}

