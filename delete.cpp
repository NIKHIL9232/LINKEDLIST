Given a singly linked list and an integer, x. Delete the xth node (1-based indexing) from the singly linked list.

Examples:

Input: Linked list: 1 -> 3 -> 4, x = 3
Output: 1 -> 3

 Node* deleteNode(Node* curr, int x) {
        if(x==1){
            Node*p2=curr->next;
            delete curr;
            return p2;
        }
        curr->next=deleteNode(curr->next,x-1);
        return curr;
        // Node *p1=head;
        // Node *prev;
        // if(x==1){
        //     head=head->next;
        //     delete p1;
        //     return head;
        // }else{
        //     int i=1;
        //     while(i<x){
        //         prev=p1;
        //         p1=p1->next;
        //         i++;
        //     }
        //     prev->next=p1->next;
        //     delete p1;
        // }
        // return head;
