void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  unsigned __int8 v6; // r8
  FxRequestBase *_a2; // rbx
  _LIST_ENTRY *v8; // rdi
  _IRP *m_Irp; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v12; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF
  _IO_CSQ_IRP_CONTEXT *pContext; // [rsp+88h] [rbp+20h] BYREF

  while ( 1 )
  {
    pContext = 0LL;
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_PendedQueue, 0LL, &pContext) )
      break;
    _a2 = (FxRequestBase *)&pContext[-5];
    v8 = (_LIST_ENTRY *)pContext;
    pContext->Irp = (_IRP *)pContext;
    v8->Flink = v8;
    m_Irp = _a2->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    _a2->m_TargetFlags &= ~2u;
    if ( !RequestWillBeResent
      || FxRequestBase::CancelTimer(_a2)
      && _InterlockedExchangeAdd(&_a2->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
      {
        PreviousIrql = 0;
        FxNonPagedObject::Lock(_a2, &PreviousIrql, v6);
        v14 = PreviousIrql;
        _a2->m_VerifierFlags &= ~0x100u;
        FxNonPagedObject::Unlock(_a2, v14, v15);
      }
      Blink = RequestListHead->Blink;
      if ( Blink->Flink != RequestListHead )
        __fastfail(3u);
      v8->Flink = RequestListHead;
      v8->Blink = Blink;
      Blink->Flink = v8;
      RequestListHead->Blink = v8;
    }
    else
    {
      _a2->m_Irp.m_Irp->IoStatus.Status = -1073741536;
      _a2->m_TargetFlags |= 1u;
      if ( this->m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(_a2);
        if ( ObjectHandleUnchecked )
          _a2 = (FxRequestBase *)ObjectHandleUnchecked;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qq(v12, 5u, 0xEu, 0x10u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      }
    }
  }
}
