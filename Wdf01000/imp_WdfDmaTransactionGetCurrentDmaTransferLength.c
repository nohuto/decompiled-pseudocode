/*
 * XREFs of imp_WdfDmaTransactionGetCurrentDmaTransferLength @ 0x1C000C040
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDmaTransactionGetCurrentDmaTransferLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  return pDmaTrans->m_CurrentFragmentLength;
}
