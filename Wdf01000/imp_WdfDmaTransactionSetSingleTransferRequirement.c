void __fastcall imp_WdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 RequireSingleTransfer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxObject *v6; // rcx
  __int64 v7; // r8
  const void *_a2; // rax
  int v9; // ecx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 2u) >= 0 )
  {
    if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
      WPP_IFR_SF_qq(m_Globals, 2u, 0xFu, 0x19u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, _a2);
LABEL_4:
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
    v9 = *(_DWORD *)(v7 + 120);
    if ( (unsigned int)(v9 - 1) > 1 && v9 != 7 )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Au, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v9);
      goto LABEL_4;
    }
    *(_BYTE *)(v7 + 248) = RequireSingleTransfer;
  }
}
