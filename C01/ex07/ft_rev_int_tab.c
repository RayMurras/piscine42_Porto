#include<unistd.h>
#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	i = 0;
	
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

int main()
{
    int tab[6] = {0, 4, 5, 6, 7, 8};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%i, %i, %i, %i, %i, %i", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return 0;
}
    
