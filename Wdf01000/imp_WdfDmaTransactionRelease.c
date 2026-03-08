/*
 * XREFs of imp_WdfDmaTransactionRelease @ 0x1C000C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C000CC8A (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 */

__int64 __fastcall imp_WdfDmaTransactionRelease(
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
  FxDmaTransactionBase::ReleaseForReuse(pDmaTrans, 0);
  return 0LL;
}
