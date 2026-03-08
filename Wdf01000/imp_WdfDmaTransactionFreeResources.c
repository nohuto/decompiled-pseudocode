/*
 * XREFs of imp_WdfDmaTransactionFreeResources @ 0x1C0019A40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C001C854 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDmaEnabler *m_DmaEnabler; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int m_Profile; // eax
  int v6; // edx
  FxObject *v7; // rcx
  FxDmaPacketTransaction *v8; // r8
  const void *_a2; // rax
  FxDmaPacketTransaction *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_DmaEnabler = pDmaTrans->m_DmaEnabler;
  m_Globals = pDmaTrans->m_Globals;
  m_Profile = m_DmaEnabler->m_Profile;
  if ( m_Profile <= 8 && (v6 = 394, _bittest(&v6, m_Profile)) )
  {
    if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    {
      FxDmaPacketTransaction::ReleaseAdapter(v8);
      return;
    }
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v7);
    WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x25u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x24u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, m_Profile);
  }
  FxVerifierDbgBreakPoint(m_Globals);
}
