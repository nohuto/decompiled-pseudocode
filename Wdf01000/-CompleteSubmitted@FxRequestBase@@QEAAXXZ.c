void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  FxIoTarget *m_Target; // rsi
  FxIrp *p_m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void *ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(void *, __int64, _WDF_REQUEST_COMPLETION_PARAMS *); // r10
  _IRP *m_Irp; // rax

  m_Target = this->m_Target;
  FX_TRACK_DRIVER(this->m_Globals);
  p_m_Irp = &this->m_Irp;
  if ( this->m_Globals->FxVerifierOn )
  {
    m_Irp = p_m_Irp->m_Irp;
    m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = 0LL;
    *((_OWORD *)&m_Irp->Tail.CompletionKey + 1) = 0LL;
    FxRequestBase::VerifierClearFormatted(this);
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestContext->m_CompletionParams.IoStatus = p_m_Irp->m_Irp->IoStatus;
    this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
    if ( this->m_CompletionRoutine.m_Completion )
    {
      this->m_TargetCompletionContext = 0LL;
      this->m_CompletionRoutine.m_Completion = 0LL;
      FxObject::GetObjectHandleUnchecked(m_Target);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      v7(ObjectHandleUnchecked, v6, &this->m_RequestContext->m_CompletionParams);
    }
  }
  else if ( this->m_CompletionRoutine.m_Completion )
  {
    FxRequestBase::CompleteSubmittedNoContext(this);
  }
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
