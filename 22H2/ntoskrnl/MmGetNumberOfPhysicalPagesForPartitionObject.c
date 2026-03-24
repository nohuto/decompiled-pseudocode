/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407BD0E4
 * Callers:
 *     CcInitializePartition @ 0x1403C25C4 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A3C5E8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * **a1) + 6928LL);
}
