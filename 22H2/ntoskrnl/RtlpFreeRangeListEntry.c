/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140760C88
 * Callers:
 *     RtlDeleteRange @ 0x140760A20 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140760AD0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140760C28 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x140763A30 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407BD144 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C5BE4 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
