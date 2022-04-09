#include <stdio.h>
void main()
{
    int i, max, min, number, d, array[20], flag = 0;
    printf("input a minimum number:");
    scanf("%d", &min);
    printf("input a maximum number:");
    scanf("%d", &max);
    printf("input the number of disabled numbers you want to input:");
    scanf("%d", &d);
    printf("input the disabled numbers:");
    for (i = 0; i < d; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("input the number:");
    scanf("%d", &number);
    
    while (number <= max && number >= min)
    {
        for (i = 0; i < d; i++)
        {
            if (number == array[i])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            printf("The number is %d\n", number);
            break;
        }
        printf("increment the number by one\n");
        number++;
        flag = 0;
    }
    if (number > max || number < min){
        printf("invalid input");
    }
    
    
}
