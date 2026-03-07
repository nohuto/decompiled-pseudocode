_DMA_ADAPTER *__fastcall imp_VfWdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerWdmGetDmaAdapter(DriverGlobals, DmaEnabler, DmaDirection);
}
