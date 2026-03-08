/*
 * XREFs of imp_VfWdfDmaTransactionExecute @ 0x1C00B4590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, void *))WdfVersion.Functions.pfnWdfDmaTransactionExecute)(
           DriverGlobals,
           DmaTransaction,
           Context);
}
