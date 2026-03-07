__int64 __fastcall imp_VfWdfDeviceQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int64 BufferLength,
        void *PropertyBuffer,
        unsigned int *RequiredSize,
        unsigned int *Type)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_PROPERTY_DATA *, __int64, void *, unsigned int *, unsigned int *))WdfVersion.Functions.pfnWdfDeviceQueryPropertyEx)(
           DriverGlobals,
           Device,
           DeviceProperty,
           BufferLength,
           PropertyBuffer,
           RequiredSize,
           Type);
}
