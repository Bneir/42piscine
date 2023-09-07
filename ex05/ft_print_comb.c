#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_print_comb(void)
{
    int i;
    int x;
    int b;

    i = '0';
    while(i <= '7')
    {
        x = i + 1;
        while(x <= '8')
        {
            b = x + 1;
            while(b <= '9')
            {
                write(1, &i, 1);
                write(1, &x, 1);
                write(1, &b, 1);
                if(i != '7')
                    write(1, ", ", 2);
                b++;
            }
            x++;
        }
        i++;
    }
}
int main()
{
    ft_print_comb();
}

