/*
 * XREFs of imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x1C00572A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall imp_WdfUsbTargetPipeSetNoMaximumPacketSizeCheck(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  FxUsbPipe *v3; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp+8h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  v3 = pUsbPipe;
  m_Globals = pUsbPipe->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
    v3 = pUsbPipe;
  }
  v3->m_CheckPacketSize = 0;
}
