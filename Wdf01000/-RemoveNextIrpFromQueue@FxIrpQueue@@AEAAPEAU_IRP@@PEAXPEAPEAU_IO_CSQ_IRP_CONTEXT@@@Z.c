_IRP *__fastcall FxIrpQueue::RemoveNextIrpFromQueue(
        FxIrpQueue *this,
        void *PeekContext,
        _IO_CSQ_IRP_CONTEXT **pCsqContext)
{
  void *v4; // r8
  _IRP *m_Irp; // r10
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rax
  FxIrp fxIrp; // [rsp+40h] [rbp+18h] BYREF

  if ( pCsqContext )
    *pCsqContext = 0LL;
  fxIrp.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(this, 0LL, PeekContext);
  m_Irp = fxIrp.m_Irp;
  if ( fxIrp.m_Irp )
  {
    while ( !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
    {
      fxIrp.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(this, m_Irp, v4);
      m_Irp = fxIrp.m_Irp;
      if ( !fxIrp.m_Irp )
        return 0LL;
    }
    FxIrpQueue::RemoveIrpFromListEntry(this, &fxIrp);
    v9 = *(_QWORD *)(v6 + 144);
    if ( *(_DWORD *)v9 == 1 )
      *(_QWORD *)(v9 + 8) = 0LL;
    if ( v8 )
      *v8 = v9;
    *(_QWORD *)(v6 + 144) = 0LL;
    return (_IRP *)v7;
  }
  else
  {
    return 0LL;
  }
}
