NTSTATUS __stdcall IoCsqInitializeEx(
        PIO_CSQ Csq,
        PIO_CSQ_INSERT_IRP_EX CsqInsertIrp,
        PIO_CSQ_REMOVE_IRP CsqRemoveIrp,
        PIO_CSQ_PEEK_NEXT_IRP CsqPeekNextIrp,
        PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock,
        PIO_CSQ_RELEASE_LOCK CsqReleaseLock,
        PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp)
{
  NTSTATUS result; // eax

  Csq->ReservePointer = 0LL;
  Csq->CsqAcquireLock = CsqAcquireLock;
  Csq->CsqReleaseLock = CsqReleaseLock;
  Csq->CsqCompleteCanceledIrp = CsqCompleteCanceledIrp;
  result = 0;
  Csq->CsqInsertIrp = (PIO_CSQ_INSERT_IRP)CsqInsertIrp;
  Csq->CsqRemoveIrp = CsqRemoveIrp;
  Csq->CsqPeekNextIrp = CsqPeekNextIrp;
  Csq->Type = 3;
  return result;
}
