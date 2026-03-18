/*
 * XREFs of HalpAllocateHalCounters @ 0x140501D28
 * Callers:
 *     EmonAllocateCounter @ 0x14051CC90 (EmonAllocateCounter.c)
 *     EmonMarkCountersReserved @ 0x14051D4F0 (EmonMarkCountersReserved.c)
 *     Amd64AllocateCounter @ 0x140528BA8 (Amd64AllocateCounter.c)
 * Callees:
 *     <none>
 */

__int64 HalpAllocateHalCounters()
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[2], 2u) & 1) == 0 )
    return 0LL;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[2], 0xFFFFFFFE);
  return 3221225473LL;
}
