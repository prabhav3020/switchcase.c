#include<stdio.h>
main()
{
	printf("enter the number : \n1. pizza\n2. burger\n3. pasta\n4. french fries\n5. sandwich" );
	int x=0;
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("your pizza is Rs239");
			break;
		case 2:	
		    printf("your burger is Rs129");
			break;
		case 3:
		    printf("your pasta is Rs179");
			break;
		case 4:
		    printf("your french fries is Rs99");
			break;
		case 5:
		    printf("your sandwich is Rs149");
			break;			
	}
}
