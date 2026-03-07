PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  CsqAcquireLock = Csq->CsqAcquireLock;
  v8 = 0;
  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, unsigned __int8 *))CsqAcquireLock)(Csq, &v8);
  v5 = ((__int64 (__fastcall *)(PIO_CSQ, _QWORD, PVOID))Csq->CsqPeekNextIrp)(Csq, 0LL, PeekContext);
  if ( v5 )
  {
    while ( !_InterlockedExchange64((volatile __int64 *)(v5 + 104), 0LL) )
    {
      v5 = ((__int64 (__fastcall *)(PIO_CSQ, __int64, PVOID))Csq->CsqPeekNextIrp)(Csq, v5, PeekContext);
      if ( !v5 )
        goto LABEL_6;
    }
    ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqRemoveIrp)(Csq, v5);
    v6 = *(_QWORD *)(v5 + 144);
    if ( *(_DWORD *)v6 == 1 )
      *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v5 + 144) = 0LL;
    ((void (__fastcall *)(PIO_CSQ, _QWORD))Csq->CsqReleaseLock)(Csq, v8);
    return (PIRP)v5;
  }
  else
  {
LABEL_6:
    ((void (__fastcall *)(PIO_CSQ, _QWORD))Csq->CsqReleaseLock)(Csq, v8);
    return 0LL;
  }
}
