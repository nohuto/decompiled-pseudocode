__int64 __fastcall imp_VfWdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 DmaDirection,
        __int64 RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, __int64, __int64, void (__fastcall *)(WDFDMATRANSACTION__ *, void *), void *))WdfVersion.Functions.pfnWdfDmaTransactionAllocateResources)(
           DriverGlobals,
           DmaTransaction,
           DmaDirection,
           RequiredMapRegisters,
           EvtReserveDmaFunction,
           EvtReserveDmaContext);
}
