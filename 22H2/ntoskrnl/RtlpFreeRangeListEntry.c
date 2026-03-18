/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140817C48
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140816B64 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140816E70 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14081703C (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x1408179D0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140817AA0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140817BE8 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
