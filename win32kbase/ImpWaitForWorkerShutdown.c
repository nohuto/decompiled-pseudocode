/*
 * XREFs of ImpWaitForWorkerShutdown @ 0x1C008D694
 * Callers:
 *     ImSessionStop @ 0x1C008A7A8 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 * Callees:
 *     ImpReleaseLock @ 0x1C008A6FC (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C008A74C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

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
