/*
 * XREFs of ACPINotifyOsShutdown @ 0x1C003CCA8
 * Callers:
 *     ACPIRootEvent @ 0x1C003D000 (ACPIRootEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPINotifyOsShutdown(void *a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( AcpiNotifyOsShutdownInProgress )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v2);
  }
  else
  {
    AcpiNotifyOsShutdownInProgress = 1;
    KeReleaseSpinLock(&AcpiPowerLock, v2);
    AcpiShutdownWorkItem.List.Flink = 0LL;
    AcpiShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ACPINotifyOsShutdownWorker;
    AcpiShutdownWorkItem.Parameter = a1;
    ExQueueWorkItem(&AcpiShutdownWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
