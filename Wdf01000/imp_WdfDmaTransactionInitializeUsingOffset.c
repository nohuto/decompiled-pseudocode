__int64 __fastcall imp_WdfDmaTransactionInitializeUsingOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned __int64 Length)
{
  return imp_WdfDmaTransactionInitialize(
           DriverGlobals,
           DmaTransaction,
           EvtProgramDmaFunction,
           DmaDirection,
           Mdl,
           (char *)Mdl->StartVa + Mdl->ByteOffset + Offset,
           Length);
}
