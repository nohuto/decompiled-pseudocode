void __fastcall imp_WdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a1; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Parameters )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  _a1 = Parameters->Size;
  if ( (_WORD)_a1 == 40 )
  {
    FxRequest::GetParameters(pRequest, Parameters);
  }
  else
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x10u, 0x39u, WPP_FxRequestApi_cpp_Traceguids, _a1, 40);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
