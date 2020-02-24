#include <stdio.h>

int main()
{
	int eng=0, num=0, kong=0, other=0;
	char ch;
	ch = getchar();
	while (ch != EOF)
	{
		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
			eng++;
		else if (ch >= 49 && ch <= 57)
			num++;
		else if (ch == 32)
			kong++;
		else
			other++;
		ch = getchar();
	}
	printf("%d %d %d %d" ,eng ,num ,kong ,other);
	return 0;
}
