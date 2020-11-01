#include <iostream>

class Stack
{
    public:
    Stack(uint8_t _size) : size(_size)
    {
        this->array = new std::string[this->size];
        std::cout<<"\nStack of "<<int(this->size)<<" is created!";
    }

    void Push(std::string str)
    {
        // check size
        if(this->top >= (this->size - 1)){
            std::cout<<"\nStack is Full";
            return;
        }
        ++this->top;
        this->array[this->top] = str;
        std::cout<<"\nPushed "<<this->array[this->top];
    }

    std::string Pop()
    {
        if(-1 == this->top){
            std::cout<<"\nStack is Empty!";
            return std::string("");
        }
        uint8_t itemToBePopped = this->top;
        --this->top;
        std::cout<<"\nPopped "<<this->array[itemToBePopped];
        return this->array[itemToBePopped];
    }

    ~Stack()
    {
        delete []array;
    }

    private:

    Stack(){}
    uint8_t size = 0;
    int8_t top = -1;
    std::string *array = nullptr;
};

int main()
{
    Stack stack = Stack(5);
    stack.Pop();
    stack.Push("I");
    stack.Push("am");
    stack.Push("a");
    stack.Push("Software");
    stack.Push("Developer");
    stack.Push("!");
    
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();

    return 0;
}