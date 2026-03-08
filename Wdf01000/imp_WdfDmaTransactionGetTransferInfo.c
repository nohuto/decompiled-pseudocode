/*
 * XREFs of imp_WdfDmaTransactionGetTransferInfo @ 0x1C0019BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C001F960 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 */

void __fastcall imp_WdfDmaTransactionGetTransferInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  FxDmaTransactionBase *pDmaTrans; // [rsp+30h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  FxDmaTransactionBase::GetTransferInfo(pDmaTrans, MapRegisterCount, ScatterGatherElementCount);
}
