#include "SARibbonIconStyle.h"

SARibbonIconStyle::SARibbonIconStyle():m_iconSize(16,16)
{

}

SARibbonIconStyle::~SARibbonIconStyle ()
{

}

int SARibbonIconStyle::pixelMetric(PixelMetric metric, const QStyleOption * option, const QWidget * widget) const
{
    int s = QProxyStyle::pixelMetric(metric, option, widget);
    if (metric == QStyle::PM_SmallIconSize)
    {
        s = qMin(m_iconSize.width(),m_iconSize.height());
    }
    return s;

}

void SARibbonIconStyle::setIconSize(const QSize size)
{
    m_iconSize = size;
}

QSize  SARibbonIconStyle::iconSize() const
{
    return m_iconSize;
}
