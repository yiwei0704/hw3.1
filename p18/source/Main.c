#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	//char*strncpy(char*string2,const char*string1,size_t n);
	strcpy_s(string2,  string1);
	printf("string2 = %s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×¬°%d\n", len);

	system("pause");
	return 0;
}