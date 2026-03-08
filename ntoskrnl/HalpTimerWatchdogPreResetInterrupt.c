/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x14051C6D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403CE870 (HalpTimerWatchdogResetCountdown.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR InterruptTimePrecise; // rax
  LARGE_INTEGER v6; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      BugCheckParameter4 = (unsigned int)KiClockTimerOwner;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
      KeBugCheckEx(
        0x101u,
        v2,
        (unsigned __int64)HalpTimerWatchdogResetCount >> 1,
        InterruptTimePrecise,
        BugCheckParameter4);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
