/*
 * XREFs of CcCreatePartition @ 0x1403C2570
 * Callers:
 *     CcGetPartitionWithCreate @ 0x140313D10 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140A3C5E8 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x1403C25C4 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x1404EBBC0 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x72506343u);
  v1 = PoolWithTag;
  if ( PoolWithTag && !(unsigned __int8)CcInitializePartition(PoolWithTag) )
  {
    CcDeletePartition(v1);
    return 0LL;
  }
  return v1;
}
