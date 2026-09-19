/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* createNode(int data)
    {
    ListNode* temp = new ListNode(data);
    return temp;
    }
    void insertAtEnd(ListNode*& head, int data)
    {
        ListNode* new1 = createNode(data);
        ListNode* temp = head;

        if(head == NULL)
        {
            head = new1;
            return;
        }

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new1;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* mergeList=NULL;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val == temp2-> val)
            {
                insertAtEnd(mergeList, temp1->val);
                insertAtEnd(mergeList, temp2->val);
                temp1 = temp1->next;
                temp2 = temp2->next;
            }

            else if(temp1->val < temp2->val)
            {
                insertAtEnd(mergeList, temp1->val);
                temp1 = temp1->next;
            }

            else
            {
                insertAtEnd(mergeList, temp2->val);
                temp2 = temp2->next;
            }
        }

        if(temp1!=NULL)
        {
            while(temp1!=NULL)
            {
                insertAtEnd(mergeList, temp1->val);
                temp1=temp1->next;
            }
        }else if(temp2 != NULL){
            while(temp2!=NULL)
            {
                insertAtEnd(mergeList, temp2->val);
                temp2=temp2->next;
            }
        }

        return mergeList;
    }
};