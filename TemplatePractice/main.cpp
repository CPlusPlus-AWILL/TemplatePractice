#include <iostream>

template<typename Tp>
class Point
{
public:
    Tp x;
    Tp y;

};

template<typename Tp>
static inline Tp Test(const Point<int>& pt);
template<typename Tp>
static inline Tp Test(const Point<double>& pt);

template<>
inline int Test<int>(const Point<int>& pt)
{
    return 0;
}

template<typename Tp>
inline Tp Test<Tp>(const Point<double>& pt)
{
    return 0;
}

template<>
inline double Test<double>(const Point<double>& pt)
{
    return 0;
}

int main()
{
    std::cout << "Hello World!\n"; 
    Point<int> a = { 1,1 };
    Point<double> b = { 0,0 };
    Test<int>(a);
    Test<double>(b);

    return 0;
}