/*
 * XREFs of ??_GCPinnedList@@UEAAPEAXI@Z @ 0x180153130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x180152C58 (--1CPinnedList@@UEAA@XZ.c)
 */

CPinnedList *__fastcall CPinnedList::`scalar deleting destructor'(CPinnedList *this, char a2)
{
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
