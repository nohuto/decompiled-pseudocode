void __fastcall imp_VfWdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetRequestAttributes(DriverGlobals, CxDeviceInit, RequestAttributes);
}
