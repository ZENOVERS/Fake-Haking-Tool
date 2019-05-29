#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

int main()
{
	system("title IP HAKING");

	srand(time(NULL));
	int i1 = rand(), i2 = rand(), i3 = rand(), i4 = rand(), i5 = rand(), i6 = rand(), i7 = rand(), i8 = rand(), i9 = rand(), i10 = rand() % 3;
	int x = rand();
	int n1, n2, n3, n4;
	int admin, badmin;
	int enn;
	char s1[500];

at:
	i10 = rand() % 3;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\n\n\n\nPleas enter your opponent's IP (ex: 255 255 255 255) : ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 >= 0 && n1 <= 255 && n2 >= 0 && n2 <= 255 && n3 >= 0 && n3 <= 255 && n4 >= 0 && n4 <= 255)
	{
		goto inc;
	}
	else
	{
		goto at;
	}

inc:

	if (i10 == 1)
	{
		printf("\n\nSorry. I can' find.\nPleas enter again.");
		goto at;
	}
	else
	{
		goto aaa;
	}

aaa:

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	for (long long s = 0; s < 50000000; s++)
	{
		int as = 122312;
		as--;
		as++;
	}

	printf("\n\n\n\nchecking server... (plase wait)");
	for (int i = 1; i < 3; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;
			as++;
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\nchecking security... (plase wait)");
	for (int i = 1; i < 3; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;
			as++;
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n\ncollecting data... (plase wait)");
	for (int i = 1; i < 5; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;
			as++;
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("\n\nextracting data... (plase wait)");
	for (int i = 1; i < 7; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;
			as++;
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf("\n\nComplete!");

	printf("\n\n\n\n\nPleas enter the admin code: ");
	scanf("%s", s1);

	printf("\n\npleas wait...");
	for (int i = 1; i < 5; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;
			as++;
		}
	}

	int as = strcmp(s1, "ghdwlgns");

	if (as == 0)
	{
		printf("\n\n\n\nYou are an administrator!");
		admin = 1;
	}
	else if (as < 0)
	{
		printf("\n\n\n\nCRASH!");

		return 0;
	}
	else if (as > 0)
	{
		printf("\n\n\n\nYou are not an administrator.\nYou have a 50\%\% chance of success.");
		badmin = 1;
	}

	printf("\n\nNEXT? (1/0): ");
	scanf("%d", &enn);

	if (enn == 1)
	{
		enn += 1l;
	}
	else
	{
		return 0;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("\n\n\n\n\nEXTRACTED HEX CODE DATA: ");
	printf("\n");

	for (int i = 1; i < 7; i++)
	{
		for (long long s = 0; s < 500000000; s++)
		{
			int as = 122312;
			as--;

		}
	}

	int way = rand();
asas:
	way = rand() % 16;

	if (way < 1 || way > 15)
	{
		goto asas;
	}
	else if (way > 0 || way < 16)
	{
		goto a;
	}

a:


	for (long long s = 0; s < 50000000; s++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), way);
		printf("%d%d%c", i1, i2, i7);
		i1 = rand(), i2 = rand(), i3 = rand(), i4 = rand(), i5 = rand(), i6 = rand(), i7 = rand(), i8 = rand(), i9 = rand(), i10 = rand();

	as:

		way = rand() % 16;

		if (way < 1 || way > 15)
		{
			goto as;
		}
		else if (way > 0 || way < 16)
		{
			goto akm;
		}

	akm:

		for (int i = 1; i < 3; i++)
		{
			for (long long s = 0; s < 5000000; s++)
			{
				int as = 122312;
				as--;
			}
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), way);
		printf("%d%c%d", i1, i3, i9);
		i1 = rand(), i2 = rand(), i3 = rand(), i4 = rand(), i5 = rand(), i6 = rand(), i7 = rand(), i8 = rand(), i9 = rand(), i10 = rand();

	as1:

		way = rand() % 16;

		if (way < 1 || way > 15)
		{
			goto as1;
		}
		else if (way > 0 || way < 16)
		{
			goto akm1;
		}

	akm1:

		for (int i = 1; i < 3; i++)
		{
			for (long long s = 0; s < 5000000; s++)
			{
				int as = 122312;
				as--;
			}
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), way);
		printf("%d%d%d", i1, i6, i2);
		i1 = rand(), i2 = rand(), i3 = rand(), i4 = rand(), i5 = rand(), i6 = rand(), i7 = rand(), i8 = rand(), i9 = rand(), i10 = rand();

	a2s:

		way = rand() % 16;

		if (way < 1 || way > 15)
		{
			goto a2s;
		}
		else if (way > 0 || way < 16)
		{
			goto a2km;
		}

	a2km:

		for (int i = 1; i < 3; i++)
		{
			for (long long s = 0; s < 5000000; s++)
			{
				int as = 122312;
				as--;
			}
		}

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), way);
		printf("%c%d%c\n", i1, i8, i5);
		i1 = rand(), i2 = rand(), i3 = rand(), i4 = rand(), i5 = rand(), i6 = rand(), i7 = rand(), i8 = rand(), i9 = rand(), i10 = rand();

	a22s:

		way = rand() % 16;

		if (way < 1 || way > 15)
		{
			goto a22s;
		}
		else if (way > 0 || way < 16)
		{
			goto a22km;
		}

	a22km:

		for (int i = 1; i < 3; i++)
		{
			for (long long s = 0; s < 500000000; s++)
			{
				int as = 122312;
				as--;
			}
		}

	}

	return 0;
}