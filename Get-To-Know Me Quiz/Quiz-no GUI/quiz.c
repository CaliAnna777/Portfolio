#include<stdio.h>
#include<ctype.h>

int main() {
    
    int score = 0;
    char questions[][100]= {"Q1- What industry did I work in prior to Technology?",
                            "Q2- What hardware started my coding journey?",
                            "Q3- What was my first micro-controller build?",
                            "Q4- Which of these 3 is my favourite European cartoon?",
                            "Q5- What unique pets did I have at 22?",
                            "Q6- Which of these hobbies do I NOT do?"};

    char options[][100]= {"A- Finance", "B- Education","C- Sales",
                        "A- Arduino", "B- Raspberry Pi", "C- ESP32",
                        "A- A Temperature Sensor", "B- A Phone Alert Button","C- A Soil Sensor",
                        "A- The Adventures Of Tintin", "B- Moominvalley", "C- Asterix and Obelix",
                        "A- Snakes", "B- Ferrets", "C- Rats",
                        "A- Knitting", "B- Tap Dancing", "C- Piano" };

    char answers[]= {'B','A','B','B','C','B'};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int e;

    printf("---The Get-To-Know Me Quiz!---\n");

    for(int i = 0; i< numberOfQuestions; i++)
    {
        printf("========================================\n");
        printf("%s\n", questions[i]);
        printf("========================================\n");

        for(int j = (i * 3); j < (i * 3) + 3; j++) {
            printf("%s\n", options[j]);
        }

        printf("A, B or C? ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answers[i]) 
        {
            printf("Correct! You got 1 point!\n");
            score++;
        }
        else{
            printf("Almost! It was actually %c \n", answers[i]);
        }
    }

    printf("Final Score is..... %d/%d\n", score, numberOfQuestions);
    printf("Press 0 when you're ready to leave and have a Great Day!");
    scanf(" %d", &e);

    if(e == 0){
        printf("Bye for Now!\n");
    };



    return 0;

}