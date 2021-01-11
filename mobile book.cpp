#include<iostream>
#include<windows.h>
using namespace std;

struct node
{
    string id, name, number;
    node* next;
};
node* head = NULL, * newnode, * temp;
int length = 0;

//to add a contact 
void add_node()
{
    newnode = new node;
    cout << "\nEnter ID ";
    cin >> newnode->id;
    cout << "\nEnter Name ";
    cin >> newnode->name;
    cout << "\nEnter number ";
    cin >> newnode->number;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
//TO SEARCH CONTACT
void search_contact()
{
    node* search_node = head;
    string srch;
    int index = 1;
    cout << "\nEnter your contact name or id of contact you want to search ";
    cin >> srch;
    bool found = false;
    if (head == NULL)
    {
        cout << "\ncontact List is Empty!!! no contact..... " << endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if (srch == search_node->id || srch == search_node->name)
            {
                cout << "\nID: " << search_node->id << endl;
                cout << "\nFull name: " << search_node->name << endl;
                cout << "\nPhone number: " << search_node->number << endl;
                found = true;
                break;
            }
            search_node = search_node->next;
            index++;
        }
    }
    if (found == true)
    {

        cout << "\nIndex of the Contact = " << index << endl;
    }
    else
    {
        cout << "-------------Desired contact not found------------- " << endl;
    }
}



// TO DISPLAY CONTACT
void display()
{
    if (head == NULL)
    {
        cout << "\nThere is no contact ....Contact list is Empty!!!! " << endl;
    }
    else
    {
        node* trav = head;
        while (trav != NULL)
        {
            cout << "\nID is... " << trav->id << endl;
            cout << "\nFull Name is..." << trav->name << endl;
            cout << "\nPhone Number is... " << trav->number << endl;
            trav = trav->next;
            length++;
        }
        cout << "\n---------------- contacts added ";
        cout << "\nTotal contacts in the list are = " << length << endl;
    }
}

//TO update CONTACT
void update_contact()
{
    node* search_node = head;
    string srch;
    int index = 1;
    cout << "\nEnter your contact name or id of contact you want to update ";
    cin >> srch;
    bool found = false;
    if (head == NULL)
    {
        cout << "\n-------contact List is Empty!!! no contact..... " << endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if (srch == search_node->id || srch == search_node->number)
            {
                cout << "\nEnter Name ";
                cin >> newnode->name;
                cout << "\nEnter number ";
                cin >> newnode->number;
                found = true;
                cout << "-----------------data updated---------------" << endl;
                break;
            }
            search_node = search_node->next;
            index++;
        }
        
    }
    if (found == true)
    {

        cout << "\nIndex of the Contact = " << index << endl;
    }
    else
    {
        cout << "--------------Desired contact not found--------------- " << endl;
    }
}

//deletion function
void DEL()
{
    node* search_node = head, * next_node, * temp = head;
    string srch;
    int index = 0;
    cout << "\nEnter contact name or id of the contact that you want to delete ";
    cin >> srch;
    bool found = false;
    if (head == NULL)
    {
        cout << "\ncontact List is Empty........ " << endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if (srch == search_node->name || srch == search_node->id)/// to search contact
            {
                if (index == 0) // delete the first node
                {
                    temp = head;
                    head = head->next;
                    delete temp;
                    cout << "\n----------------data has been deleted------------------- " << endl;
                }
                // deletion at specific operation will perform
                else
                {
                    for (int i = 1; i < index; i++)
                    {
                        temp = temp->next;
                    }
                    next_node = temp->next;
                    temp->next = next_node->next;
                    delete next_node;
                    cout << "\n----------------contact data has been deleted-----------------" << endl;
                }
                found = true;
                break;
            }
            search_node = search_node->next;
            index++;
        }
    }
    if (found == true)
    {
        cout << "\ncontact index = " << index + 1 << endl;
    }
    else
    {
        cout << "\ncontact not fount!!!!!!!!!!!!!! " << endl;
    }
}
void LIST()
{
    cout << " \t\t\t__________________________" << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t\tmenu             " << endl;
    cout << " \t\t\t--------------------------" << endl;
    cout << " \t\t\t-> 1 to Add contact         " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t-> 2 to update  contact " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t-> 3 to Search contact       " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t-> 4 to Delete contact      " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t-> 5 to display the all contacts        " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t-> 6 to end       " << endl;
    cout << " \t\t\t                        " << endl;
    cout << " \t\t\t__________________________" << endl;
}
void details()
{
    system("color 0B");
    cout << "   SUBMITTED BY       \n" << endl;
    cout << "   RIDA TAHIR 15246   \n" << endl;
    cout << "   SUBMITTED TO       \n" << endl;
    cout << "   SIR RANA MARWAT    \n" << endl;
    cout << "   SIR FAWAD          \n" << endl;
    cout << "*******************************************************************************\n" << endl;
}
int main()
{

    system("color 0B");
    cout << "\n\n*******************************************************************************\n" << endl;
    cout << "\t\tPROJECT NAME -> MOBILE PHONE BOOK\n" << endl;
    cout << "*******************************************************************************\n\n" << endl;

    details();
    int in;

    LIST();
    cout << endl;
    system("pause");
    system("cls");

    while (true)
    {
        cout << "\n\n*******************************************************************************\n" << endl;
        cout << endl;
        LIST();
        cout << endl;
        cout << "\tenter number from above menu --->" ;
        cin >> in;
        switch (in)
        {
        case 1:
            cout << "\n\t---ADD CONTACT---" << endl;
            add_node();
            cout << "\n*******************************************************************************" << endl;

            system("pause");
            system("cls");
            
            break;
        case 2:
            cout << "\n\t---UPDATE CONTACT---\n" << endl;
            length = 0;
            update_contact();
            cout << "\n*******************************************************************************" << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "\n\t---SEARCH CONTACT---" << endl;
            search_contact();
            cout << "\n*******************************************************************************" << endl;

            system("pause");
            system("cls");
            break;
        case 4:
            cout << "\n\t---DELETE CONTACT---" << endl;
            DEL();
            cout << "\n*******************************************************************************" << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "\n\t---DISPLAY CONTACT---" << endl;
            display();
            cout << "\n*******************************************************************************" << endl;
            system("pause");
            system("cls");
            break;
        case 6:
            cout << "\n-----end----\n";
            cout << "\n*******************************************************************************" << endl;
            system("pause");
        default:
            cout << "Invalid Option " << endl;
        }
    }
}
