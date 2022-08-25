#include "../include/parse_check.hpp"

parse_check:: parse_check()
{
    int degree = 0;
}

parse_check::~parse_check()
{
    std::map<int,std::string*>::iterator it_begin = components.begin();
    std::map<int,std::string*>::iterator it_end = components.end();

    while (it_begin != it_end)
    {
        delete it_begin->second;
        it_begin++;
    }
    components.clear();
    if (reduce->empty() == 1)
        reduce->clear();
}

void parse_check::start(char **equation)
{
    int i = 0;
    int power = 0;



}



