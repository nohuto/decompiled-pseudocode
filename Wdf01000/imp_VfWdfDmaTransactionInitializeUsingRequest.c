/*
 * XREFs of imp_VfWdfDmaTransactionInitializeUsingRequest @ 0x1C00B46F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, WDFREQUEST__ *, _QWORD, _WDF_DMA_DIRECTION))WdfVersion.Functions.pfnWdfDmaTransactionInitializeUsingRequest)(
           DriverGlobals,
           DmaTransaction,
           Request,
           EvtProgramDmaFunction,
           DmaDirection);
}
