PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v3) = v3 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag, v3);
}
