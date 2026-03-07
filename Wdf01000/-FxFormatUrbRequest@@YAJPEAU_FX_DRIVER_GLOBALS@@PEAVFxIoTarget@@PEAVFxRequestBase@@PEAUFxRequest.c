__int64 __fastcall FxFormatUrbRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoTarget *Target,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        _FX_URB_TYPE FxUrbType,
        USBD_HANDLE__ *UsbdHandle)
{
  int _a3; // eax
  unsigned int v11; // ebx
  FxRequestContext *m_RequestContext; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v15; // rax
  FX_POOL **v16; // rax
  FxRequestContext *v17; // rax
  __m128i v18; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, Target);
  v11 = _a3;
  if ( _a3 >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 17 )
    {
      m_Globals = Target->m_Globals;
      v18.m128i_i64[0] = 0LL;
      v18.m128i_i64[1] = 64LL;
      if ( m_Globals->FxPoolTrackingOn )
        v15 = retaddr;
      else
        v15 = 0LL;
      v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v18, 0x88uLL, m_Globals->Tag, v15);
      if ( !v16 )
        return 3221225626LL;
      FxUsbUrbContext::FxUsbUrbContext((FxUsbUrbContext *)v16);
      m_RequestContext = v17;
      if ( !v17 )
        return 3221225626LL;
      FxRequestBase::SetContext(Request, v17);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    FxFormatUsbRequest(
      Request,
      (_URB *)m_RequestContext[1].m_CompletionParams.Parameters.Write.Buffer,
      FxUrbType,
      UsbdHandle);
    return 0LL;
  }
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qid(FxDriverGlobals, 5u, 0xEu, 0xAu, WPP_usbutil_cpp_Traceguids, Target, (__int64)Request, _a3);
  return v11;
}
