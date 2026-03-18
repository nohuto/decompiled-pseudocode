/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14086B718
 * Callers:
 *     CcInitializePartition @ 0x1403A00A0 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0448 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * **a1) + 17040LL);
}
