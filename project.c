#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int action;
    printf("select a new action\n");
    printf("1.Add new patron\n");
    printf("2.View patron\n");
    printf("view Books\n");
    printf("4.Add New Book\n");
    printf("your action: ");
    scanf("%d",&action);
    if(action<1||action>4){
        printf("invalid action.Try again\n");
    }
    return action;
}
void execute_action(int action){
switch(action){
case 1:
    printf("adding a new Patron\n");
    break;
case 2:
    printf("Here is a list of patrons\n");
    break;
case 3:
    printf("Here is a list of all books\n");
case 4:
    printf("adding a new Book\n");
    default:
        printf("Invaild action.\n");

    }
}

int main() {
printf("COUNTY LIBRARY SYSTEM");
printf("Welcome Madam Irene\n");
execute_action(menu());
return 0;
}
