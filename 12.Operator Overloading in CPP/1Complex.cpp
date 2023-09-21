#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showData()
    {
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a=a*C.a-b*C.b;
        temp.b=a*C.b+b*C.a;
        return temp;
    }
    bool operator==(Complex C)
    {
        if(a==C.a && b==C.b)
          return true;
        else
          return false;
    }

};
int main() {
Complex c1,c2,c3,c4,c5;
c1.setData(3,4);
c2.setData(3,4);
c3=c1+c2;
c4=c1-c2;
c5=c1*c2;
c1.showData();
c2.showData();
c3.showData();
c4.showData();
c5.showData();
if(c1==c2)
{
    cout<<"they are equal";
}
else
{
    cout<<"Not equal";
}
return 0;
}