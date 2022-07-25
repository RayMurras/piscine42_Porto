#include<unistd.h>
#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap;

    i =0;
    while(i < size - 1)
    {
        if (tab [i] > tab [ i + 1])
        {
            swap = tab[i];
            tab [i] = tab [i + 1];
            tab [i + 1] = swap;
        }
        i++;
   }    
    size--;
}
int main()
{
    int tab[6] = {5,4,3,2,1,0};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%i, %i, %i, %i, %i, %i", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return 0;
}