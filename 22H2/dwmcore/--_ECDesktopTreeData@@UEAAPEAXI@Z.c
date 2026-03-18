/*
 * XREFs of ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x1802104B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x18009B7E8 (--1CTreeData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CDesktopTreeData *__fastcall CDesktopTreeData::`vector deleting destructor'(CDesktopTreeData *this, char a2)
{
  *((_BYTE *)this + 10) = 0;
  *(_QWORD *)this = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
