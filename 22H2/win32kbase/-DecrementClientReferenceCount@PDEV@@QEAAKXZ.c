/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C0035700
 * Callers:
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(PDEV *this)
{
  __int64 result; // rax

  TrackObjectReferenceDecrement(1LL, *((_QWORD *)this + 440));
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
