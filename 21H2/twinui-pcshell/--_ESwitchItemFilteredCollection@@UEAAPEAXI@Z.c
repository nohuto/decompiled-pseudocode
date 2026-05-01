/*
 * XREFs of ??_ESwitchItemFilteredCollection@@UEAAPEAXI@Z @ 0x180403420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x180403148 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 */

SwitchItemFilteredCollection *__fastcall SwitchItemFilteredCollection::`vector deleting destructor'(
        SwitchItemFilteredCollection *this,
        char a2)
{
  SwitchItemFilteredCollection::~SwitchItemFilteredCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
