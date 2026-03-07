__int64 __fastcall imp_VfWdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DMA_ENABLER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFDMAENABLER__ **))WdfVersion.Functions.pfnWdfDmaEnablerCreate)(
           DriverGlobals,
           Device,
           Config,
           Attributes,
           DmaEnablerHandle);
}
