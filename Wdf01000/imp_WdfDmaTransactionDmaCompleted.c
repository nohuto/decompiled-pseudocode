unsigned __int8 __fastcall imp_WdfDmaTransactionDmaCompleted(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        int *pStatus)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  if ( !pStatus )
    FxVerifierNullBugCheck(pDmaTrans->m_Globals, retaddr);
  return FxDmaTransactionBase::DmaCompleted(pDmaTrans, 0LL, pStatus, FxDmaCompletionTypeFull);
}
