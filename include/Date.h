#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Cdate
{
public:
    Cdate::Cdate();
    Cdate::Cdate(int a, int moi, int j, int h, int mns, int s);
private:
    int annee ;
    int jour ;
    int mois ;
    int minutes ;
    int heures ;

};

#endif // DATE_H_INCLUDED
