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
