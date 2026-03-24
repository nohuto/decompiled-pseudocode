/*
 * XREFs of PopDripsWatchdogReleaseContextLock @ 0x1408EF510
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x1408EEFD0 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall PopDripsWatchdogReleaseContextLock(struct _ERESOURCE *a1)
{
  ExReleaseResourceLite(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
