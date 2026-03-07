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
