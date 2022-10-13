#ifndef TORRES_H_INCLUDED
#define TORRES_H_INCLUDED

class torres{
private:
        char _NombreTorre[30];
        char _Host[30];
        bool _Estado;

public:
    ///Gets
        const char *getNombreTorre();
        const char *getHost();
        bool getEstado();
    ///Sets
        void setNombreTorre(const char *nom);
        void setHost(const char *host);
        void setEstado(bool est);


    ///Comportamientos

    void cargarTorres();
    void mostrarTorres();
    int grabarenDisco();
    int leerdeDisco(int);

};

#endif // TORRES_H_INCLUDED
