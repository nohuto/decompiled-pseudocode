/*
 * XREFs of ??_ECVirtualDesktopBarElement@@UEAAPEAXI@Z @ 0x180408640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x1804084F8 (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 */

CVirtualDesktopBarElement *__fastcall CVirtualDesktopBarElement::`vector deleting destructor'(
        CVirtualDesktopBarElement *this,
        char a2)
{
  CVirtualDesktopBarElement::~CVirtualDesktopBarElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
