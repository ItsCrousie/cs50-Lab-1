#include <stdio.h>
#include <cs50.h>

long calcPopulationGrowth(long starting, long ending);

int main(void)
{
    // TODO: Prompt for start size
    long startingPopulation;
    do
    {
        startingPopulation = get_long("Enter Starting Population: ");
    }
    while (startingPopulation < 9);

    // TODO: Prompt for end size
    long endingPopulation;
    do
    {
        endingPopulation = get_long("Enter Ending Population: ");
    } while (endingPopulation < startingPopulation);

    // TODO: Calculate number of years until we reach threshold
    long years = calcPopulationGrowth(startingPopulation, endingPopulation);
    // TODO: Print number of years
    printf("Start size: %li\nEnd size:%li\nYears: %li\n", startingPopulation, endingPopulation, years);
}

long calcPopulationGrowth(long starting, long ending)
{
    return (16 * starting) / (3 * ending);
}
