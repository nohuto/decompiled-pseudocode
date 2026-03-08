/*
 * XREFs of DpiPendingIrpCancelQueueAcquireLock @ 0x1C0024250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueAcquireLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].CsqRemoveIrp);
}
