#include <CLI/CLI.hpp>
#include <iostream>

int main(int argc, char** argv){
    CLI::App app("Example CLI");
    std::string name;
    int age = 0;
    app.add_option("-n,--name", name, "Your Name")->required();
    app.add_option("-a,--age", age, "Your age");

    CLI11_PARSE(app, argc, argv);
    std::cout << "Name" << name << ", Age: " << age << std::endl;
    
}