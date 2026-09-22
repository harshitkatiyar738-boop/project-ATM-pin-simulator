// ATM pin simulator----------------
#include <stdio.h>
int main()
{
    int pin;
    int attempts = 0;
    int correctpin = 6580;
    int Balance = 5000;
    int choice, amount, deposit;
    int transaction = 0;
    while(attempts < 3){
        printf("enter the pin = ");
        scanf("%d",&pin);
    
    if(pin == correctpin)
    {
        printf("\nPIN VERIFIED SUCCESSFULLY\n");
        printf("----------------WELCOME--------------\n");
        break;
    }
    else
    {   printf("INCORRECT PIN\n");
        attempts++;
        
    if(attempts==1)
    {
        printf("2 Attempt remaning\n");
    }
    else if(attempts == 2)
    {
        printf("1 Attempt remaning\n");
    }
    else if(attempts == 3)
    {
        printf("your accound has been blocked please visit your nearby branch to unlock it.\n");
    }
    return 0;} 
    }

    while(transaction < 5)
    {
    printf("==========================================================================================================================\n");

    printf("-----------------------------------------MENU--------------------------------------\n");
    printf("1.Check balance\n");
    printf("2.Withdraw\n");
    printf("3.Deposit\n");
    printf("4.Exit\n");

    printf("===========================================================================================================================\n");
    printf("Enter your choice = ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("current Balance  = %d\n",Balance);
        break;
        case 2:
        printf("enter the required amount  = ");
        scanf("%d",&amount);
        if(Balance>=amount){
            printf("------------congratulations transaction successful---------------\n");
            printf("=====RECEIPT======\n");
            printf("initial balance = %d\n",Balance);
            printf("new balance  = %d\n",Balance-amount);
            printf("txn no : 1\n");
        }else if(amount > Balance && amount % 100 !=0)
        {
            printf("----------- sorry: transaction rejected----------------\n");
        }
        Balance = Balance -amount;
        break;
        case 3:
        printf("------------------DEPOSIT---------------\n");
        printf("enter the amount  = ");
        scanf("%d",&amount);
        printf("your money has been deposited successfully\n");
        if(Balance == 0 || Balance < 0){
            printf("------------sorry you are rejected from using this service-------------\n");
        }
        else{
            Balance = Balance + amount;
            transaction++;
            printf("--------RECIPT-------\n");
            printf("Initial balance = %d\n",Balance);
            printf("Deposited amount  = %d\n",deposit);
            printf("Final balance  = %d\n",Balance + deposit);
            printf("Thanks for using the ATM service\n");
        }
        Balance = Balance + deposit;
        break;
        case 4:
        printf("===================================EXIT=========================\n");
        break;
        default:
            printf("Invalid choice !! please choose number between 1 to 4 to use the service\n");
        
        if(transaction == 5){
            printf("\n you have reached to your transaction limit. so please re-login.\n");
            break;}
        }
    }
    return 0;
}
