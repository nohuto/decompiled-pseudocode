/*
 * XREFs of ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00449B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::IncrementClientReferenceCount(PDEV *this)
{
  ++*((_DWORD *)this + 2);
  TrackObjectReferenceIncrement(1LL, *((_QWORD *)this + 440));
}
