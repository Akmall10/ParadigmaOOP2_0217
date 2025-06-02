#include <iostream>
using namespace std;

class seseorang
{
public:
    // virtual void pesan() = 0;
    virtual void pesan()
    {
        cout << "Pesan dari seseorang" << endl;

    }
};

class joko : public seseorang
{
    void pesan()
    {
        cout << "Pesan dari seseorang" << endl;
    }
};

c

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
     obyek ->pesan();
    obyek = &a;
    obyek ->pesan();
    // a.seseorang::pesan();
    // b.seseorang::pesan();

    return 0;
}
