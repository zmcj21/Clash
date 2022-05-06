#include "ThirdParty/kaguya.hpp"

int main()
{
    kaguya::State state;
    state.dofile("./Examples/random_example.lua");

    getchar();
    //state["getc"] = &getchar;
    //state.dofile("./BuiltIn/test1.lua");
    //state.dostring("print('asd')");
    //state("start()");
    return 0;
}