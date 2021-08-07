# include <iostream>
using namespace std;

void main()
{
  int *arr, size;
  cout<< "Enter the size of array"<<endl;
  cin>> size;
  
  arr = new int[size];
  cout<<"Enter the array elements"<<endl;
  
  for(int i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  
  max = arr[0];
  for(int i = 1; i < size; i++)
  {
    if(max < arr[i])
      arr[0] = arr[i];
  }
  cout<< "the largest element is"<<arr[0];<<endl;
  return 0;
}
  
