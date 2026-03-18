/*
 * XREFs of ExRebootSystemForRecovery @ 0x1406066E4
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x140606910 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033BD60 (ExNotifyWithProcessing.c)
 *     KeRebootSystemForRecovery @ 0x14057A43C (KeRebootSystemForRecovery.c)
 *     CmShutdownSystem @ 0x140A11388 (CmShutdownSystem.c)
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
