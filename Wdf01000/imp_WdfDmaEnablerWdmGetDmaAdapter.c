/*
 * XREFs of imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x1C0018C50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0018070 (WPP_IFR_SF_dq.c)
 */

_DMA_ADAPTER *__fastcall imp_WdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        int DmaDirection)
{
  __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *v7; // rbx
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  pDmaEnabler = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !DmaDirection )
    return pDmaEnabler->m_SimplexAdapterInfo.AdapterObject;
  if ( DmaDirection == 1 )
  {
    v7 = ($2CC3FC5F0458F7DBA3F7D6DD9579F542 *)&pDmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)pDmaEnabler + 380) & 0x10) == 0 )
      v7 = &pDmaEnabler->184;
    return v7->m_SimplexAdapterInfo.AdapterObject;
  }
  else
  {
    WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, DmaEnabler);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (_DMA_ADAPTER *)v4;
}
