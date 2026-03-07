void __fastcall DpiPendingIrpCancelQueueAcquireLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].CsqRemoveIrp);
}
