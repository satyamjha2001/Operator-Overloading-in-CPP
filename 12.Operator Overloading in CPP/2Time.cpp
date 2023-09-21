#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;

public:
    void setData(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << endl;
        cout << hr << ":" << min << ":" << sec;
    }
    bool operator>(Time T)
    {
        if (hr > T.hr)
            return true;
        else if (hr < T.hr)
            return false;
        else if (min > T.min)
            return true;
        else if (min < T.min)
            return false;
        else if (sec > T.sec)
            return true;
        else
            return false;
    }
    Time operator++(int) // post increment
    {
        Time temp = *this;
        sec++;
        min += sec / 60;
        sec = sec % 60;
        hr += min / 60;
        min = min % 60;
        return temp;
    }
    Time operator++() // pre increment
    {
        sec++;
        min += sec / 60;
        sec = sec % 60;
        hr += min / 60;
        min = min % 60;
        return *this;
    }
    Time operator+(Time T)
    {
        Time temp;
        temp.hr = hr + T.hr;
        temp.min = min + T.min;
        temp.sec = sec + T.sec;
        temp.min += temp.sec / 60;
        temp.sec = temp.sec % 60;
        temp.hr += temp.min / 60;
        temp.min = temp.min % 60;
        return temp;
    }
};
int main()
{
    Time t1, t2, t3,t4,t5;
    t1.setData(1, 14, 58);
    t2.setData(5, 14, 57);
    t3 = t1 + t2;
    t3.showTime();
    if (t1 > t2)
        cout << endl
             << "Greater";
    else
        cout << endl
             << "Smaller";
    t4=t1++;
    t5=++t2;
    t1.showTime();
    t4.showTime();
    t5.showTime();
    return 0;
}