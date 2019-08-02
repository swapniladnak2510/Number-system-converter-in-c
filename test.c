#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"conio.h"
void dec();
void oct();
void hex();
void main()
{
	int c;
	printf("\t\t\t\t\t* WELCOME TO BINARY CONVERTER *");
	while(1)
{
printf("\n\n\nEnter the choice(which number you are entering)\n1:Decimal\n2:octal\n3:hexadcimal\n4:exit");
scanf("\n%i",&c);
switch(c)
{
case 1:
dec();
break;
case 2:
oct();
break;
case 3:
hex();
break;
default:
exit(0);
break;
}
}
}
void dec()
{
	long int n;
	int a[50],i;
	printf("\nEnter the number");
	scanf("%li",&n);
	printf("\nwe got our answer and our binary number is ");
	while(n!=0)
	{for(i=0;i<50;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
}
for(i=49;i>=0;i--)
{
	printf("%i",a[i]);
	}	
}
void oct()
{
long int i=0;
char b[100];
printf("\nEnter the octal number");
scanf("%s",b);
printf("\nBinary number: ");
while(b[i])
	{
		switch(b[i])
		{
		case '0' :
		 printf("000");
				break;
			case '1' :
			 printf("001");
				break;
			case '2' :
			 printf("010");
				break;
			case '3' :
			 printf("011");
				break;
			case '4' :
			 printf("100");
				break;
			case '5' :
			 printf("101");
				break;
			case '6' :
			 printf("110");
				break;
			case '7' :
			 printf("111");
				break;
				default:
				printf("\n!!!!ohhh sorry can't convert....please check your number and try again....above answer is wrong..this is not required binary number");
				exit(0);
				
		}
		i++;
	}
}
void hex()
{
	long int i=0;
	char b[100],h[100];
	printf("\nenter the hexadecimal number ");
	scanf("%s",b);
	printf("\nBinary number: ");
	while(b[i])
	{
		switch(b[i])
		{
		case '0' :
		 printf("0000");
				break;
			case '1' :
			 printf("0001");
				break;
			case '2' :
			 printf("0010");
				break;
			case '3' :
			 printf("0011");
				break;
			case '4' :
			 printf("0100");
				break;
			case '5' :
			 printf("0101");
				break;
			case '6' :
			 printf("0110");
				break;
			case '7' :
			 printf("0111");
				break;
			case '8' :
			 printf("1000");
				break;
			case '9' : 
			printf("1001");
				break;
			case 'A' :
			 printf("1010");
				break;
			case 'B' :
			 printf("1011");
				break;
			case 'C' :
			 printf("1100");
				break;
			case 'D' : 
			printf("1101");
				break;
			case 'E' : 
			printf("1110");
				break;
			case 'F' :
			 printf("1111");
				break;
				default:
				printf("\n!!!!ohhh sorry can't convert....please check your number and try again....above answer is wrong..this is not required binary number");
				exit(0);
		}
		i++;
	}
}
