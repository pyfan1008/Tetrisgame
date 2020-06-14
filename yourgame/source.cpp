#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>


// SHORT GetKeyState(int nVirtKey);


int main()
{
	char a;
	while (1)
	{
		a = _getch();
		if (a == 'a')
		{
			std::cout << 'a' << "ÀÔ´Ï´Ù." << std::endl;
		}
		printf("%c %d\n", a, a);
	}

}