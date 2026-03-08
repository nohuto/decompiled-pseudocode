/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140868AE0
 * Callers:
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403BAB18 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * **a1) + 17040LL);
}
