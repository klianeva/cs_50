#include <cs50.h>
#include<stdio.h>
#include<math.h> // needed for the round () function

float n; //change
int i = 0;  //coins
int j;  // amount of coins


int main(void)
{
    //Ask the user for a change
    do
    {
        n = get_float("How much is the change?");
    }
    while (n < 0);

    n = round(n * 100.00); //round up the coins

    i = n;
    while (i >= 25)  // how many 25 coins?
    {
        i = i - 25;
        j++;        // number of coins
    }

    while (i >= 10) // how many 10 coins?
    {
        i = i - 10;
        j++;
    }

    while (i >= 5)
    {
        i = i - 5;
        j++;
    }

    while (i >= 1)
    {
        i = i - 1;
        j++;
    }

    printf("number of minimum coins needed %d", j);
}