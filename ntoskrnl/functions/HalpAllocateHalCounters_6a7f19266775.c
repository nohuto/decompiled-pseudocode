__int64 HalpAllocateHalCounters()
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[2], 2u) & 1) == 0 )
    return 0LL;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[2], 0xFFFFFFFE);
  return 3221225473LL;
}
