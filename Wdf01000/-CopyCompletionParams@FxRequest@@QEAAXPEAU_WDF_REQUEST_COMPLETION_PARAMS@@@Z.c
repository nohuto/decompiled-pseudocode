/*
 * XREFs of ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C0034B20
 * Callers:
 *     imp_WdfRequestGetCompletionParams @ 0x1C000D5A0 (imp_WdfRequestGetCompletionParams.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

void __fastcall FxRequest::CopyCompletionParams(FxRequest *this, _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  FxRequestContext *m_RequestContext; // rax

  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    *Params = m_RequestContext->m_CompletionParams;
  }
  else
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_hpp_Traceguids);
    FxVerifierDbgBreakPoint(this->m_Globals);
    memset(Params, 0, sizeof(_WDF_REQUEST_COMPLETION_PARAMS));
    Params->Size = 72;
    Params->Type = WdfRequestTypeNoFormat;
  }
}
