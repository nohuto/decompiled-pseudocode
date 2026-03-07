PIRP __stdcall IoCsqRemoveIrp(PIO_CSQ Csq, PIO_CSQ_IRP_CONTEXT Context)
{
  PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock; // rax
  __int64 v5; // rdx
  PIRP Irp; // rdi
  __int64 v7; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  CsqAcquireLock = Csq->CsqAcquireLock;
  Csq->ReservePointer = 0LL;
  v9 = 0;
  ((void (__fastcall *)(PIO_CSQ, char *))CsqAcquireLock)(Csq, &v9);
  Irp = Context->Irp;
  if ( Irp && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqRemoveIrp)(Csq, Irp);
    Context->Irp = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    LOBYTE(v7) = v9;
    ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v7);
    return Irp;
  }
  else
  {
    LOBYTE(v5) = v9;
    ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v5);
    return 0LL;
  }
}
