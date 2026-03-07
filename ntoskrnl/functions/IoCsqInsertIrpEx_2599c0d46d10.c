NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // esi
  PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock; // rax
  PIO_CSQ_INSERT_IRP CsqInsertIrp; // rax
  PIO_CSQ v11; // rcx
  __int64 v13; // rdx
  unsigned __int8 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  CsqAcquireLock = Csq->CsqAcquireLock;
  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, unsigned __int8 *))CsqAcquireLock)(Csq, &v14);
  CsqInsertIrp = Csq->CsqInsertIrp;
  if ( Csq->Type == 3 )
  {
    v4 = ((__int64 (__fastcall *)(PIO_CSQ, PIRP, PVOID))CsqInsertIrp)(Csq, Irp, InsertContext);
    if ( v4 < 0 )
    {
LABEL_6:
      v11 = Csq;
LABEL_7:
      ((void (__fastcall *)(PIO_CSQ, _QWORD))Csq->CsqReleaseLock)(v11, v14);
      return v4;
    }
  }
  else
  {
    ((void (__fastcall *)(PIO_CSQ, PIRP))CsqInsertIrp)(Csq, Irp);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
    goto LABEL_6;
  v11 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqRemoveIrp)(Csq, Irp);
  if ( Context )
    Context->Irp = 0LL;
  v13 = v14;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v13);
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqCompleteCanceledIrp)(Csq, Irp);
  return v4;
}
