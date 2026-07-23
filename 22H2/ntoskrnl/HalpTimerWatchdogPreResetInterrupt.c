/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x1404D4910
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     KeQueryInterruptTimePrecise @ 0x140318820 (KeQueryInterruptTimePrecise.c)
 *     HalpTimerWatchdogResetCountdown @ 0x140393360 (HalpTimerWatchdogResetCountdown.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  LARGE_INTEGER v4; // rax
  LARGE_INTEGER v6; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      BugCheckParameter4 = (unsigned int)KiClockTimerOwner;
      v4 = KeQueryInterruptTimePrecise(&v6);
      KeBugCheckEx(0x101u, v2, (unsigned __int64)HalpTimerWatchdogResetCount >> 1, v4.QuadPart, BugCheckParameter4);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
