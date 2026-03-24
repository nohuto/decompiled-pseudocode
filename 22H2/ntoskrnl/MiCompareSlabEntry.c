/*
 * XREFs of MiCompareSlabEntry @ 0x1403796C8
 * Callers:
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140375F10 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CA40 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x1403999CC (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x140552EA0 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A92900 (MiUpdateSlabRangeProtectionHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareSlabEntry(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
