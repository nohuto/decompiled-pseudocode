__int64 __fastcall imp_VfWdfCxDeviceInitAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, _WDF_OBJECT_ATTRIBUTES *, void **))WdfVersion.Functions.pfnWdfCxDeviceInitAllocateContext)(
           DriverGlobals,
           DeviceInit,
           ContextAttributes,
           Context);
}
