/*
 * XREFs of ExTraceTimerResolution @ 0x1409F4DC8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PoTraceSystemTimerResolution @ 0x1407DFCB0 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x140988EA0 (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 260));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
