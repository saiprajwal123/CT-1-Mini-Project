#include <stdio.h>
int main(void) {
  int choice,amount,pin,cash,amountret;
  int billamt=0;
  char c;
  int coca_cola =75;
  int diet_coke=80;
  int thums_up=65;
  int maaza=50;
  int mirinda=60;
  do{
  printf("*****Welcome To SRM Vending Machine*****\nEnter 1 For Coca Cola\nEnter 2 For Diet Coke\nEnter 3 For Thums up\nEnter 4 For Maaza\nEnter 5 For Mirinda\n");
  printf("Enter 6 to Checkout\n");
    printf("Enter 7 to Quit\n");
  printf("Enter your choice: ");
    scanf("%d",&choice);
  switch(choice)
  {
    case 1:printf("Amount To Be Paid is:%d\n",coca_cola);
          billamt=billamt+coca_cola;
          printf("Your Current Bill Amount is %d\n",billamt);
          break;
    case 2:printf("Amount To Be Paid is:%d\n",diet_coke);
          billamt=billamt+diet_coke;
          printf("your Current Bill Amount is %d\n",billamt);
         break;
    case 3:printf("Amount To Be Paid is: %d\n",thums_up);
           billamt=billamt+thums_up;
           printf("Your Current Bill Mount is %d\n",billamt);
           break;
    case 4:printf("Amount To Be Paid is %d\n",maaza);
           billamt=billamt+maaza;
          printf("Your Current Bill Amount is %d\n",billamt);
          break;
    case 5:printf("Amount To Be Paid is :%d\n",mirinda);
           billamt=billamt+mirinda;
          printf("Your Current Bill Amount is: %d\n",billamt);
          break;
    case 6:printf("Total Bill to be paid is %d\n",billamt);
           printf("Enter Amount: ");
           scanf("%d",&cash);
          if(cash>=billamt)
          {
          amountret=cash-billamt;
            printf("Change :%d\nTransaction Succesful\n",amountret);
          }
      else if(cash==billamt)
      {
        printf("Change :0\nTransaction Succesful\n");
        billamt=0;
      }
      else
      {
        printf("Insufficient Amount\nTransaction Unsucessful Please Checkout Again\n");
        
      }
           break;
    case 7:printf("Thank You For Using This Machine");
    break;
    default: printf("Invalid choice please try again\n");
    }
  }while(choice!=7);
   
  return 0;
}
