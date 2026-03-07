PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, int a4)
{
  __int64 v4; // rbx
  char v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+31h] [rbp-17h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF

  v4 = 0LL;
  PoolType = NonPagedPool;
  v11 = 0;
  v10 = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v11, (__int64)&v10) >= 0 )
  {
    if ( v11 )
      return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
    else
      return (PVOID)ExpAllocatePoolWithTagFromNode(PoolType, a2, a3, a4, v10 != 0);
  }
  return (PVOID)v4;
}
