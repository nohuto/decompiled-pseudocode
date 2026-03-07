__int64 __fastcall imp_VfWdfUsbTargetDeviceGetNumInterfaces(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceGetNumInterfaces)(
           DriverGlobals,
           UsbDevice);
}
