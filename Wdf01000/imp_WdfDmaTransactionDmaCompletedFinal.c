/*
 * XREFs of imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C000BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C001F684 (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfDmaTransactionDmaCompletedFinal(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 FinalTransferredLength,
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
  return FxDmaTransactionBase::DmaCompleted(pDmaTrans, FinalTransferredLength, pStatus, FxDmaCompletionTypeAbort);
}
