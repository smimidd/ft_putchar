// Hello World using ft_putchar
#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c){
	write(1,&c,1);
};

int main(void){
	int i = 0;
	while(i < 11){
		ft_putchar('H');
		ft_putchar('e');
		ft_putchar('l');
		ft_putchar('l');
		ft_putchar('o');
		ft_putchar(32);
		ft_putchar('W');
		ft_putchar('o');
		ft_putchar('r');
		ft_putchar('l');
		ft_putchar('d');
		i++;
		return 0;
	};
}
	