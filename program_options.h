/*********************************************
*     MadeBy : MeiZhaorui(Mason)
*     E-Mail : listener_mei@163.com
*      Phone : (0)131-5898-7498
*       Date : 2014/10/20
*       host : Ubuntu x86_64 3.13.0-37
 *********************************************/
#ifndef PROGRAM_OPTIONS_H
#define PROGRAM_OPTIONS_H

char* VERSION =\
"\t****************************************\n\
\t*       MadeBy : MeiZhaorui(Mason)       *\n\
\t*       E-Mail : listener_mei@163.com    *\n\
\t*   CreateDate : 2014/10/13              *\n\
\t*   LastUpdate : 2014/10/29              *\n\
\t****************************************\n";
class QStringList;
namespace opt{
bool complie(int argc,char *argv[],char* version);
}

#endif // PROGRAM_OPTIONS_H
