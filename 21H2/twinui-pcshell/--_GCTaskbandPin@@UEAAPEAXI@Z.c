/*
 * XREFs of ??_GCTaskbandPin@@UEAAPEAXI@Z @ 0x18014FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1CPinnedList@@UEAA@XZ @ 0x180152DC8 (--1CPinnedList@@UEAA@XZ.c)
 */

CTaskbandPin *__fastcall CTaskbandPin::`scalar deleting destructor'(CTaskbandPin *this, char a2)
{
  *((_DWORD *)this + 31) = -1073741823;
  CPinnedList::~CPinnedList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
