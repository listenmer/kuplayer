/*********************************************
*     MadeBy : MeiZhaorui(Mason)
*     E-Mail : listener_mei@163.com
*      Phone : (0)131-5898-7498
*       Date : 2014/10/26
*       host : Ubuntu x86_64 3.13.0-37
 *********************************************/
#ifndef MTHREAD_H
#define MTHREAD_H

#include <QThread>
#include <functional>
#include <python2.7/Python.h>
#include <QStringList>
#include <QDebug>

class mThread : public QThread
{
    Q_OBJECT
    typedef unsigned int CLASS;
    typedef std::function<QStringList()> F;
signals:
    void mfinished(int,const QStringList&);
public:
    mThread(int page,F func,QObject *parent=0)
        : QThread(parent)
        , page_(page)
        , func_(func)
    {}


protected:
    virtual void run()
    {
        const QStringList& tmp = func_();
        emit mfinished(page_,tmp);
        deleteLater();
    }

private:
    ~mThread()
    {
        qDebug() << "thread over" << page_;
    }
    
    CLASS page_;
    F func_;

};

#endif // MTHREAD_H
