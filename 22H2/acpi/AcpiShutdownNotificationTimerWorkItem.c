/*
 * XREFs of AcpiShutdownNotificationTimerWorkItem @ 0x1C003DA00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C002E580 (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x1C003CC28 (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x1C003D81C (ACPIStopShutdownInProgress.c)
 */

void __fastcall AcpiShutdownNotificationTimerWorkItem(PVOID DeferredContext)
{
  KeAcquireGuardedMutex(&AcpiShutdownInProgressWorkerLock);
  if ( *(_BYTE *)DeferredContext )
  {
    if ( ++*((_DWORD *)DeferredContext + 48) < 3u )
    {
      ACPIInitShutdownInProgress((char *)DeferredContext);
    }
    else
    {
      ACPIInternalEvaluateOST(*((_QWORD **)DeferredContext + 25), 129, 128);
      ACPIStopShutdownInProgress(*((_QWORD *)DeferredContext + 25));
    }
  }
  KeReleaseGuardedMutex(&AcpiShutdownInProgressWorkerLock);
}
