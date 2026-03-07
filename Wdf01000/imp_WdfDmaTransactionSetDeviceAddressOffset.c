void __fastcall imp_WdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int Offset)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_DMA_PROFILE _a2; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  _a2 = pDmaTrans->m_DmaEnabler->m_Profile;
  if ( (unsigned int)(_a2 - 7) <= 1 )
  {
    HIDWORD(pDmaTrans[1].m_Globals) = Offset;
  }
  else
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
