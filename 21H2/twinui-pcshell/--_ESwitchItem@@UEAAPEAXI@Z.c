/*
 * XREFs of ??_ESwitchItem@@UEAAPEAXI@Z @ 0x18040DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x18040DC90 (--1SwitchItem@@UEAA@XZ.c)
 */

SwitchItem *__fastcall SwitchItem::`vector deleting destructor'(SwitchItem *this, char a2)
{
  SwitchItem::~SwitchItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
