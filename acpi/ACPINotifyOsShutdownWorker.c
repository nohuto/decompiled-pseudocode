/*
 * XREFs of ACPINotifyOsShutdownWorker @ 0x1C003CD40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x1C003CC08 (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x1C003D7FC (ACPIStopShutdownInProgress.c)
 */

void __fastcall ACPINotifyOsShutdownWorker(_QWORD *a1)
{
  char *v2; // rcx

  ACPIInternalEvaluateOST(a1, 129, 129);
  v2 = (char *)AcpiShutdownNotification;
  *((_DWORD *)AcpiShutdownNotification + 48) = 0;
  *v2 = 1;
  *((_QWORD *)v2 + 25) = a1;
  ACPIInitShutdownInProgress(v2);
  if ( AcpiNotifyOsShutdownCritical )
  {
    ZwInitiatePowerAction(PowerActionShutdownOff, PowerSystemSleeping3, 0x41000004u, 0);
  }
  else if ( ZwInitiatePowerAction(PowerActionShutdownOff, PowerSystemSleeping3, 0x2000003u, 0) < 0 )
  {
    ACPIInternalEvaluateOST(a1, 129, 128);
    KeAcquireGuardedMutex(&AcpiShutdownInProgressWorkerLock);
    ACPIStopShutdownInProgress(AcpiShutdownNotification);
    KeReleaseGuardedMutex(&AcpiShutdownInProgressWorkerLock);
  }
}
