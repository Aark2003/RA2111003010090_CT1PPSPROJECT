#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,result;
    printf("Enter number");
    scanf("%f %f",&num1,&num2);
    
    if(ceil(num1)!=num1 && ceil(num2)!=num2){
    
        
    int val;
    printf("Enter:\n 1-addition \n 2-Substraction \n 3-Division \n 4-Multiplication \n 5-Modulus\n");
    scanf("%d",&val);
    switch(val)
    {
        case 1: result=num1 + num2 ;
        printf("%0.3f hello ",result);
        break;
        case 2: result=num2 - num1 ;
        printf("%0.3f",result);
        break;
        case 3: result=num1 / num2 ;
        printf("%0.3f",result);
        break;
        case 4: result=num1 * num2 ;
        printf("%0.3f",result);
        break;
        
        default: ;   
        goto end;       
    }}
   
    if(ceil(num1)==num1 && ceil(num2)==num2){
        num1=(int)num1;
        num2=(int)num2;
        
    int val;
    printf("Enter:\n 1-addition \n 2-Substraction \n 3- Division \n 4-Multiplication \n 5-Modulus\n");
    scanf("%d",&val);
    switch(val)
    {
        case 1: result=num1 + num2 ;
        printf("%d",(int)result);
        break;
        case 2: result=num2 - num1 ;
        printf("%d",(int)result);
        break;
        case 3: result=num1 / num2 ;
        printf("%d",(int)result);
        break;
        case 4: result=num1 * num2 ;
        printf("%d",(int)result);
        break;
    
        default: ;   
                
    }}
    end:
    return 0;
}