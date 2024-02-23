#include <iostream>
#include "account.h"


using namespace std;
struct Coord{
    int x;
    int y;
    Coord(int x,int y):x(x),y(y){}
};


class Circle
{
    Coord from;
    Coord to;
    
    public :
    
};

int main(int argc, const char * argv[]) {

    Account act1{};
    act1.printAccountInfo();
    
    
    Account act2{340258319,"John",200000.0};
    act2.printAccountInfo();
    
    act1.add_to_account(10000.0);
    act1.printAccountInfo();
    
    
    return 0;
}
