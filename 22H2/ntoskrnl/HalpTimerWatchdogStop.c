/*
 * XREFs of HalpTimerWatchdogStop @ 0x14050B830
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void HalpTimerWatchdogStop()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpWatchdogTimer )
  {
    ++HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogArmed )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      (*(void (__fastcall **)(__int64))(v1 + 136))(InternalData);
      HalpWatchdogWakeDueTime = 0LL;
      HalpTimerWatchdogArmed = 0;
    }
  }
}
