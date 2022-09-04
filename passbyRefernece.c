#include <stdio.h>

int FunCake(cake);
int FunBread(bread);
int FunCoke(coke);
int FunPepsi(pepsi);


int main(){

    char name[10];
    int age = 0;
    int phnum = 0;
    int cake = 0;
    int bread = 0;
    int coke = 0;
    int pepsi = 0;
    int result =0;
    int yes_or_no = 0;
    int ans =0;
    int ans1 =0;
    int ans2 =0;
    int ans3 =0;
    int confirm =0;
    int choose1 = 0;
    int choose2 = 0;
    int choose3 = 0;
    int total = 0;








    printf("                         Warmly Welcome to Our Store and need to regrister \n\n\n");

    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your phone number : ");
    scanf("%d", &phnum);
    printf("\n\nName : %s \n" , name);
    printf("Age : %d \n" , age);
    printf("Phone Number : %d \n\n\n" , phnum);

    if(age >= 0){

            printf("Do you wanna buy somethings? \n\n\n");
            printf("Press '1' for 'Yes' or Press 2 for 'No' \n\n " );
            printf("Your Answer : ");
            scanf("%d", &yes_or_no);

            do{
                while(yes_or_no==1){


                printf("\n\nHere Available Items! \n");

                do{
                    printf("\n1.Snacks\n");
                    printf("2.Drinks\n");
                    printf("Your Answer : ");
                    scanf("%d" , &ans1);

                  }while(ans1 >3);

                   switch(ans1){
                        case 1:
                            do{
                                printf("\n\nYou can choose your items ! \n");
                                printf("Press '1' for 'Cake' or Press '2' for 'Bread' \n ");
                                printf("Your Answer is : ");
                                scanf("%d" , &choose1);

                    switch(choose1){
                        case 1:

                    result = FunCake(cake);
                        break;

                    case 2:
                        result = FunBread(bread);
                            break;

                    default:
                        printf("Your are choosing Invalid Number!");

                }




        } while(choose1>3);
        break;



        case 2:

            do{
                printf("You can choose your items ! \n");
                printf("Press '1' for 'Coke' or Press '2' for 'Pessi' \n ");
                scanf("%d" , &choose1);

                switch(choose1){
                    case 1:

                    result = FunCoke(coke);
                        break;

                    case 2:
                        result = FunPepsi(pepsi);
                            break;

                    default:
                        printf("Your are choosing Invalid Number!");

                }




        } while(choose1>3);
        break;



        }


        printf("Would you like to buy more?\n");
        printf("Press '1' to Yes or Press '2' to No \n");
        scanf("%d",&yes_or_no);
        }
    }while(yes_or_no==1);


    printf("Thanks for supporting us. \n");

}

else{
    printf("Pleae Enter Your Real Age!");
}

 return 0;
}


int FunCake(cake){
    int Cake= 500;
    int choose2 =0;
    int quantity =0;
    int total =0;


        do{
            do{
                printf("\nCake price is %d \n",Cake);
                printf("Press '1' for 'Buy' or Press'2' for 'Cancel'\n");
                printf("Your answer :");
                scanf("%d",&choose2);

                }
                while(choose2 > 2);
                if(choose2 ==1){
                    printf("You Choose Cake! \n\n");
                }
                else if(choose2 ==2){
                    printf("You canceled Cake \n\n");

                    break;
                }

                printf("How many cake do you wanna? \n");
                printf("Your quantity : ");
                scanf("%d" , &quantity);
                total = Cake*quantity;
                printf("\nYour Amount is %d\n\n" , total);
                }
                while(choose2 !=1);

                return total;
        }




int FunBread(bread){
    int Bread = 300;
    int choose3 = 0;
    int quantity =0;
    int total = 0;


    do{
            do{
                printf("\nBread price is %d \n",Bread);
                printf("Press '1' for 'Buy' or Press'2' for 'Cancel' \n");
                printf("Your answer :");
                scanf("%d",&choose3);

                }
                while(choose3 > 2);
                if(choose3 ==1){
                    printf("You Choose Bread! \n\n");
                }
                else if(choose3 ==2){
                    printf("You canceled Bread \n\n");

                    break;
                }

                printf("How many bread do you wanna? \n");
                printf("Your quantity : ");
                scanf("%d" , &quantity);
                total = Bread*quantity;
                printf("\nYour Amount is %d\n\n" , total);
                }
                while(choose3 !=1);

                return total;


}


int FunCoke(coke){
    int Coke= 400;
    int choose2 =0;
    int quantity =0;
    int total =0;


        do{
            do{
                printf("\nCoke price is %d \n",Coke);
                printf("Press '1' for 'Buy' or Press'2' for 'Cancel' \n");
                printf("Your answer :");
                scanf("%d",&choose2);

                }
                while(choose2 > 2);
                if(choose2 ==1){
                    printf("You Choose Coke! \n\n");
                }
                else if(choose2 ==2){
                    printf("You canceled Coke \n\n");

                    break;
                }

                printf("How many coke do you wanna? \n");
                printf("Your quantity : ");
                scanf("%d" , &quantity);
                total = Coke*quantity;
                printf("\nYour Amount is %d\n\n" , total);
                }
                while(choose2 !=1);

                return total;
        }




  int FunPepsi(pepsi){
    int Pepsi= 700;
    int choose2 =0;
    int quantity =0;
    int total =0;


        do{
            do{
                printf("\nPepsi price is %d \n",Pepsi);
                printf("Press '1' for 'Buy' or Press'2' for 'Cancel' \n");
                printf("Your answer :");
                scanf("%d",&choose2);

                }
                while(choose2 > 2);
                if(choose2 ==1){
                    printf("You Choose Pepsi! \n\n");
                }
                else if(choose2 ==2){
                    printf("You canceled Pepsi \n\n");

                    break;
                }

                printf("How many Pepsi do you wanna? \n");
                printf("Your quantity : ");
                scanf("%d" , &quantity);
                total = Pepsi*quantity;
                printf("\nYour Amount is %d\n\n" , total);
                }
                while(choose2 !=1);

                return total;
        }







