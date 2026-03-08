/*
 * XREFs of HalpTimerWatchdogStart @ 0x1405096C0
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x14050956C (HalpTimerInitializeSystemWatchdog.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1403CE8CC (HalpTimerWatchdogWakeSetDueTime.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void HalpTimerWatchdogStart()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 InternalData; // rax
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = HalpTimerWatchdogStopCount;
    if ( HalpTimerWatchdogStopCount < 0 || (--HalpTimerWatchdogStopCount, v1 - 1 < 0) )
    {
      InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
      (*(void (__fastcall **)(__int64))(v0 + 104))(InternalData);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      if ( (int)HalpSetTimer(v0, 3, HalpTimerWatchdogTimeout, 1, &v3) >= 0 )
      {
        HalpTimerWatchdogArmed = 1;
        HalpTimerWatchdogWakeSetDueTime();
      }
    }
  }
}
