#include<iostream>
using namespace std;
int insertelement(int *arr,int len,int item,int pos)
{
    for(int i=len;i>pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
   arr[pos]=item;
   return len+1;
}
//deleting an element
int deleteElement(int *arr,int len,int pos)
{
    for(int i=pos;i<len;i++)
    {
        arr[i]=arr[i+1];
    }
   return len-1;
}
int main()
{
    int arr[5]={5,2,8};
    //Inserting an element
    int end=insertelement(arr,3,2,1);


    for(int i=0;i<end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     end=deleteElement(arr,end,1);
     for(int i=0;i<end;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}