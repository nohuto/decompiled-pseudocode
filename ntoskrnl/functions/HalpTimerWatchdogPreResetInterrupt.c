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
