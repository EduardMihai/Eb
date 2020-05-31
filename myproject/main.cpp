#include <iostream>
#include"static.h"
#include"shared.h"

int main(int, char**) {
    StaticClass::printHello();
    SharedClass::printHello();
}
