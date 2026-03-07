void __fastcall imp_VfWdfDmaTransactionSetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 MaximumLength)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetMaximumLength(DriverGlobals, DmaTransaction, MaximumLength);
}
