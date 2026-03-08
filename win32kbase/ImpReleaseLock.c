/*
 * XREFs of ImpReleaseLock @ 0x1C008A6FC
 * Callers:
 *     ImpInitializeWork @ 0x1C0089C08 (ImpInitializeWork.c)
 *     ImpWorkerRoutine @ 0x1C0089F90 (ImpWorkerRoutine.c)
 *     ImpCleanupWork @ 0x1C008D2F0 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1C008D694 (ImpWaitForWorkerShutdown.c)
 *     ImpShutdownWorker @ 0x1C008D758 (ImpShutdownWorker.c)
 *     ImpQueueCharacter @ 0x1C0274AC8 (ImpQueueCharacter.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void ImpReleaseLock()
{
  if ( (struct _KTHREAD *)qword_1C02D0988 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  qword_1C02D0988 = 0LL;
  ExReleaseResourceLite(ImpRequestLock);
  KeLeaveCriticalRegion();
}
