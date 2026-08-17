#include <iostream>
using namespace std;

int main() {
    int a[5];
    int n = 5;
    int i;
    cout<<"Enter the elements in array:";
    for(i=0;i<5;i++)
    {
      cin>>a[i];
    }
    cout<<"\nBefore sort:";
    for(i=0;i<5;i++)
    {
      cout<<a[i]<<"\t";
    }
    for (int i = 0; i < n - 1; i++) {
        int min= i;
        
        
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        
        
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout<<"\nAfter Sort:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    return 0;
}
