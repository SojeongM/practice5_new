#include <iostream>
#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//LinkedList class를 상속받음
/*class Stack : public LinkedList{
	public:
		bool Delete (int &element){
			//first가 0이면 false반환
			if()

			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제


			return true;
			}
};*/

using namespace std;

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
		if(LinkedList<T>::current_size==0){
			return false;
		}
	
		
		else{
			Node<T> *input = LinkedList<T>:: first;
			LinkedList<T>::first = LinkedList<T>::first->link;
			element = input->data;
			LinkedList<T>::current_size = LinkedList<T>::current_size-1;
			delete input;
		}
	
		return true;
		}
};
