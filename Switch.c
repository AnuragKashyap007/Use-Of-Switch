#include <stdio.h>
int main()
{ 
printf("Enter number between 1 to 5 :" );
int x = 0;
scanf("%d",&x);
switch (x) 
{ 
case 1: printf("Sandwitch \nRs 149");
break;
case 2: printf("Pizza \nRs 239");
break;
case 3: printf("French Fries \nRs 99");
break;
case 4: printf("Burger \nRs 129");
break;
case 5: printf("Pasta \nRs 179");
break;
default:printf("Choice other than 1, 2, 3, 4 and 5");
}
return 0;
}
