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
