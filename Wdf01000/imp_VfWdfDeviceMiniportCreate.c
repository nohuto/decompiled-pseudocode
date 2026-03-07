__int64 __fastcall imp_VfWdfDeviceMiniportCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDeviceObject,
        _DEVICE_OBJECT *Pdo,
        WDFDEVICE__ **Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, _WDF_OBJECT_ATTRIBUTES *, _DEVICE_OBJECT *, _DEVICE_OBJECT *, _DEVICE_OBJECT *, WDFDEVICE__ **))WdfVersion.Functions.pfnWdfDeviceMiniportCreate)(
           DriverGlobals,
           Driver,
           Attributes,
           DeviceObject,
           AttachedDeviceObject,
           Pdo,
           Device);
}
