__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int level; // eax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned int v9; // edi
  FxUsbPipe *pUsbPipe; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  pRequest = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x23u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  level = FxUsbPipe::FormatResetRequest(pUsbPipe, pRequest);
  v9 = level;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v7, v8, 0x24u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, level);
  return v9;
}
