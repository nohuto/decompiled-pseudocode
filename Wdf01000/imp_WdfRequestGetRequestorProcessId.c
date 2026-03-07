__int64 __fastcall imp_WdfRequestGetRequestorProcessId(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned int v2; // ebx
  FxRequest *v3; // rdi
  unsigned __int8 v4; // r8
  const void *_a1; // rax
  int _a2; // edx
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF
  _IRP *ppIrp; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v3 = pRequest;
  ppIrp = 0LL;
  if ( (int)FxRequest::GetIrp(pRequest, &ppIrp, v4) >= 0 )
  {
    return IoGetRequestorProcessId(ppIrp);
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
    WPP_IFR_SF_qd(v3->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequestKm_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(v3->m_Globals);
  }
  return v2;
}
