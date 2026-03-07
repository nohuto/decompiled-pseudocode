__int64 __fastcall imp_VfWdfUsbTargetDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFUSBDEVICE__ **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreate)(
           DriverGlobals,
           Device,
           Attributes,
           UsbDevice);
}
