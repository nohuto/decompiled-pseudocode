/*
 * XREFs of imp_WdfDmaTransactionSetChannelConfigurationCallback @ 0x1C0019F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 */

void __fastcall imp_WdfDmaTransactionSetChannelConfigurationCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *ConfigureRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64),
        FxObject *ConfigureContext)
{
  FxDmaTransactionBase *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_DMA_PROFILE _a2; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  v7 = pDmaTrans;
  m_Globals = pDmaTrans->m_Globals;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( (unsigned int)(_a2 - 7) <= 1 )
  {
    pDmaTrans[1].m_SpinLock.m_Lock = (unsigned __int64)ConfigureRoutine;
    v7[1].m_ParentObject = ConfigureContext;
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Bu, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
