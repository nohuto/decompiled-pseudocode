/*
 * XREFs of imp_WdfRequestStopAcknowledge @ 0x1C0035E60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BAB70 (-Vf_VerifyStopAcknowledge@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall imp_WdfRequestStopAcknowledge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int8 Requeue)
{
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v4 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyStopAcknowledge(pRequest, m_Globals, Requeue) >= 0 )
    v4->m_PowerStopState = (Requeue != 0) + 1;
}
