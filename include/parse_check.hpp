#pragma once

#include <string>
#include <map>



class parse_check
{
    private:
        int degree;
        std::string *reduce;
        std::map<int,std::string*> components;
    public:
        parse_check();
        ~parse_check();

        void start(char **equation);
        void result() const;

        int get_degree() const;
        std::string get_component(int key) const;

};
