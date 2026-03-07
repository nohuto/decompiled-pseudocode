_IRP *__fastcall imp_WdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v4; // r8
  int _a2; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF
  _IRP *irp; // [rsp+60h] [rbp+18h] BYREF

  pRequest = 0LL;
  irp = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  _a2 = FxRequest::GetIrp(pRequest, &irp, v4);
  if ( _a2 >= 0 )
    return irp;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, Request, _a2);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
