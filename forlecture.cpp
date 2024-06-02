//
//  main.cpp
//  CEN1122
//
//  Created by Johannes Heck on 02.06.24.
//

/*#include <cassert>

struct w
{
    int r;
    
    w() { r = 1; };

    w(int x) { r = x; }

    w(const char* y) { r = 3; };
};

int main()
{
    w x;
    assert(x.r == 1);
    
    w y(2);
    assert(y.r == 2);
    
    w z("test");
    assert(z.r == 3);
    
    return 0;
}*/
/*
#include <cassert>
struct g
{
    int l;
    g operator+(const g& other) const
    {
        g temp;
        temp.l = this->l + other.l;
        return temp;
    }
};

int main()
{
    g a;
    a.l = 1;
    g b;
    b.l = 2;
    g c = a + b;
    assert(c.l == 3);
    return 0;
}
*/
/*
#include <cassert>
void i(int& e)
{
    e++;
}
int main() {
    int x = 0;
    i(x);
    assert(x == 1);
    return 0;
}
*/
/*
#include <cassert>
struct x {
    bool d = false;
    x(bool d) { this->d = d; }
};

int main()
{
    x y(true);
    assert(y.d == true);
    return 0;
}
*/
/*
#include <cassert>
#include <vector>
#include <string>
int main()
{
    std::vector<std::string> u{"c","+"};
    u.push_back("+");
    assert(u.size() == 3);
    return 0;
}
*/
/*
#include <cassert>
#include <vector>
int main()
{
    std::vector<int> j{ 1,2,3 };
    auto i = j.begin();
    i = std::next(i);
    assert(*i == 2);
    return 0;
}
*/
// Aufteilung in mehrere Dateien
#include <cassert>
#include "f.hpp"
//struct f {
//    int e;
//    f(){ e = 0; };
//    void b(int o) { e = o; }
//};
int main() {
    f r;
    r.b(2);
    assert(r.e == 2);
}

/*
#include <vector>
#include <cassert>
long m(const std::vector<long> & r)
{
    auto s = 1L;
    for (auto i : r)
        s *= i;
    return s;
}
int main()
{
    long t = m(std::vector<long>{1, 2, 3});
    assert(t == 6);
    return 0;
}
*/
/*
#include <vector>
#include <algorithm>
#include <cassert>
int main()
{
    std::vector<char16_t> x{1,2,3};
    std::sort(x.begin(), x.end(), [](const char16_t & a, const char16_t & b){return a > b;});
    assert(x.front() == 3);
    return 0;
}
*/
/*
#include <cassert>
struct g {
    virtual bool m() { return true; }
    static bool t() { return false; }
};
struct h : g {
    bool m() override { return false; }
};
int main()
{
    g a;
    h b;
    assert( a.m() == true );
    assert( b.m() == false);
    assert(g::t() == false);
    return 0;
}
*/
/*
#include <cassert>
int t() { throw "hallo"; return 2; }

int main()
{
    int x = 0;
    try { x = t(); }
    catch(...)
    {
        x = -1;
    }

    assert(x == -1);
    return 0;
}
*/
/*
// In C++ gibt es neue Varianten f¸r die Speicherallokation im Heap
#include <memory>
struct r { wchar_t o; };
int main(){
    std::shared_ptr<r> s = std::make_unique<r>();
    s->o = 'X';
    auto t = s;
    return 0;
}
*/
/*
#include <cassert>
template <class t>
auto a(t x, t y) { return x + y; }

int main()
{
    auto x = a(1, 2);
    assert(x == 3);
    auto y = a(3.3, 4.4);
    assert(y == 7.7);
    auto z = a('a', (char)1);
    assert(z == 'b');
    return 0;
}
*/
/*
#include <cassert>
int main()
{
    int x = 0;
    if (x++)
        x++;
    else
        x--;
    assert(x == 0);
    return 0;
}
*/
/*
//Ab hier Vorlesungsfolien
struct player
{
    int nr;
    player operator=(player other)
    {
         nr = other.nr;
         return other;
    }
};
player operator+(player a, player b)
{
    player temp;
    temp.nr = a.nr + b.nr;
    return temp;
}

int main()
{
    player eins, zwei;
    eins.nr = 1;
    zwei.nr = 2;
    eins = zwei;
    player drei = eins + zwei;
    return drei.nr;
}
*/
/*
* //Nullpointer nullptr
struct human {
    int size;
};
int main()
{
    human h;
    human* i = nullptr;
    
    if (i == nullptr)
        return -1;
    return 0;
}
*/
/*
#include <vector>
int main()
{
    std::vector<int> vi;
    vi.push_back(3);
    vi.push_back(4);
    auto e = --vi.end(); // zeigt erst durch dekrementieren auf das letzte Element
    return *e;
}
*/
/*
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v = { 2,6,7,3,2 };
    int sum = 0;
    for (auto i : v)
        sum += i;
    return sum;
}
*/
/*
#include <vector>
#include <algorithm>
struct test {
    test(int x):x(x){}
    int x;
    int operator<(const test& oth) {
        return x < oth.x;
    }
};
int main()
{
    std::vector<test> v;
    v.push_back(test(4));
    v.push_back(test(3));
    v.push_back(test(1));
    std::sort(v.begin(), v.end());
    return v[0].x;
}
*/
/*
struct player {
    int a;
    static int age; // existiert nur einmal
    static int max_age();
};
int player::age = 2;
int player::max_age() {
    return 42;
}
int main()
{
    player p1;
    p1.age = player::max_age();
    player p2;
    return p2.age; // da Variable age nur einmal existiert kommt 42 raus
}
*/
/*
#include<string>
#include<algorithm>
int main()
{
    std::string test;
    test = "Hallo";
    test += "Norbert";
    test[0] = 'h';
    auto pos = test.find("N");
    int value = 40;
    auto lambda1 = [&value](int a, int b){return a+b+value; };

    return lambda1(1, 1);
}
*/
/*
#include <vector>
#include <stdexcept>
int main()
{
    std::vector<int> v;
    v.push_back(42);

    try
    {
        v.at(42);
    }
    catch(const std::exception & e)
    {
        return 2;
    }
    catch(...)
    {
        return 1;
    }
}
*/
/*
#include <memory>
int c = 0;
struct test { test() { c++; } };
int main() {
    auto t5 = std::make_unique<test[]>(20);
    return c;
}
*/
/*
template <int a, int b>
struct X {
    enum { WERT = a };
    int val[b];
    int wert() { return WERT; }
};
int main()
{
    X<2, 4> x;
    x.val[2] = X<2, 4>::WERT;
    x.val[2] = x.wert();
    return 0;
}
*/
/*
class secret {
    int save;
    friend void write(secret& s);
    friend struct access;
};
void write(secret& t)
{
    t.save = 42;
}
struct access {
    secret s;
    int read() {
        return s.save;
    }
};
int main() {
    secret s;
    write(s);
    access a;
    return a.read();
}
*/
//#include <memory>
//
//int c = 0; // Ein globaler Z‰hler
//
//struct test {
//    test() { c++; } // Konstruktor, der den Z‰hler erhˆht
//};
//
//int main() {
//    test* t2 = new test; // Instanziierung mit new, Konstruktor wird aufgerufen (+ctor)
//    delete t2; // Lˆschen des einzelnen Objekts
//
//    test* t3 = new test[20]; // Instanziierung eines Arrays, 20-maliger Aufruf des Konstruktors
//    delete[] t3; // Lˆschen des Arrays, 20-maliger Aufruf des Destruktors
//
//    std::unique_ptr<test> t4 = std::make_unique<test>(); // Verwendung von std::unique_ptr und std::make_unique
//    auto t5 = std::make_unique<test[]>(20); // std::unique_ptr f¸r ein Array mit 20 Elementen
//
//    return c; // R¸ckgabe des Z‰hlerwerts
//}
//#include <string>
//struct a {
//public:
//    int a;
//protected:
//    double b(int o);
//};
//struct b {
//    virtual void x() = 0;
//};
//struct c {
//private: std::string c;
//};
//struct d : a, b {
//    c m[8];
//    virtual void x(){}
//};
//struct z {
//    int e;
//    void f(int x, double y){}
//    char t(bool z) { }
//};
//int main()
//{
//    z f;
//    f.e = 4;
//    f.f(3, 7.0);
//    char x = f.t(true);
//    return x;
//}
/*
struct z{};
namespace n{struct z{}; }
int  main() {
    n::z p;
    ::z q;
    return 0;
}*/
//struct a { int x; };
//class b { public: double y; };
//struct c : b, a { long z; };
//
//int main() {
//    c c;
//    c.x = 1;
//    c.y = 2.;
//    c.z = 3;
//    return 0;
//}
