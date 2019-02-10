#include <bits/stdc++.h>

using namespace std;

class MyString
{
public:

  MyString()
  {
    size = 100;
    str = (char*)malloc(sizeof(char) * 100 );
  }

  MyString(int _size)
  {
    size = _size;
    str = (char*)malloc(sizeof(char) * size);
  }

  bool set(char *inp)
  {
    int len = 0;
    for ( int i = 0 ; inp[i] != NULL ; i++ )
    {
      len++;
    }
    if ( len <= size )
    {
      str = inp;
      return true;
    }
    else
    {
      return false;
    }
  }

  void print()
  {
    char* s;
    s = str;
    cout << s << endl;
  }

private:
  int size;
  char* str;
};

/* DRIVER PROGRAM
int main()
{
  MyString str1(1);
  if(str1.set("THIS IS INPUT"))
    str1.print();
  else
    cout << "INVALID!" << endl;

  cout << "Done" << endl;
} */
