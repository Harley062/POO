#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
class Endereco{
private:
    string logradouro;
    string numero;
    string bairro;
public:
    string getLogradouro(){return logradouro;}
    void setLogradouro(string valor){logradouro = valor;}
    string getNumero(){return numero;}
    void setNumero(string valor){numero = valor;}
    string getBairro(){return bairro;}
    void setBairro(string valor){bairro = valor;}
    virtual string Tipo()=0;
};
class Residencial : public Endereco{
public:
    string Tipo(){return "Residencial";}
};
class Comercial : public Endereco{
public:
    string Tipo(){return "Comercial";}
};
class Cobranca : public Endereco{
public:
    string Tipo(){return "Cobranca";}
};
class Cliente{
private:
    string nome;
    long telefone;
    vector<Endereco*> enderecos;
public:
    string getNome(){return nome;}
    void setNome(string valor){nome = valor;}
    long getTelefone(){return telefone;}
    void setTelefone(long valor){telefone = valor;}
    void AdicionaEndereco(Endereco* e){
        enderecos.push_back(e);
    }
    vector<Endereco*> Enderecos(){return enderecos;}
};


int main()
{return 0;
}
