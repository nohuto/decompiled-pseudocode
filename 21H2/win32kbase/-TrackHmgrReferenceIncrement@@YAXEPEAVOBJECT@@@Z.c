/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D90
 * Callers:
 *     HmgShareLockIgnoreStockBit @ 0x1C00AE0E0 (HmgShareLockIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00CB950 (HmgIncrementShareReferenceCount.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  if ( a1 == 5 )
  {
    TrackObjectReferenceIncrement(0LL, *((_QWORD *)a2 + 85));
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceIncrement(2LL, *((_QWORD *)a2 + 17));
  }
}
