char __fastcall HalpTimerReportIdleStateUsage(unsigned __int8 a1)
{
  signed __int32 v1; // eax

  LOBYTE(v1) = HalpTimerDeepestIdleState;
  if ( a1 > (unsigned __int8)HalpTimerDeepestIdleState )
  {
    LOBYTE(v1) = a1;
    HalpTimerDeepestIdleState = a1;
  }
  if ( (unsigned __int8)v1 > 1u )
  {
    LOBYTE(v1) = HalpPerformanceCounter;
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x4000) != 0 )
    {
      v1 = _InterlockedCompareExchange(&HalpTimerIdleStateFallback, 1, 0);
      if ( !v1 )
        LOBYTE(v1) = HalpTscFallbackToPlatformSource(&HAL_ETW_EVENT_EXPECTED_FALLBACK);
    }
  }
  return v1;
}
