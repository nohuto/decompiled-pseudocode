/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1402950E0
 * Callers:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14053B780 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14053B7B0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithQuota @ 0x140604860 (ExAllocatePoolWithQuota.c)
 *     NtRegisterThreadTerminatePort @ 0x140795600 (NtRegisterThreadTerminatePort.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140ACDDA0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADA380 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAB128 (ExpAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v3) = v3 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag, v3);
}
