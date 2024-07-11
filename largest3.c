#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter THREE numbers:\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1>num2 && num1>num3)
    {
    printf("The number %d is largest of THREE.\n", num1);
    }
    else if( num2>num1 && num2>num3){
        printf("The number %d is largest of THREE.\n",num2);


    }
    else{
        printf("The number %d is largest of THREE.", num3);
    }
    return 0;
    
}