int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  bool v6; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 *p_FxVerifierOn; // rbx
  int v12; // esi
  unsigned __int8 v13; // r8
  int result; // eax
  const void *_a1; // rax
  FxRequest *v16; // rdi
  FxRequest *pRequest; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  pRequest = 0LL;
  v6 = this->m_Type == WdfIoQueueDispatchManual;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( v6 )
  {
    p_FxVerifierOn = &m_Globals->FxVerifierOn;
    if ( !TagRequest
      || !*p_FxVerifierOn
      || (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest), result >= 0) )
    {
      FxNonPagedObject::Lock(this, &irql, (unsigned __int8)FileObject);
      v12 = FxRequest::PeekRequest(&this->m_Queue, TagRequest, FileObject, Parameters, &pRequest);
      if ( v12 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
        this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
      FxNonPagedObject::Unlock(this, irql, v13);
      if ( v12 >= 0 )
      {
        v16 = pRequest;
        if ( *p_FxVerifierOn )
          FxRequestBase::SetVerifierFlags(pRequest, 2);
        *pOutRequest = v16;
      }
      return v12;
    }
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
  return result;
}
