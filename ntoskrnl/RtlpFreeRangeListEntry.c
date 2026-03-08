/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140820318
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x14081F234 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x14081F540 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14081F70C (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x1408200A0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140820170 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x1408202B8 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
