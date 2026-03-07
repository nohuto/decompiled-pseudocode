unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetCurrentDmaTransferLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetCurrentDmaTransferLength(DriverGlobals, DmaTransaction);
}
