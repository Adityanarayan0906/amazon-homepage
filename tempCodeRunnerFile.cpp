#include <iostream>
using namespace std;

class base
{
public:
    int x;
    static int count;
    void getdata(int a)
    {
        a = x;
        count++;
    }
    void getcount()
    {
        cout << "count is" << count << endl;
    }

public:
    virtual void show()
    {
        cout << "Inside base" << endl;
    }
};
int base::count;
class derived : public base
{
public:
    void show()
    {
        cout << "in derived " << endl;
    }
};
int main()
{
    base C, a, b;

    // C.getdata();
    C.getcount();
    C.getdata(90);
    a.getdata(900);
    b.getdata(9000);
    C.getcount();
    a.getcount();
    b.getcount();
    base *ptr;
    base B;
    ptr = &B;
    ptr->show();
    derived A;
    ptr = &A;
    ptr->show();
    A.show();
    A.base::show();
    return 0;
}
