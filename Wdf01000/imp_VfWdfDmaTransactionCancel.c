/*
 * XREFs of imp_VfWdfDmaTransactionCancel @ 0x1C00B44F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionCancel(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *))WdfVersion.Functions.pfnWdfDmaTransactionCancel)(
           DriverGlobals,
           DmaTransaction);
}
