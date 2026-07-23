/*
 * XREFs of PspLazyInitializeStorageExpansion @ 0x14090EFA8
 * Callers:
 *     PspGetStorageArray @ 0x1406C4594 (PspGetStorageArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspLazyInitializeStorageExpansion(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rcx
  __int64 v5; // r8

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x1000uLL, 0x78457350u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = 256LL;
  do
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag += 2;
    --v5;
  }
  while ( v5 );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 512), (signed __int64)v3, 0LL) )
    ExFreePoolWithTag(v3, 0x78457350u);
  return 0LL;
}
