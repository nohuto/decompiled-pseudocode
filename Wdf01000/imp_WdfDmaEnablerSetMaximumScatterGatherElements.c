/*
 * XREFs of imp_WdfDmaEnablerSetMaximumScatterGatherElements @ 0x1C0018B90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_PqD @ 0x1C0017E88 (WPP_IFR_SF_PqD.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall imp_WdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumElements)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  FxDmaEnabler *pDmaEnabler; // [rsp+50h] [rbp+8h] BYREF

  pDmaEnabler = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) >= 0 )
  {
    if ( MaximumElements )
    {
      if ( MaximumElements > 0xFFFFFFFF )
      {
        WPP_IFR_SF_PqD(m_Globals, v6, v7, v8, traceGuid, MaximumElements, DmaEnabler);
        LODWORD(MaximumElements) = -1;
      }
      pDmaEnabler->m_MaxSGElements = MaximumElements;
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaEnabler);
    }
  }
}
