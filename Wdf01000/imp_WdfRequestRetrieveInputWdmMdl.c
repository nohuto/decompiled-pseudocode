int __fastcall imp_WdfRequestRetrieveInputWdmMdl(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, _MDL **Mdl)
{
  FxRequest *v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v5 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !Mdl )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *Mdl = 0LL;
  if ( v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 3 )
    return FxRequest::GetMdl(v5, Mdl);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x29u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
  return -1073741808;
}
