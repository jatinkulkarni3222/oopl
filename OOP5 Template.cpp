#include<iostream>
using namespace std;

int n;
#define size 10

template<class T>

void sel(T A[size]){
    int i,j,min;
    T temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]) min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[size];
    float B[size];
    cout<<"Enter total number of integer elements : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sel(A);
    cout<<"Enter total number of float elements : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sel(A);
}