void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // bp
  const void *_a1; // rax
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v8; // r10
  unsigned __int8 v9; // r8
  char v10; // si
  unsigned __int8 v11; // al
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
  FxRequestBase *v14; // r8
  const void *v15; // rax
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v17; // edx
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  _IRP *m_Irp; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  v5 = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(Request);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(v8, 5u, 0xEu, 0x29u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  v10 = 1;
  v11 = Request->m_TargetFlags & 0xFB;
  Request->m_TargetFlags = v11;
  if ( (v11 & 1) == 0 )
  {
    Request->m_TargetFlags = v11 | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v17 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v17 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v9);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v18);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v19 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v9);
    m_Irp = Request->m_Irp.m_Irp;
    v5 = v19;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v10 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  if ( v10 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
      v14 = Request;
      if ( ObjectHandleUnchecked )
        v14 = (FxRequestBase *)ObjectHandleUnchecked;
      WPP_IFR_SF_q(v13, 5u, 0xEu, 0x2Au, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v14);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v5 )
  {
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xEu,
      0x2Bu,
      (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
      v15,
      &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v10 )
    FxIoTarget::DecrementIoCount(this);
}
