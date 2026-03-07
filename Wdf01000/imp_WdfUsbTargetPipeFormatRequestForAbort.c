__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForAbort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int _a3; // eax
  unsigned int v7; // edi
  FxUsbPipe *pUsbPipe; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  pRequest = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Cu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  _a3 = FxUsbPipe::FormatAbortRequest(pUsbPipe, pRequest);
  v7 = _a3;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, (__int64)Request, _a3);
  return v7;
}
