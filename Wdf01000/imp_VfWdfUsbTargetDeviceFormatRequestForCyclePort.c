__int64 __fastcall imp_VfWdfUsbTargetDeviceFormatRequestForCyclePort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceFormatRequestForCyclePort)(
           DriverGlobals,
           UsbDevice,
           Request);
}
