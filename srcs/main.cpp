#include <iostream>
#include "parse_check.hpp"



void ft_help()
{
    std::cout<< "donner une équation sous la forme a * X^0 + b * X^1 + c * X^2 = 0 " << std::endl;
}


void ft_parse_check(char **av)
{
    parse_check *pc;

    pc.start(char **av);
    pc.result();
}


int main(int ac , char **av)
{
    if (ac != 2)
        ft_help();
    else
        ft_parse_check(av);
    return 0;
}
