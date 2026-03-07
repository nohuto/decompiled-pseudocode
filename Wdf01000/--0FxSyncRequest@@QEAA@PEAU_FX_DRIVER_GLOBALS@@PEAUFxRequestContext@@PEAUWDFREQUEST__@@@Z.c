void __fastcall FxSyncRequest::FxSyncRequest(
        FxSyncRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestContext *Context,
        WDFREQUEST__ *Request)
{
  unsigned __int8 v8; // dl
  FxRequest *v9; // rcx
  FxRequestContext *m_RequestContext; // r8
  FxRequest *pRequest; // [rsp+60h] [rbp+8h] BYREF

  FxRequestBase::FxRequestBase(
    this,
    FxDriverGlobals,
    0,
    0LL,
    FxRequestDoesNotOwnIrp,
    FxRequestConstructorCallerIsFx,
    FxObjectTypeEmbedded);
  this->__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  FxCREvent::FxCREvent(&this->m_DestroyedEvent, v8);
  this->m_ClearContextOnDestroy = Context != 0LL;
  this->m_RequestContext = Context;
  if ( Request )
  {
    pRequest = 0LL;
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
    v9 = pRequest;
    this->m_TrueRequest = pRequest;
    m_RequestContext = v9->m_RequestContext;
    if ( m_RequestContext )
    {
      m_RequestContext->ReleaseAndRestore(v9->m_RequestContext, v9);
      v9 = pRequest;
    }
    FxRequestBase::SetContext(v9, Context);
    pRequest->m_RequestBaseFlags |= 0x10u;
  }
  else
  {
    this->m_RequestBaseFlags |= 0x10u;
    this->m_TrueRequest = this;
  }
  this->m_ObjectSize = 0;
}
