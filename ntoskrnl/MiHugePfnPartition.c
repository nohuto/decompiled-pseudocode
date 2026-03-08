/*
 * XREFs of MiHugePfnPartition @ 0x14061E808
 * Callers:
 *     MiDereferenceIoHugeRange @ 0x14061D540 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x14061F0CC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x14061FEB0 (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C67048 + 8 * ((*a1 >> 4) & 0x7FFLL));
}
