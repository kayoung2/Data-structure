#include <malloc.h>

#include "node.h"

int main(void) {
   int* newData1 = NULL;
   int* nodeData1 = NULL;
   NODE* node1 = NULL;

   newData1 = (int*)malloc(sizeof(int));
   *newData1 = 7;

   node1 = createNode(newData1);

   int* newData2 = NULL;
   int* nodeData2 = NULL;
   NODE* node2 = NULL;

   newData2 = (int*)malloc(sizeof(int));
   *newData2 = 75;

   node2 = createNode(newData2); // ��� 2�� ����

   node1->link = node2; // ���1�� ���2 ��ŷ

   NODE* currentNode = node1;

   while (currentNode->link != NULL) {
      printf("Data from node: %d\n", *(currentNode->dataPtr));
      
      currentNode = currentNode->link;
   }
   printf("Data from node: %d\n", *(currentNode->dataPtr));

   return 0;
}