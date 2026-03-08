/*
 * XREFs of imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C001A400
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 */

void *__fastcall imp_WdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxObject *v4; // rcx
  __int64 v5; // r8
  const void *_a2; // rax
  unsigned int v7; // edx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    v7 = *(_DWORD *)(v5 + 120);
    if ( v7 > 1 && v7 - 7 > 1 )
      return *(void **)(v5 + 168);
    WPP_IFR_SF_ql(
      m_Globals,
      2u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      *(_DWORD *)(v5 + 120));
  }
  else
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v4);
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
