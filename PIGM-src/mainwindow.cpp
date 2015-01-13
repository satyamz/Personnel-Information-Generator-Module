/****************************************************************************
**
** Trolltech hereby grants a license to use the Qt/Eclipse Integration
** plug-in (the software contained herein), in binary form, solely for the
** purpose of creating code to be used with Trolltech's Qt software.
**
** Qt Designer is licensed under the terms of the GNU General Public
** License versions 2.0 and 3.0 ("GPL License"). Trolltech offers users the
** right to use certain no GPL licensed software under the terms of its GPL
** Exception version 1.2 (http://trolltech.com/products/qt/gplexception).
**
** THIS SOFTWARE IS PROVIDED BY TROLLTECH AND ITS CONTRIBUTORS (IF ANY) "AS
** IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
** TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
** PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
** OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
** EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
** PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
** PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
** LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
** NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** Since we now have the GPL exception I think that the "special exception
** is no longer needed. The license text proposed above (other than the
** special exception portion of it) is the BSD license and we have added
** the BSD license as a permissible license under the exception.
**
****************************************************************************/

#include "mainwindow.h"
#include<qmainwindow.h>
#include<QTableWidget>
#include<QDate>
#include <QComboBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(this->ui.Submit,SIGNAL(clicked()),this,SLOT(displayText())); //Connecting submit Button
    connect(this->ui.clear,SIGNAL(clicked()),this,SLOT(clear1()));
}

MainWindow::~MainWindow()
{

}
void MainWindow :: displayText()     /*Function to accept the data*/
{


    name= this->ui.lineEdit->text();        /*taking whole data into the variables*/
    dob = this->ui.dateEdit->text();
    ht=this->ui.lineEdit_2->text();
    wt=this->ui.lineEdit_3->text();
    add=this->ui.lineEdit_4->text();
    phone=this->ui.lineEdit_7->text();
    plyno=this->ui.lineEdit_5->text();
    liceno=this->ui.lineEdit_6->text();
    blgr = this->ui.comboBox->currentText();




    QTableWidgetItem *ptr = new QTableWidgetItem ;  /*Adding data into table by using API QTableWidgetItem*/

    this->ui.tableWidget->insertRow(0);
    ptr->setText(name);

    this->ui.tableWidget->setItem(0,0,ptr);

    ptr =new QTableWidgetItem;

    ptr->setText(dob);
    this->ui.tableWidget->setItem(0,1,ptr);

    ptr =new QTableWidgetItem;

    ptr->setText(add);
    this->ui.tableWidget->setItem(0,2,ptr);


    ptr =new QTableWidgetItem;

    ptr->setText(phone);

    this->ui.tableWidget->setItem(0,3,ptr);
    ptr =new QTableWidgetItem;


    ptr->setText(ht);

    this->ui.tableWidget->setItem(0,4,ptr);
    ptr =new QTableWidgetItem;


    ptr->setText(wt);

    this->ui.tableWidget->setItem(0,5,ptr);
    ptr =new QTableWidgetItem;


    ptr->setText(blgr);

    this->ui.tableWidget->setItem(0,6,ptr);
    ptr =new QTableWidgetItem;

    ptr->setText(plyno);

    this->ui.tableWidget->setItem(0,7,ptr);
    ptr =new QTableWidgetItem;

    ptr->setText(liceno);

    this->ui.tableWidget->setItem(0,8,ptr);
    ptr =new QTableWidgetItem;

}

void MainWindow ::clear1()   /*Function to clear all the entries */
{



     this->ui.lineEdit->clear();
    this->ui.lineEdit_2->clear();
    this->ui.lineEdit_3->clear();
    this->ui.lineEdit_4->clear();
    this->ui.lineEdit_5->clear();
    this->ui.lineEdit_6->clear();
    this->ui.lineEdit_7->clear();


//This ends here 

}
