/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140761828
 * Callers:
 *     RtlDeleteRange @ 0x1407615C0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140761670 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x1407617C8 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x1407645D0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407BD114 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C5944 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
