/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    int countNodes(ListNode* head)
    {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* temp = NULL;
        
        int i = countNodes(head)-n;
        if(i==0)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }else{
            for(int j=0; j<i-1; j++)
        {
            curr = curr->next;
        }

        temp = curr->next;

        curr->next = temp->next;
        delete temp;
        }
        
        return head;
    }
};