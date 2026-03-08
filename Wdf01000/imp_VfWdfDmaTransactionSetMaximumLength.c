/*
 * XREFs of imp_VfWdfDmaTransactionSetMaximumLength @ 0x1C00B47A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 MaximumLength)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetMaximumLength(DriverGlobals, DmaTransaction, MaximumLength);
}
