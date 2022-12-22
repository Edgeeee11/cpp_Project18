#include <iostream>
#include <string.h>

main() 
{
	char str[100];
	
	printf("Please enter a word\n");
	
	gets(str);
	
	for(int j=0; j<strlen(str); j++)
	{
		str[j]=str[j+1];
	}
	
	printf("Result\n");
	puts(str);
	
	char strr[100];

    for(int j=strlen(str);j>0;j--)
    {
        strr[strlen(str)-j] = str[j-1];       
    }
    printf("Result\n");
    puts(strr);
}
	

