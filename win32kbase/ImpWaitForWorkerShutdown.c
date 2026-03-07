__int64 ImpWaitForWorkerShutdown()
{
  unsigned int v0; // ebx

  v0 = 0;
  ImpAcquireLock();
  if ( ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpReleaseLock();
  if ( (struct _KTHREAD *)ImpWorkerThread != KeGetCurrentThread() )
    v0 = ZwWaitForSingleObject(ImpWorkerThreadHandle, 0, 0LL);
  ZwClose(ImpWorkerThreadHandle);
  ImpWorkerThreadHandle = 0LL;
  ExFreePoolWithTag(ImpWorkerEvent, 0);
  return v0;
}
