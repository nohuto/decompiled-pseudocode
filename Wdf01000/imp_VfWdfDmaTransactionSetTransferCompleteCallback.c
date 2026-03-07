void __fastcall imp_VfWdfDmaTransactionSetTransferCompleteCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void (__fastcall *DmaCompletionRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, DMA_COMPLETION_STATUS),
        void *DmaCompletionContext)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetTransferCompleteCallback(
    DriverGlobals,
    DmaTransaction,
    DmaCompletionRoutine,
    DmaCompletionContext);
}
