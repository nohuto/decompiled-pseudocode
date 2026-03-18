/*
 * XREFs of ExAllocatePoolWithQuota @ 0x140606CB0
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x140AD1CD0 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402080C0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}
