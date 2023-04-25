#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompt for start size
    long start;
    do
    {
        start = get_long("Enter Starting Population: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    long end;
    do
    {
        end = get_long("Enter Ending Population: ");
    } while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    //update by reference start becuase final needs to show initial value.
    int i = start;
    do
    {
        i += (i/3) - (i/4);
        years++;
    } while (i < end);

    // TODO: Print number of years
    printf("Start size: %li\nEnd size:%li\nYears: %i\n", start, end, years);
}