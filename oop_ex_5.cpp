#include<iostream>
using namespace std;
class book
{
    private:
    int book_no;
    char booktitle[20];
    float price;

    float total_cost(int n)
    {
        return price*n;
    }
    public:
    void input()
    {
        cout<<"enter book no:";
        cin>>book_no;
        cout<<"enter book title:";
        cin>>booktitle;
        cout<<"enter price:";
        cin>>price;
    }
     void purchse()
     {
        int n;

        cout<<"enter number of copies to be purches:";
        cin>>n;

        float totalcost=total_cost(n);
        cout<<"total cost to paid:"<<totalcost<<endl;
     }
};
 int main()
 {
    book b;
    b.input();
    b.purchse();
 }