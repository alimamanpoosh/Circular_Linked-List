#include<iostream>
using namespace std;
Circular_linked_list(){
            size = 0;
            current = nullptr;
        }

        ~Circular_linked_list(){
            if(current == nullptr){
                return;
            }

            node * temp= current;
            while(temp->getNext() != current){
                node * tempForDelete = temp;
                temp= temp->getNext();
                delete tempForDelete;
            }
            delete temp;
            temp = nullptr;
            current = nullptr;
            size = 0;
        }
class node{
    private:
        int data;
        node* next;
        node* prev;
    public:
        int getData(){
            return data;
        }
        void setData(int data){
            this->data = data;
        }
        node * getNext(){
            return next;
        }
        void setNext(node * next){
            this->next = next;
        }
        node * getPrev(){
            return prev;
        }
        void setPrev(node * prev){
            this->prev = prev;
        }
};
class Circular_linked_list{
    private:
        int size;
        node* current;
    public:
        Circular_linked_list();
        ~Circular_linked_list();

        int getSize(){
            return size;
        }

        void push(int data){

        }

        void pop();
        void pop(int data);
        void push_after(int new_data,int pa_data);
        void push_befor(int new_data,int pb_data);
        void print();


};



int main(){


}
