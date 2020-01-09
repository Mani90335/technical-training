#include<stdio.h>
int main()
{
    int id,pass;
    printf("enter your id");
    scanf("%d",&id);
    switch(id)
        {
            case 500:printf("enter your pass");
            scanf("%d",&pass);
            switch (pass)
                {
                case 000:printf("welcome to vbit");
                break;
                }
                break;
        default:printf("enter a valid data");
        }
    return 0;
}
