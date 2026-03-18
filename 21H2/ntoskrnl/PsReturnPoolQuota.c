/*
 * XREFs of PsReturnPoolQuota @ 0x140367E30
 * Callers:
 *     ExpReturnPoolQuota @ 0x140367DEC (ExpReturnPoolQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process != PsInitialSystemProcess )
    PspReturnQuota((char *)Process[1].Affinity.StaticBitmap[27], (ULONG_PTR)Process, PoolType == PagedPool, Amount);
}
