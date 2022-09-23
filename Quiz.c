#include<stdio.h>
int main()
{
    char name[100];
    int count=0,q1,q2,q3;
    printf("\n\n\n");
    printf("Enter Your Name - ");
    scanf("%s",name);
    printf("\n\n\n");
    printf("\nQuestion - 1 : What is the capital of India ?");
    printf("\n1 - Kolkata");
    printf("\n2 - New Delhi");
    printf("\n3 - Mumbai");
    printf("\n4 - Chennai");
    printf("\n\nEnter Your Option - ");
    scanf("%d",&q1);
    if(q1==2)
    {
        count++;
        count++;
        printf("\nYes! You Got the Right Answer");
        printf("\nYou Have Been Awarded +2");
        printf("\nTotal Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    else
    {
        count--;
        printf("\nOops! You are wrong");
        printf("\nYou Have Been Awarded -1");
        printf("Total Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    printf("\n");
    printf("\nQuestion - 2 : What is the Animal of India ?");
    printf("\n1 - Tiger");
    printf("\n2 - Lion");
    printf("\n3 - Deer");
    printf("\n4 - Peacock");
    printf("\n\nEnter Your Option - ");
    scanf("%d",&q2);
    if(q2==1)
    {
        count++;
        count++;
        printf("\nYes! You Got the Right Answer");
        printf("\nYou Have Been Awarded +2");
        printf("\nTotal Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    else
    {
        count--;
        printf("\nOops! You are wrong");
        printf("\nYou Have Been Awarded -1");
        printf("\nTotal Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    printf("\n");
    printf("\nQuestion - 3 : Who is the Captain of Indian Cricket Team ?");
    printf("\n1 - MS Dhoni");
    printf("\n2 - KL Rahul");
    printf("\n3 - Virat Kohli");
    printf("\n4 - Rohit Sharma");
    printf("\n\nEnter Your Option - ");
    scanf("%d",&q3);
    if(q3==4)
    {
        count++;
        count++;
        printf("\nYes! You Got the Right Answer");
        printf("\nYou Have Been Awarded +2");
        printf("\nTotal Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    else
    {
        count--;
        printf("\nOops! You are wrong");
        printf("\nYou Have Been Awarded -1");
        printf("\nTotal Score = %d",count);
        printf("\n\nLet Move to the Next Question");
    }
    printf("\n\n\n");
    printf("Quiz Ended");
    printf("\n\nFinal Score = %d",count);
    printf("\n\n\nHope You Enjoyed the Quiz");
}