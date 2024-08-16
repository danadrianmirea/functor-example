#include <iostream>

class Functor
{
    public:
        void operator()(void) { std::cout << "inside functor\n"; }
};

int main()
{
    Functor f;
    f();
    
    void(*f2)() = [](){ std::cout << "lambda\n"; };
    f();

    return 0;
}