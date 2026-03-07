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
