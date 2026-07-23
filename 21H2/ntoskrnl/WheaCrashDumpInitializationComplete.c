/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1407D4634
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x14095E36C (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Timer);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.DriverObject != (struct _DRIVER_OBJECT *)&WheapDispatchPtr.DriverObject;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Timer);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
