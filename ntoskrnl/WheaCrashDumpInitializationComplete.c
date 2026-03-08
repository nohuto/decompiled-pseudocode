/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x14086086C
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x140A06534 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.Queue.ListEntry.Blink != (struct _LIST_ENTRY *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink;
  ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
