/**********************************************************************
--- Qt Architect generated file ---
File: Dnp3driverConfigurationData.h
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef Dnp3driverConfigurationData_included
#define Dnp3driverConfigurationData_included

#include <qt.h>

class Dnp3driverConfigurationData : public QDialog
{
	Q_OBJECT
	public:
	Dnp3driverConfigurationData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~Dnp3driverConfigurationData();
	protected slots:
	virtual void Help() =0;
	virtual void OkClicked() =0;
	protected:
	QLabel *Name;
	QSpinBox *NItems;
	QSpinBox *PollInterval;
	//QLineEdit *OpcServerProgIDText;
	QLineEdit *IEC104ServerIPAddressText;
};
#endif // Dnp3driverConfigurationData_included

