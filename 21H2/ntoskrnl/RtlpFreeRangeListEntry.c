/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140761668
 * Callers:
 *     RtlDeleteRange @ 0x140761400 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x1407614B0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140761608 (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x140764410 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1407BC984 (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x1407C5424 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
