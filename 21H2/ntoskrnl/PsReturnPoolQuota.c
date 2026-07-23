/*
 * XREFs of PsReturnPoolQuota @ 0x14022CFB0
 * Callers:
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota(Process[1].AffinityPadding[7], Process, PoolType == PagedPool, Amount);
}
