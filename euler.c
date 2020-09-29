#include <stdio.h>
int problem_1()
{
    int i;
    int sum = 0;
    for (i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int problem_5()
{
    int something = 1;
    while (1)
    {
        int i;
        int succeeded = 1;
        for (i = 1; i <= 20; i++)
        {
            if (something % i == 0)
            {
                continue;
            }
            else
            {
                succeeded = 0;
                break;
            }
        }
        if (succeeded)
        {
            break;
        }
        something += 1;
    }
    return something;
}

long problem_6()
{
    long sq_sum = 0;
    long sum_sq = 0;
    long i;
    for (i = 1.0; i <= 100.0; i++)
    {
        sq_sum += i;
        sum_sq += (i * i);
    }
    return sum_sq - (sq_sum * sq_sum);
}

int check_if_perfect_square(int number)
{
    int i;
    for (i = 0; i < number; i++)
    {
        if (i * i == number)
        {
            return 1;
        }
    }
    return 0;
}

int get_square_root(int number)
{
    int i;
    for (i = 0; i < number; i++)
    {
        if (i * i == number)
        {
            return i;
        }
    }
    return -1;
}
int problem_9()
{
    // a, b, c have to be all less than
    int a;
    int b;
    int c;
    for (a = 0; a <= 1000; a++)
    {
        for (b = a + 1; b <= 1000; b++)
        {
            for (c = b + 1; c <= 1000; c++)
            {
                if ((a * a) + (b * b) == (c * c) && (a + b + c == 1000))
                {
                    return (a * b * c);
                }
            }
        }
    }
    return -1;
}
int main()
{
    printf("Problem 1: %d\n", problem_1());
    printf("Problem 5: %d\n", problem_5());
    printf("Problem 6: %ld\n", problem_6());
    printf("Problem 9: %d\n", problem_9());
}