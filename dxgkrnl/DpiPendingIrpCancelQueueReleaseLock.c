/*
 * XREFs of DpiPendingIrpCancelQueueReleaseLock @ 0x1C0024290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueReleaseLock(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].CsqRemoveIrp, Irql);
}
