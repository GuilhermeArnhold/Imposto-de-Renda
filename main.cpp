#include <iostream>

using namespace std;

class Pessoa
{
    string nomeDoContribuinte;
    int anoDeNascimento;
    string profissao;
    string escolaridade;
    float rendaMensal;
    int numDependentes;

private:

public:
    void setNomeDoContribuinte(string nomeDoContribuinte)
    {
        this->nomeDoContribuinte = nomeDoContribuinte;
    }

    string getNomeDoContribuinte()
    {
        return this->nomeDoContribuinte;
    }

    void setanoDeNascimento(int anoDeNascimento)
    {
        this->anoDeNascimento = anoDeNascimento;
    }

    int getanoDeNascimento()
    {
        return this->anoDeNascimento;
    }

    void setProfissao(string profissao)
    {
        this->profissao = profissao;
    }

    string getProfissao()
    {
        return this-> profissao;
    }

    void setEscolaridade(string escolaridade)
    {
        this->escolaridade = escolaridade;
    }

    string getEscolaridade()
    {
        return this-> escolaridade;
    }

    void setRendaMensal(float rendaMensal)
    {
        this->rendaMensal = rendaMensal;
    }

    float getRendaMensal()
    {
        return this->rendaMensal;
    }

    void setNumDependentes(int numDependentes)
    {
        this->numDependentes = numDependentes;
    }

    int getNumDependentes()
    {
        return this->numDependentes;
    }
    int Idade(int anoDeNascimento)
    {
        return 2020 - anoDeNascimento;
    }
    float RendaAnual(float rendaMensal)
    {
        return this->rendaMensal * 12;
    }
    float rendaPerCapitaMensal(float rendaMensal, int numDependentes)
    {
        return rendaMensal / numDependentes;
    }
    float AliquotaIrMaxima(float rendaMensal, int numDependentes)
    {
        float reducao;
        reducao = numDependentes * 190;
        if(rendaMensal - reducao <= 1900)
        {
            return 0;
        }
        if(rendaMensal - reducao > 1900 && rendaMensal - reducao <= 2820)
        {
            return 7.5;
        }
        if(rendaMensal - reducao > 2820 && rendaMensal - reducao <= 3740)
        {
            return 15.0;
        }
        if(rendaMensal - reducao > 3740 && rendaMensal - reducao <= 4660)
        {
            return 22.5;
        }
        if(rendaMensal - reducao > 4660)
        {
            return 27.5;
        }
    }

};


int main()
{
    string nomeDoContribuinte, profissao, escolaridade;
    int anoDeNascimento, numDependentes;
    float rendaMensal;


    cout << "Qual o nome do contribuinte?" << endl;
    getline(cin,nomeDoContribuinte);
    cout << "Qual o ano de nascimento?" << endl;
    cin >> anoDeNascimento;
    fflush(stdin);
    cout << "Qual a profissao?" << endl;
    getline(cin,profissao);
    fflush(stdin);
    cout << "Qual a escolaridade?" << endl;
    getline(cin,escolaridade);
    fflush(stdin);
    cout << "Qual a renda mensal?" << endl;
    cin >> rendaMensal;
    fflush(stdin);
    cout << "Qual o numero de dependentes?" << endl;
    cin >> numDependentes;
    fflush(stdin);

    Pessoa *pessoa = new Pessoa();
    pessoa->setNomeDoContribuinte(nomeDoContribuinte);
    pessoa->setanoDeNascimento(anoDeNascimento);
    pessoa->setProfissao(profissao);
    pessoa->setEscolaridade(escolaridade);
    pessoa->setRendaMensal(rendaMensal);
    pessoa->setNumDependentes(numDependentes);

    cout << "Nome do contribuinte: " << pessoa->getNomeDoContribuinte() << endl;
    cout << "Ano de nascimento: " << pessoa->getanoDeNascimento() << endl;
    cout << "Profissao: " << pessoa->getProfissao() << endl;
    cout << "Escolaridade: " << pessoa->getEscolaridade() << endl;
    cout << "Renda Mensal: " << pessoa->getRendaMensal() << endl;
    cout << "Numero de dependentes: " << pessoa->getNumDependentes() << endl;
    cout << "Idade do contribuinte: " << pessoa->Idade(anoDeNascimento) << endl;
    cout << "Renda Anual: " << pessoa->RendaAnual(rendaMensal) << endl;
    cout << "Renda Per Capta Mensal: " << pessoa->rendaPerCapitaMensal(rendaMensal, numDependentes) << endl;
    cout << "Aliquota IR maxima: " << pessoa->AliquotaIrMaxima(rendaMensal, numDependentes) << endl;

    delete pessoa;


    return 0;
}
