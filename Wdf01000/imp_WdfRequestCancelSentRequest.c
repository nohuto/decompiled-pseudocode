unsigned __int8 __fastcall imp_WdfRequestCancelSentRequest(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v3 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x32u, WPP_FxRequestApi_cpp_Traceguids, Request);
    v3 = pRequest;
  }
  return FxRequestBase::Cancel(v3);
}
