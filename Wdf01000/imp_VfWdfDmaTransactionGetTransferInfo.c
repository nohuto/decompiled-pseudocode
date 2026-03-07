void __fastcall imp_VfWdfDmaTransactionGetTransferInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  WdfVersion.Functions.pfnWdfDmaTransactionGetTransferInfo(
    DriverGlobals,
    DmaTransaction,
    MapRegisterCount,
    ScatterGatherElementCount);
}
