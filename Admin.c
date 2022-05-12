#include <stdio.h>
#include <stdlib.h>
#include "STD_Types.h"
#include "LinkedList.h"

typedef struct account {
  char name[20];
  char Address[20];
  char NatID[14];
  int Age;
  char BankAccountID[10];
  //BankAccount *Gaurdian;
  char GaurdianNatID[14];
  char AccountStatus[10];
  int Balance;
  char Password[25];
  
  } BankAccount;

void main(void){
    BankAccount *my_struct = (BankAccount*)malloc(sizeof(BankAccount));
    my_struct->name = "John";
    printf(my_struct);
    //printf("HI");

}
