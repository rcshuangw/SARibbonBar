#ifndef SARIBBONICONSTYLE_H
#define SARIBBONICONSTYLE_H
#include "SARibbonGlobal.h"
#include <QProxyStyle>
class SA_RIBBON_EXPORT SARibbonIconStyle : public QProxyStyle
{
   Q_OBJECT
public:
    SARibbonIconStyle();

public:
    virtual ~SARibbonIconStyle ();
    virtual int pixelMetric(PixelMetric metric, const QStyleOption * option, const QWidget * widget) const;
    void setIconSize(const QSize size);
    QSize  iconSize() const;

private:
    QSize m_iconSize;
};

#endif // SARIBBONICONSTYLE_H
