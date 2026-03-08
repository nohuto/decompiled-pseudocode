/*
 * XREFs of imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0035820
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00397A8 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0039AD4 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestRetrieveOutputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  FxRequest *v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int8 MajorFunction; // al
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v5 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !Mdl )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *Mdl = 0LL;
  MajorFunction = v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x2Bu, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    return -1073741808;
  }
  else if ( (unsigned __int8)(MajorFunction - 14) <= 1u )
  {
    return FxRequest::GetDeviceControlOutputMdl(v5, Mdl);
  }
  else
  {
    return FxRequest::GetMdl(v5, Mdl);
  }
}
