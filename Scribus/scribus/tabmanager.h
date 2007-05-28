/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#ifndef TABMANAGER_H
#define TABMANAGER_H

#include <qvariant.h>
#include <qdialog.h>
#include <q3valuelist.h>
//Added by qt3to4:
#include <Q3HBoxLayout>
#include <Q3VBoxLayout>

#include "scribusapi.h"
#include "pageitem.h"

class Q3VBoxLayout;
class Q3HBoxLayout;
class QPushButton;
class Tabruler;

class SCRIBUS_API TabManager : public QDialog
{
	Q_OBJECT

public:
	TabManager( QWidget* parent, int dEin, Q3ValueList<ParagraphStyle::TabRecord> inTab, double wid);
	~TabManager() {};
	Tabruler* TabList;
	QPushButton* OKButton;
	QPushButton* CancelButton;
	Q3ValueList<ParagraphStyle::TabRecord> tmpTab;

public slots:
	void exitOK();

protected:
	Q3VBoxLayout* TabManagerLayout;
	Q3HBoxLayout* layout10;
	
	double docUnitRatio;
};

#endif // TABMANAGER_H
