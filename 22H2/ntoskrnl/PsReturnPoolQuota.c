/*
 * XREFs of PsReturnPoolQuota @ 0x1403063A0
 * Callers:
 *     ExReturnPoolQuota @ 0x14030631C (ExReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].AffinityPadding[7], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
