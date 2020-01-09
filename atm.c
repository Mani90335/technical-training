#include<stdio.h>
int main()
{
    int balance=5000,pin,deposit,withdraw,option;
    printf("enter your pin   :");
    scanf("%d",&pin);
    switch (pin)
    {

        case(1433):
        TRANSACTION:
        printf("1.check bal\n");
        printf("2.deposit amount\n");
        printf("3.withdrawl\n");
        printf("exit\n");
        printf("enter your option\n");
        scanf("%d",&option);
        switch (option)
        {

            case(1):printf("balance is %d \n",balance);
            break;
            case(2):printf("deposit amount:\n");
            scanf("%d",&deposit);
            balance=deposit+balance;
            printf("available balance is %d \n",balance);
            break;
            case(3):printf("withdraw amout:\n");
            scanf("%d",&withdraw);
            balance=balance-withdraw;
            printf("available balance is:%d \n",balance);
            break;
            default:printf("exit \n");
        }
       printf("do you want to perform another transaction.enter 1 for yes and 2 for no\n");
       scanf("%d",&option);
       switch (option)
       {
           case 1: goto TRANSACTION;
            break;
           default: printf("ok");
       }
       break;
       default: printf("invalid pin\n");
       break;
    }
    return 0;
}
