void __fastcall imp_WdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int RequestStatus)
{
  FxRequest *v4; // rcx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, (void **)&pRequest);
  v4 = pRequest;
  if ( !pRequest->m_Globals->FxVerifierOn )
    goto LABEL_2;
  if ( Vf_VerifyRequestComplete(pRequest->m_Globals, pRequest) >= 0 )
  {
    v4 = pRequest;
LABEL_2:
    FxRequest::Complete(v4, RequestStatus);
  }
}
