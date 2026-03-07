// local variable allocation has failed, the output may be wrong!
PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return (PVOID)ExpAllocatePoolWithTagFromNode(
                  PoolType,
                  NumberOfBytes,
                  *(__int64 *)&Tag,
                  KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000,
                  0);
}
