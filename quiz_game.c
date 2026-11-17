#include<stdio.h>

int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6;
    int point1,point2,point3,point4,point5,point6;
    int total1,total2,total3;

    printf("--Welcome to the Quiz!--\n\n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if(i==7)
    {
        printf("-- Round 1- Work, Work, Work --\n\n");
    }
    else if(i==0)
    {
        printf("Goodbye for now!\n");
    }
    else{
        printf("Please press 7 to play or 0 to exit");
    }

    if(i==7)
    {
        printf("Q1-What industry did I work in prior to Technology?\n\n");
        printf("1) Finance\n");
        printf("2) Education\n");
        printf("3) Sales\n");

        printf("Could it be 1, 2 or 3? Please enter a number: ");
        scanf("%d", &ans1);

        if(ans1== 2)
        {
            printf("That's right! Before switching to technology I worked in Education to support students in the classroom\n");
            point1 = 1;
            printf("You just scored.... %d points! Keep it up!\n", point1);
        }
        else
        {
            printf("Not quite! I actually worked in Education to support students in the classroom\n");
            printf("0 points this time... Let's try again!")
        }

        printf("Q2- What hardware started my coding journey?\n\n");
        printf("1) Arduino\n");
        printf("2) Raspberry Pi\n");
        printf("3) ESP32\n");

        printf("What'll it be this time? 1,2 or 3?: ");
        scanf("%d" , &ans2);

        if(ans2 == 1)
        {
            printf("Absolutly spot on! At 14 I was gifted my first Arduino and began learning code\n");
            point2=1;
            printf("You just scored.... %d points! Keep it up!\n", point2);
        }
        else
        {
            printf("Close- it was in fact an Arduino!\n");
            printf("0 points this time... Let's try again!")
        }

        printf("Q3- What was my first micro-controller build?\n\n");
        printf("1) A Temperature Sensor\n");
        printf("2) A Safety Alarm button that would text alerts to those around you\n");
        printf("3) An Automated Plant Water-er\n");

        printf("I wonder what it can be... 1,2 or 3?: \n");
        scanf("%d", &ans3);

        if(ans3 == 2)
        {
            printf("That's right! I built a button to alert loved ones if someone wasn't safe\n");
            point3=1;
            printf("You just scored.... %d points! Keep it up!\n", point3);
        }
        else{
            printf("Almost- it was actually 2- a button to alert loved ones if someone wasn't safe\n")
            printf("0 points this time... Let's try again!")
        }

        printf("--Round 2- Fun Facts--\n\n");




        printf("Q1- Which of these 3 is my favourite European cartoon?\n\n");
        printf("1) The Adventures of Tintin\n");
        printf("2) Asterix and Obelix\n");
        printf("3) Moomins \n");

        printf("I wonder what it can be... 1,2 or 3?: \n");
        scanf("%d", &ans4);

        if(ans4 == 3)
        {
            printf("That's right! I built a button to alert loved ones if someone wasn't safe\n");
            point4=1;
            printf("You just scored.... %d points! Keep it up!\n", point4);
        }
        else{
            printf("So close! It's Moomins!- Created by Finnish Illustrator Tove Jansson\n")
            printf("0 points this time... Let's try again!")
        }


        printf("Q2- What unique pets did I have at 22?\n\n");
        printf("1) Ferrets\n");
        printf("2) Rats\n");
        printf("3) Snakes\n");

        printf("Could it be 1,2 or 3?: \n");
        scanf("%d", &ans5);

        if(ans5 == 2)
        {
            printf("Absolutley! I had two rats called Bingo and Ciri!\n");
            point5=1;
            printf("You just scored.... %d points! Keep it up!\n", point5);
        }
        else{
            printf("Almost- it was actually rats!\n")
            printf("0 points this time... Let's try again!")
        }


        printf("Q3- Which of these hobbies do I NOT do?\n");
        printf("1) Knitting\n");
        printf("2) Tap Dancing\n");
        printf("3) Play Piano\n");

        printf("I wonder what it can be... 1,2 or 3?: \n");
        scanf("%d", &ans6);

        if(ans6 == 2)
        {
            printf("That's right!I haven't taken to dancing just yet!\n");
            point6=1;
            printf("You just scored.... %d points! Keep it up!\n", point6);
        }
        else{
            printf("I'll take it as a compliment but no- I cannot dance\n")
            printf("0 points this time... Let's try again!")
        }

    }
}