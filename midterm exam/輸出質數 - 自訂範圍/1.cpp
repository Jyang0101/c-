#include <iostream> //�u�ݥΨ�o�Ө禡�w
using namespace std;
 
int main()
{
    int a,b,x,y; //a�Bb���d���(�e�̡B���)�Fx���~�j��Fy�����j��
    while(true)  //�L�a�j��A�ت��n���ϥΪ̳s���J���
    {
        cout << "�п�J�G��ơA��N�����@�ӽd��A���{���|��X�d�򤤪����:";
        cin >> a >> b ;
 
        if(b>a&&b>=2) //�Yb>a(��̤j��e��)�A�Bb�n�j�󵥩�2�A�]��2�O�̤p����ơA�Yb�p��2�A���N�䤣���ƤF
        {
            cout << a << "~" << b << "��Ʀ�:"; //������ܥX�Ӫ��Ʀr�O����
            if (a<=2) //�p�Ga�p��2���ܡA���d�򤺴N���]�t2�A�ҥH�����2
            cout << "2" << " ";
            for(x=a;x<=b;x++) //x�~�j��Ax�d��a~b
            {
                for(y=2;y<=x;y++) //y���j��
               {
                   if(x%y==0) //�P�_�D��ƩM��ơA�Y���󦡬��u�A�h���X�j��
                    break;  //���Xy���j��
                   else if (x==y+1) //�P�_�O�_�����
                    cout << x << " "; //��Xx�ȡA�N�O���
                 }
            }
        }
        else if (a>b&&a>=2) //�Ya>b(�e�̤j����)�A�h�U������W���g�k�ۤϡAa�n�令b�Ab�n�令a�A�䥦���h���
        {
            cout << b << "~" << a << "��Ʀ�:";
            if (b<=2)
            cout << "2" << " ";
            for(x=b;x<=a;x++)
            {
                for(y=2;y<=x;y++)
                {
                    if(x%y==0)
                    break;
                    else if (x==y+1)
                    cout << x << " ";
                }
            }
        }
        else //�ϥΪ̥i���J�G�۵��ơA�άO�d��Ȥ������S�����
        cout << "��J�d�򦳻~�A�i��O�G�Ƭ۵��A�S�i��O�]���d��Ȥ������S�����";
        cout << endl ; //����A�M�����while�j��ԭz�̤W�ݡA�~��n�D�ϥΪ̿�J���
    }
    system ("pause");
    return 0;
}