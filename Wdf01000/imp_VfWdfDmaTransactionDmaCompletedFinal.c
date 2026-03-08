/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompletedFinal @ 0x1C00B4550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompletedFinal(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 FinalTransferredLength,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, unsigned __int64, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompletedFinal)(
           DriverGlobals,
           DmaTransaction,
           FinalTransferredLength,
           Status);
}
