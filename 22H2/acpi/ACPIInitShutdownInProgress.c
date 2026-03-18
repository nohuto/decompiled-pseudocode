/*
 * XREFs of ACPIInitShutdownInProgress @ 0x1C003CC28
 * Callers:
 *     ACPINotifyOsShutdownWorker @ 0x1C003CD60 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C003DA00 (AcpiShutdownNotificationTimerWorkItem.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C002E580 (ACPIInternalEvaluateOST.c)
 */

BOOLEAN __fastcall ACPIInitShutdownInProgress(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 72), AcpiShutdownNotificationTimerCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 8));
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 22) = AcpiShutdownNotificationTimerWorkItem;
  *((_QWORD *)DeferredContext + 23) = DeferredContext;
  ACPIInternalEvaluateOST(*((_QWORD **)DeferredContext + 25), 129, 129);
  return KeSetTimer((PKTIMER)(DeferredContext + 8), (LARGE_INTEGER)-100000000LL, (PKDPC)(DeferredContext + 72));
}
