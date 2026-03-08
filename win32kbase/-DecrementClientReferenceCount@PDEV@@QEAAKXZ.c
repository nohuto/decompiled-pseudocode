/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C006DC00
 * Callers:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **this)
{
  __int64 result; // rax

  TrackObjectReferenceDecrement(1LL, this[440]);
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
