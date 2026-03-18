/*
 * XREFs of RtlpFreeRangeListEntry @ 0x1408398AC
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x1408394BC (RtlpDeleteFromMergedRange.c)
 *     RtlDeleteRange @ 0x1408395F0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14083984C (RtlpDeleteRangeListEntry.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14083A1D0 (RtlpAddIntersectingRanges.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  ExFreeToPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
