// make sure the average includes decimal digits

#include <iostream>

int main()
{
  // TODO#1: use the "static_cast" operator to cast the character to a short
  // then print both the char and the short

  char my_char1 = 'J';
  short my_short1 = static_cast<short>(my_char1);
  std::cout << "The ASCII value for " << my_char1 << " is " << my_short1 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#2: add one to the character to see what gets printed out

  char my_char2 = 'C';
  my_char2 = my_char2 + 1;
  std::cout << "Char1: " << my_char2 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#3: again add one to the character to see what gets printed out
  // and add a comment explaining why the value of the character is no
  // longer alphabetic

  // It is because the last alphabetic character is 'z'. Since we add 1, it will go
  // to the next ASCII character, which is '{'.

  char my_char3 = 'z';
  my_char3 = my_char3 + 1;
  std::cout << "Char2: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#4: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not
  // note: std::dec and std::hex indicate the format of the output, decimal
  // versus hexadecimal

  // my_short2 is a short and only 2 bytes. Because of overyflow, we will see the
  // value go to 0. For my_int2, we get an int value beacuse of type coercion.
  // Thus, we have an int value and will not get overflow when we add 1 to 32767.

  short my_short2 = 32767; // maximum value for a short
  int my_int2 = my_short2;

  std::cout << "Short (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_short2 << std::hex << " (0x" << my_short2 << ')';
  my_short2 = my_short2 + 1;
  std::cout << ", after adding 1: " << std::dec << my_short2
    << std::hex << " (0x" << my_short2 << ")\n";

  std::cout << "Int (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_int2 << std::hex << " (0x" << my_int2 << ')';
  my_int2 = my_int2 + 1;
  std::cout << ", after adding 1: " << std::dec << my_int2
    << std::hex << " (0x" << my_int2 << ")\n";

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#5: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not

  // Same reasons as above, the maximum value for an unasigned short is 65535.
  // Because of overflow, it sets my_short3 to 0. Because of type coercion, my_int3
  // is an int data type. In the type int, we can add 1 to 65535 and get 65536.

  unsigned short my_short3 = 65535; // maximum value for an unsigned short
  int my_int3 = my_short3;

  std::cout << "Unsigned short (" << sizeof(my_short3) << " bytes): "
    << std::dec << my_short3 << std::hex << " (0x" << my_short3 << ')';
  my_short3 = my_short3 + 1;
  std::cout << ", after adding 1: " << std::dec << my_short3
    << std::hex << " (0x" << my_short3 << ")\n";

  std::cout << "Same value as int (" << sizeof(my_int3) << " bytes): "
    << std::dec << my_int3 << std::hex << " (0x" << my_int3 << ')';
  my_int3 = my_int3 + 1;
  std::cout << ", after adding 1: " << std::dec << my_int3
    << std::hex << " (0x" << my_int3 << ")\n";

  // ** not required, but for more practice, feel free to add code below which **
  // ** tests underflow and overflow using other data types **

  return 0;
}
