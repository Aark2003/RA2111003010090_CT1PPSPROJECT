#include <stdio.h>
int main()
{
    int numint1, numint2, resultint;
    
    float numfloat1, numfloat2, resultfloat;
    double numdouble1, numdouble2, resultdouble;
    printf("Enter INTEGER number\n");
    scanf("%d %d", &numint1, &numint2);
    printf("\nEnter FLOAT number\n");
    scanf("%f %f", &numfloat1, &numfloat2);
    printf("\nEnter DOUBLE number\n");
    scanf("%lf %lf", &numdouble1, &numdouble2);

    int val;
        printf("Enter:\n 1-addition \n 2-Substraction \n 3- Division \n 4-Multiplication \n 5-Modulus\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            resultint = numint1 + numint2;
            resultfloat = numfloat1 + numfloat2;
            resultdouble = numdouble1 + numdouble2;
            printf(" SUM OF INTEGER %d\n", resultint);
            printf(" SUM OF FLOAT %0.3f\n", resultfloat);
            printf(" SUM OF DOUBLE %lf\n", resultdouble);

            break;
        case 2:
            resultint = numint1 - numint2;
            resultfloat = numfloat1 - numfloat2;
            resultdouble = numdouble1 - numdouble2;
            printf(" SUBTRACTION OF INTEGERS %d\n", resultint);
            printf(" SUBTRACTION OF FLOAT %0.3f\n", resultfloat);
            printf(" SUBTRACTION of double %lf\n", resultdouble);
            break;
        case 3:
            resultint = numint1 / numint2;
            resultfloat = numfloat1 / numfloat2;
            resultdouble = numdouble1 / numdouble2;
            printf(" DIVIDE OF INTEFER%d \n", resultint);
            printf(" DIVIDE OF FLOAT%0.3f\n", resultfloat);
            printf(" DIVIDE OF DOUBLE%lf\n", resultdouble);         
               break;
        case 4:
            resultint = numint1 * numint2;
            resultfloat = numfloat1 * numfloat2;
            resultdouble = numdouble1 * numdouble2;
            printf("MULTIPLICATION OF INTEGER%d\n", resultint);
            printf("MULTIPLICATION OF FLOAT%0.3f\n", resultfloat);
            printf("MULTIPLICATION OF DOUBLE%lf\n", resultdouble);  
            break;
        case 5:
            resultint = numint1 % numint2;
            printf("MODULUS OF INTEGER%d", resultint);

        default:;
        }

        return 0;
        }