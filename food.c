#include <stdio.h>

int main()
{
    printf("pick an item:\n1.pizza\n2burger\n3.pasta\n4.frenchfries\n5.sandwitch");
    int choice=0;
    printf("\nenter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("food item pizza price-rs239");
        break;
        case 2:
        printf("food item burger price-rs129");
        break;
        case 3:
        printf("food item -pastaprice rs179");
        break;
        case 4:
        printf("food item -french fries price is rs 99");
        break;
        case 5:
        printf("food item-sandwich price rs 149");
        break;
        default:printf("invalid choice");
        
    }   
}
