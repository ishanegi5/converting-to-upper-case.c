#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()

{ char str1[50]="hello, world!";

char str2[50]; 

printf("Lower case of string: ");

puts(str1);

for(int i=0;i<strlen(str1);i++)

{
      str2[i]=toupper(str1[i]);

}
str2[strlen(str1)]='\0';

printf("upper case of string: ");
puts(str2);
}

