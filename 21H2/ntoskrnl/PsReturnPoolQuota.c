/*
 * XREFs of PsReturnPoolQuota @ 0x1402AEC50
 * Callers:
 *     ExReturnPoolQuota @ 0x1402AEBCC (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota(Process[1].AffinityPadding[7], Process, PoolType == PagedPool, Amount);
}
