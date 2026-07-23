/*
 * XREFs of ViShutdownWatchdogExecuteDpc @ 0x1409DB420
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409D91BC (VfErrorStoreTriageInformation.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DB3A4 (ViShutdownScheduleWatchdog.c)
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
      {
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        {
          VfErrorStoreTriageInformation(196LL, 277LL, VfShutdownThread, 0LL, 0LL);
          VfUtilDbgPrint(
            "\n"
            "Driver Verifier detected that this system didn't finish shutting down\n"
            "in more than 20 minutes. To display information about the thread that is\n"
            "responsible for shutting down, use these debugger commands:\n"
            "\n"
            "dp nt!VfShutdownThread l1;!thread @$p\n"
            "\n");
          __debugbreak();
        }
        if ( (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0x115uLL, VfShutdownThread, 0LL, 0LL);
      }
      else
      {
        _InterlockedAnd(&MmVerifierData, 0xFFFFFFFD);
      }
    }
    else
    {
      ViEtwLastStopTraceCount = EtwpStopTraceCount;
    }
  }
  ViShutdownScheduleWatchdog();
}
