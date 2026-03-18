/*
 * XREFs of ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0097120
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::IncrementClientReferenceCount(PDEV *this)
{
  ++*((_DWORD *)this + 2);
  TrackObjectReferenceIncrement(
    1LL,
    *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)this + 440));
}
