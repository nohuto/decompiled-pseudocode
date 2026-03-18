/*
 * XREFs of MiHugePfnPartition @ 0x140620CC0
 * Callers:
 *     MiDereferenceIoHugeRange @ 0x14061F9F8 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620144 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x14062103C (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621584 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621E64 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x14062235C (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C674C8 + 8 * ((*a1 >> 4) & 0x7FFLL));
}
