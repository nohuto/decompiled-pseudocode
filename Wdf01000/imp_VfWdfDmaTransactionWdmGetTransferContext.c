void *__fastcall imp_VfWdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionWdmGetTransferContext(DriverGlobals, DmaTransaction);
}
