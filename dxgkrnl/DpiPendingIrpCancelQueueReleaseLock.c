void __fastcall DpiPendingIrpCancelQueueReleaseLock(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].CsqRemoveIrp, Irql);
}
