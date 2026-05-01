/*
 * XREFs of ??_GCPinnedList@@UEAAPEAXI@Z @ 0x1801532A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x180152DC8 (--1CPinnedList@@UEAA@XZ.c)
 */

CPinnedList *__fastcall CPinnedList::`scalar deleting destructor'(CPinnedList *this, char a2)
{
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
