#include <iostream>
#include <string>
         
int main(int argc, char **argv)
{
  std::string name;
  std::cout << "Please enter your name: " << std::endl;
  std::cin >> name;
         
  std::cout << "Hello " << name << std::endl;     
  return 0;
}
