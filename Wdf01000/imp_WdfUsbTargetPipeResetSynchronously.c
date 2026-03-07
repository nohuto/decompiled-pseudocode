__int64 __fastcall imp_WdfUsbTargetPipeResetSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v8; // ebx
  FxRequestBase *v9; // r8
  __int64 v10; // rdx
  unsigned __int8 v11; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v16; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbPipeRequestContext::FxUsbPipeRequestContext(&context, FxUrbTypeLegacy);
  FxSyncRequest::FxSyncRequest(&v16, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  v8 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v8 >= 0 )
  {
    v8 = FxValidateRequestOptions(m_Globals, RequestOptions, v9);
    if ( v8 >= 0 )
    {
      v8 = FxUsbPipe::FormatResetRequest(pUsbPipe, v16.m_TrueRequest);
      if ( v8 >= 0 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v16.m_TrueRequest);
          if ( ObjectHandleUnchecked )
            _a2 = (const void *)ObjectHandleUnchecked;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x21u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
        }
        FxIoTarget::CancelSentIo(pUsbPipe, v10, v11);
        v8 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(pUsbPipe, v16.m_TrueRequest, RequestOptions);
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x22u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, v8);
    }
    else
    {
      WPP_IFR_SF_(m_Globals, 2u, 0xEu, 0x20u, WPP_FxUsbPipeAPI_cpp_Traceguids);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v16);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v8;
}
