#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan() final {
        cout << "Hallo saya function dari base class";
    }
};