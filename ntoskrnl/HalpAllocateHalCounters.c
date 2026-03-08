/*
 * XREFs of HalpAllocateHalCounters @ 0x1404FFC48
 * Callers:
 *     EmonAllocateCounter @ 0x14051A760 (EmonAllocateCounter.c)
 *     EmonMarkCountersReserved @ 0x14051AFC0 (EmonMarkCountersReserved.c)
 *     Amd64AllocateCounter @ 0x140526678 (Amd64AllocateCounter.c)
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
