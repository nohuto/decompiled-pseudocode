PVOID __fastcall MiAllocatePool(int a1, SIZE_T a2, ULONG a3)
{
  int v5; // ebx
  char v7; // [rsp+30h] [rbp-18h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  PoolType = NonPagedPool;
  v7 = 0;
  v9 = 0;
  v5 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v7, (__int64)&v9) < 0 )
    return 0LL;
  if ( v7 )
    return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
  return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)PoolType, a2, a3, v5 | 0x80000000, v9 != 0);
}
