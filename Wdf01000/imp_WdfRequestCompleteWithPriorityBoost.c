void __fastcall imp_WdfRequestCompleteWithPriorityBoost(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned int RequestStatus,
        char PriorityBoost)
{
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  FxRequest *v8; // rcx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v8 = pRequest;
  if ( pRequest->m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(pRequest->m_Globals, pRequest) < 0 )
      return;
    v8 = pRequest;
  }
  LOBYTE(v6) = PriorityBoost;
  FxRequest::CompleteWithPriority(v8, RequestStatus, v6, v7);
}
