/*
 * XREFs of ??_GVirtualDesktopItem@@UEAAPEAXI@Z @ 0x18040EF20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1VirtualDesktopItem@@UEAA@XZ @ 0x18040ED4C (--1VirtualDesktopItem@@UEAA@XZ.c)
 */

VirtualDesktopItem *__fastcall VirtualDesktopItem::`scalar deleting destructor'(VirtualDesktopItem *this, char a2)
{
  VirtualDesktopItem::~VirtualDesktopItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
