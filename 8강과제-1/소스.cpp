#include <stdio.h>

int main()
{
	char a = '*';
	char* b = &a;

	printf("�ּ�: %d �ڵ尪: %d ����: %c\n", &b, *b, *b);

	return 0;
}