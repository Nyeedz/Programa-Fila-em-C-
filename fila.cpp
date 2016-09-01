#include<iostream>
#define MAX 5
using namespace std;

struct fila
    {
        int inicio;
        int fim;
        int dados[MAX];
    };

    void insere(int);
    void remover();
    void imprime(void);
    void inicializa(void);

    fila f;

    int main()
        {
            int op, valor;
            inicializa();
                do
                    {
                        cout<<"1 - Insere na fila"<<endl;
                        cout<<"2 - Remove da fila"<<endl;
                        cout<<"3 - Imprime fila"<<endl;
                        cout<<">=4 - Sair"<<endl;
                        cout<<"Escolha a opcao desejada...:"<<endl;
                        cin>>op;
                        switch(op)
                            {
                              case 1:
                                cout<<"Informe valor a inserir:"<<endl;
                                cin>>valor;
                                insere(valor);
                                break;
                              case 2:
                                remover();
                                break;
                              case 3:
                                imprime();
                                break;
                            }
                    } while( op >= 1 && op < 4);
            return(0);
        }

    void insere(int valor)
    {
        if( f.fim == MAX)
            {
               cout<<"Fila cheia"<<endl;
            }
        else
            {
                f.dados[ f.fim ] = valor;
                f.fim++;
            }
    }
    void remover(void)
        {
            if(f.fim == f.inicio)
                {
                    cout<<"Fila vazia..."<<endl;
                }
            else
                {
                    for(int i=f.inicio;i< f.fim; i++)
                        {
                            f.dados[i] = f.dados[i+1];
                        }
                        f.fim--;
                        f.dados[ f.fim ] = 0;
                }
        }
    void imprime(void)
        {
            if(f.fim == f.inicio)
                {
                    cout<<"Fila vazia..."<<endl;
                }
            else
                {
                    for(int i=f.inicio;i < f.fim; i++)
                    {
                        cout<<f.dados[i]<<"  ";
                    }
                }
            cout<<endl;
        }
    void inicializa(void)
        {
            f.inicio = f.fim = 0;
            for(int i = 0; i < MAX; i++)
                {
                    f.dados[i] = 0;
                }
        }
