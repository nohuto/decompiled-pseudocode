/*
 * XREFs of ExRebootSystemForRecovery @ 0x140604294
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x1406044C0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1402D2F20 (ExNotifyWithProcessing.c)
 *     KeRebootSystemForRecovery @ 0x140577F2C (KeRebootSystemForRecovery.c)
 *     CmShutdownSystem @ 0x140A0E674 (CmShutdownSystem.c)
 */

void ExRebootSystemForRecovery()
{
  if ( PnpKsrCallbackObject )
  {
    CmShutdownSystem(0LL);
    CmShutdownSystem(1LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 10LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 15LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 20LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 22LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 25LL, 0LL, 0LL);
    KeRebootSystemForRecovery();
  }
}
