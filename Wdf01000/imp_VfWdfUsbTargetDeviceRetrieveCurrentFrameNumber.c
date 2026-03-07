__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveCurrentFrameNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        unsigned int *CurrentFrameNumber)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveCurrentFrameNumber)(
           DriverGlobals,
           UsbDevice,
           CurrentFrameNumber);
}
