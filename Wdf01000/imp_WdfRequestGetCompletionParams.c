/*
 * XREFs of imp_WdfRequestGetCompletionParams @ 0x1C000D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C0020804 (WPP_IFR_SF_DD.c)
 *     ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C0034B20 (-CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfRequestGetCompletionParams(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  unsigned __int8 v4; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  if ( Params->Size == 72 )
  {
    FxRequest::CopyCompletionParams(pRequest, Params);
  }
  else
  {
    WPP_IFR_SF_DD(m_Globals, v4, 0x10u, 0x3Bu, WPP_FxRequestApi_cpp_Traceguids, Params->Size, 72);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
