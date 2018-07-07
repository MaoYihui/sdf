#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;


void stoogesort(int arr[], int l, int h)
{
    if (l >= h)
        return;
 
    // If first element is smaller than last,
    // swap them
    if (arr[l] > arr[h])
        swap(arr[l], arr[h]);
 
    // If there are more than 2 elements in
    // the array
    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;
 
        // Recursively sort first 2/3 elements
        stoogesort(arr, l, h - t);
 
        // Recursively sort last 2/3 elements
        stoogesort(arr, l + t, h);
 
        // Recursively sort first 2/3 elements
        // again to confirm
        stoogesort(arr, l, h - t);
    }
}
 
 int main()
{
  

   ifstream myfile ("data1.txt");  




if (myfile.is_open()) {

int n;

while(1){

myfile>>n;
cout << "n="<<n<<endl; 
int *arr=new int[n];
for(int i=0; i<n;i++)
  myfile >> arr[i];
 if( myfile.eof() ) break; //--------------------------------- option 1


for( int i=0; i<n;i++)
cout<<arr[i]<<" ";

cout<<endl;
/*
cout<<"sorted"<< endl;
    stoogesort(arr, 0, n - 1);

for( int i=0; i<n;i++)
cout<<arr[i]<<" ";

cout<<endl;
cout<< "____________";
*/


// if( myfile.eof() ) break; //如果comment 取消会多出一行 option 2


}



}



else{
cout<<"open error";
}

 
    // Calling Stooge Sort function to sort
    // the array
//    stoogesort(arr, 0, n - 1);
 
    // Display the sorted array
//    for (int i = 0; i < n; i++)
  //      cout << arr[i] << " ";
 
    return 0;

}
