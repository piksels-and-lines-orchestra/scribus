/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#ifndef _UTIL_IMAGE_H
#define _UTIL_IMAGE_H


#include <QString>

#include "scribusapi.h"

QPixmap SCRIBUS_API loadIcon(const QString nam, bool forceUseColor=false);
void SCRIBUS_API iconToGrayscale(QPixmap *pm);

#endif
