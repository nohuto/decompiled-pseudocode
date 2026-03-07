unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetBytesTransferred(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetBytesTransferred(DriverGlobals, DmaTransaction);
}
