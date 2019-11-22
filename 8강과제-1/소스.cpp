#include <stdio.h>

int main()
{
	char a = '*';
	char* b = &a;

	printf("주소: %d 코드값: %d 문자: %c\n", &b, *b, *b);

	return 0;
}