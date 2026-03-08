/*
 * XREFs of CcCreatePartition @ 0x14039B540
 * Callers:
 *     CcGetPartitionWithCreate @ 0x1402E20D0 (CcGetPartitionWithCreate.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     CcInitializePartition @ 0x14039B5F0 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  void *v0; // rbx
  const char *v1; // r9
  PVOID PoolWithTag; // rax

  v0 = 0LL;
  v1 = "ENABLED";
  if ( !CcEnablePerVolumeLazyWriter )
    v1 = "DISABLED";
  DbgPrintEx(0x7Fu, 2u, "CcCreatePartition: Per-Volume Lazywriter is: %s\n\n", v1);
  if ( ExAllocatePoolWithTag((POOL_TYPE)1536, 440LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x580uLL, 0x72506343u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned __int8)CcInitializePartition(PoolWithTag) )
      {
        CcDeletePartition(v0);
        return 0LL;
      }
    }
  }
  return v0;
}
