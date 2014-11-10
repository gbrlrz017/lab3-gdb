#ifndef MYCSTRING
#define MYCSTRING

#include <stdio.h>


int mystrlen(const char *s) {

	int i = 0;
	while (s[i] != '\0')
		i++;

	return i;

}
char * mystrcpy(char * destination, const char * source) {

	unsigned i;
	for (i=0; source[i] != '\0'; ++i)
		destination[i] = source[i];
	destination[i] = '\0';
	return destination;

}

char * mystrncpy(char * destination, const char * source, const int n) {
	int i;

	for (i = 0; i< n && source[i] != '\0'; i++)
		destination[i] = source[i];
	for ( ; i < n; i++)
		destination[i] = '\0';

	return destination;
}

char * mystrcat(char * destination, const char * source) {
	
	int dest_len = mystrlen(destination);
	int i;
	for (i = 0; source[i]!= '\0'; i++)
		destination[dest_len + i] = source[i];
	destination[dest_len + i] = '\0';

	return destination;

}
char* mystrncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = mystrlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return dest;
}

int mystrcmp(const char *s1, const char *s2) {

	int status;
	int i = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}			
	}

	if (s1[i]=='\0' && s2[i]=='\0')
		return 0;
	else if (s1[i] != '\0')
		return 1;
	else if (s2[i] != '\0')
		return -1;
}

int mystrncmp(const char *s1, const char *s2, int n) {

	int status;
	int i = 0;
	for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}			
	}

	if (i == n)
		return 0;
	else if (s1[i]=='\0' && s2[i]=='\0')
		return 0;
	else if (s1[i] != '\0')
		return 1;
	else if (s2[i] != '\0')
		return -1;
}

char * mystrchr (const char * str, int character) {
	int i;
	

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == character) {
			return   &(str[i]);
			
		}
	}
	
	return 0;

}

char *mystrstr(char * str1, const char * str2) {

	int i;

	for (i = 0; str1[i] != '\0'; i++) {
		if(strcmp( str1+i, str2) == 0 )
		{
			return str1 + i; 
		}
		/*if (str1[i] == str2[0]) {
			
			for (j = 1; str1[i+j] == str2[j] && 
				str1[i+j] != '\0' && str2[j] != '/0'; ++j)
			{				
				
			}
			if ( 
		} */
	}
	return NULL; 
}

#endif
