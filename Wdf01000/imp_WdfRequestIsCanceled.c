unsigned __int8 __fastcall imp_WdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v2; // rcx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v2 = pRequest;
  if ( pRequest->m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyWdfRequestIsCanceled(pRequest->m_Globals, pRequest) < 0 )
      return 0;
    v2 = pRequest;
  }
  return FxRequest::IsCancelled(v2);
}
