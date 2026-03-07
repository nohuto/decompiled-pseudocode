void __fastcall imp_VfWdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 RequireSingleTransfer)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetSingleTransferRequirement(
    DriverGlobals,
    DmaTransaction,
    RequireSingleTransfer);
}
