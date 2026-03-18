/*
 * XREFs of imp_WdfDmaTransactionSetTransferCompleteCallback @ 0x1C0030EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfDmaTransactionSetTransferCompleteCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        _LIST_ENTRY *DmaCompletionRoutine,
        _LIST_ENTRY *DmaCompletionContext)
{
  FxDmaTransactionBase *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_DMA_PROFILE _a2; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v7 = pDmaTrans;
  m_Globals = pDmaTrans->m_Globals;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( (unsigned int)(_a2 - 7) <= 1 )
  {
    pDmaTrans[1].m_ChildEntry.Flink = DmaCompletionRoutine;
    v7[1].m_ChildEntry.Blink = DmaCompletionContext;
  }
  else
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0x1Cu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
