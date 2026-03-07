WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned int v2; // edx
  FxRequest *v3; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  signed int _a1; // eax
  int IsDriverOwned; // edi
  unsigned __int8 irql; // [rsp+50h] [rbp+20h] BYREF
  FxRequest *pRequest; // [rsp+60h] [rbp+30h] BYREF
  FxFileObject *pFO; // [rsp+68h] [rbp+38h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, (void **)&pRequest);
  v3 = pRequest;
  pFO = 0LL;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pRequest->m_Globals, v2, 9u) || m_Globals->FxVerifyDownlevel) )
  {
    irql = 0;
    FxNonPagedObject::Lock(v3, &irql);
    if ( m_Globals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
    else
      IsDriverOwned = 0;
    FxNonPagedObject::Unlock(pRequest, irql);
    if ( IsDriverOwned < 0 )
      return 0LL;
    v3 = pRequest;
  }
  _a1 = FxRequest::GetFileObject(v3, &pFO);
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x3Fu, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return 0LL;
  }
  if ( !pFO )
    return 0LL;
  return (WDFFILEOBJECT__ *)FxObject::GetObjectHandleUnchecked(pFO);
}
