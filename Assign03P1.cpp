#include <iostream>
using namespace std;

int  GetOneIntByVal(const char vtdPrompt[]);
void GetOneIntByAddr(int* intVarToPutInPtr,const char entIntPrompt[]);
void GetOneCharByAddr(char* charVarToPutInPtr, const char prompt[]);
void ValidateInt(int* givenIntPtr, int minInt, int maxInt, const char msg[]);
void SwapTwoInts(int* intPtr1, int* intPtr2);
void ShowIntArray(const int array[], int size, const char label[]);

int main()
{
   int intArr[7];
   int valsToDo;
   char reply;
   char vtdPrompt[] = "vals to do? ";
   char entIntPrompt[] = "enter an int: ";
   char adjMsg[] = " is bad, make it ";
   char initLab[] = "initial:\n";
   char flipLab[] = "flipped:\n";
   char dmPrompt[] = "do more? ";
   int i, j;

   do
   {
      valsToDo = GetOneIntByVal(vtdPrompt);
      ValidateInt(&valsToDo, 1, 7, adjMsg);
      for (i = valsToDo; i > 0; --i)
         if (i & 1) // i is odd
            intArr[valsToDo - i] = GetOneIntByVal(entIntPrompt);
         else // i is even
            GetOneIntByAddr(intArr + valsToDo - i, entIntPrompt);
      ShowIntArray(intArr, valsToDo, initLab);
      for (i = 0, j = valsToDo - 1; i < j; ++i, --j)
         SwapTwoInts(intArr + i, intArr + j);
      ShowIntArray(intArr, valsToDo, flipLab);
      GetOneCharByAddr(&reply, dmPrompt);
   }
   while (reply != 'n' && reply != 'N');

   return 0;
}

int GetOneIntByVal(const char prompt[])
{
   int oneInt;
   cout << prompt;
   cin >> oneInt;
   return oneInt;
}

void GetOneIntByAddr(int* intVarToPutInPtr,const char prompt[])
{
   cout << prompt;
   cin >> *intVarToPutInPtr;
}

void ValidateInt(int* givenIntPtr, int minInt, int maxInt, const char msg[])
{
   if (*givenIntPtr < minInt)
   {
      cout << *givenIntPtr << msg << minInt << endl;
      *givenIntPtr = minInt;
   }
   else
   {
      if (*givenIntPtr > maxInt)
      {
         cout << *givenIntPtr << msg << maxInt << endl;
         *givenIntPtr = maxInt;
      }
   }
}

void ShowIntArray(const int array[], int size, const char label[])
{
   cout << label;
   int k = size;
   while (k > 0)
   {
      cout << array[size - k] << ' ';
      --k;
   }
   cout << endl;
}

void SwapTwoInts(int* intPtr1, int* intPtr2)
{
   int temp = *intPtr1;
   *intPtr1 = *intPtr2;
   *intPtr2 = temp;
}

void GetOneCharByAddr(char* charVarToPutInPtr, const char prompt[])
{
   cout << prompt;
   cin >> *charVarToPutInPtr;
}
