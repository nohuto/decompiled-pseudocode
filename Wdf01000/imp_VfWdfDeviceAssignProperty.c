__int64 __fastcall imp_VfWdfDeviceAssignProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int64 Type,
        unsigned int Size,
        void *Data)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_PROPERTY_DATA *, __int64, unsigned int, void *))WdfVersion.Functions.pfnWdfDeviceAssignProperty)(
           DriverGlobals,
           Device,
           DeviceProperty,
           Type,
           Size,
           Data);
}
