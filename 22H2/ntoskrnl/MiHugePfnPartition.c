/*
 * XREFs of MiHugePfnPartition @ 0x1403F2F68
 * Callers:
 *     MiMakeEntireHugePfnGood @ 0x1403F2FCC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1403F3074 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3428 (MiMarkHugePfnGood.c)
 *     MiHotRemoveHugeRange @ 0x140532C38 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x140533548 (MiInsertHugeRangeInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 41) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C4E648 + 8 * ((*a1 >> 41) & 0x7FFLL));
}
