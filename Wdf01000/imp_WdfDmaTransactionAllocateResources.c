/*
 * XREFs of imp_WdfDmaTransactionAllocateResources @ 0x1C0019740
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C001C9D4 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int DmaDirection,
        unsigned int RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v10; // dl
  __int64 v11; // rcx
  FxDmaPacketTransaction *v12; // r10
  unsigned __int64 _a2; // rax
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDmaPacketTransaction *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    _a2 = FxObject::GetObjectHandleUnchecked((FxObject *)v11);
    v14 = -1073741808;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xFu, 0x21u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2, -1073741808);
LABEL_11:
    FxVerifierDbgBreakPoint(m_Globals);
    return v14;
  }
  v15 = *(_DWORD *)(v11 + 376);
  if ( v15 > 8 || (v16 = 394, !_bittest(&v16, v15)) )
  {
    v14 = -1073741808;
    WPP_IFR_SF_qDd(m_Globals, v10, 0xFu, 0x22u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v15, 0xC0000010);
    goto LABEL_11;
  }
  if ( DmaDirection > 1 )
  {
    v14 = -1073741811;
    WPP_IFR_SF_qDd(
      m_Globals,
      v10,
      0xFu,
      0x23u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      DmaDirection,
      0xC000000D);
    goto LABEL_11;
  }
  if ( !EvtReserveDmaFunction )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  return FxDmaPacketTransaction::ReserveAdapter(
           v12,
           RequiredMapRegisters,
           (_WDF_DMA_DIRECTION)DmaDirection,
           EvtReserveDmaFunction,
           EvtReserveDmaContext);
}
