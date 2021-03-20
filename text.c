/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode* cur=head;
    struct ListNode* prev=head;
    while(cur)
    {
        if(cur->val==val)
        {   
            if(cur==head)
                {
                    head=cur->next;
                    free(cur);
                    return head;
                }
            prev->next=cur->next;
            free(cur);
            return head;
        }
        prev=cur;

        cur=cur->next;
    }
    return head;
}