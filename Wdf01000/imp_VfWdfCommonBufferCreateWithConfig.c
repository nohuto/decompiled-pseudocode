__int64 __fastcall imp_VfWdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBuffer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, unsigned __int64, _WDF_COMMON_BUFFER_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFCOMMONBUFFER__ **))WdfVersion.Functions.pfnWdfCommonBufferCreateWithConfig)(
           DriverGlobals,
           DmaEnabler,
           Length,
           Config,
           Attributes,
           CommonBuffer);
}
