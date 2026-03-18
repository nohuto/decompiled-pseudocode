/*
 * XREFs of ViShutdownWatchdogExecuteDpc @ 0x140A95A80
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViShutdownScheduleWatchdog @ 0x140A95A04 (ViShutdownScheduleWatchdog.c)
 */

void __fastcall ViShutdownWatchdogExecuteDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // ecx

  v4 = ++ViShutdownTimeoutCount;
  if ( VfZeroAllPagesRunning != 1 || v4 >= 4 )
  {
    if ( !EtwpStopTraceCount || EtwpStopTraceCount == ViEtwLastStopTraceCount )
    {
      if ( v4 <= 1 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x115uLL, VfShutdownThread, 0LL, 0LL);
      else
        _InterlockedAnd(&MmVerifierData, 0xFFFFFFFD);
    }
    else
    {
      ViEtwLastStopTraceCount = EtwpStopTraceCount;
    }
  }
  ViShutdownScheduleWatchdog();
}
