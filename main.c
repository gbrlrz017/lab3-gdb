#include <stdio.h>
#include "myCString.h"
#include <stdlib.h>

int main () {
	char str1[] = "Hello!!";
	char str2[20];
	char str3[20];
	char str4[40] ;

	char* a = "abc";
	char* b = "abcd";

	printf("Testing strcpy, strncpy, strcat, strncat\n");
	mystrcpy(str4, "This is a string.");

	mystrcpy(str2, str1);
	
	mystrncpy(str3, str1, 10);
	
	mystrcat(str4, str3);
	
	mystrncat(str4, str1, 3);

	printf("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);

	printf("Testing strcmp\n");

	int result = mystrcmp(a, b);
	printf("%d", result);


	
	printf("\nTesting mystrchr\n");

	char str[] = "This is a sample string";
	char * pch;
	pch = mystrchr(str, 'X');

	if (pch == 0)
		printf("Null");
	else
		printf("%c\n", *pch);

	printf("\nTesting strstr\n");

	pch = strstr(str, "sample");
	if (pch == 0)
		printf("NULL");
	else puts(pch);
	

	return 0;


}
