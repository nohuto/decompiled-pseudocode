unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetFragmentLength(
           DriverGlobals,
           DmaEnabler,
           (_WDF_DMA_DIRECTION)DmaDirection);
}
