/*
 * XREFs of imp_VfWdfDmaTransactionFreeResources @ 0x1C00B45B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  WdfVersion.Functions.pfnWdfDmaTransactionFreeResources(DriverGlobals, DmaTransaction);
}
