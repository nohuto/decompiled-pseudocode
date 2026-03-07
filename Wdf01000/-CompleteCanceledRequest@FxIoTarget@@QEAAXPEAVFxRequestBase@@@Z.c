void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v7; // si
  unsigned __int8 v8; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v10; // r10
  FxRequestBase *_a1; // rdx
  const void *v12; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v7 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v5);
  FxNonPagedObject::Unlock(this, irql, v8);
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    _a1 = Request;
    if ( ObjectHandleUnchecked )
      _a1 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_q(v10, 5u, 0xEu, 0x2Cu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v7 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v12 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(v13, 5u, 0xEu, 0x2Du, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v12, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
