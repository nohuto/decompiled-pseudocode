__int64 __fastcall imp_VfWdfUsbTargetDeviceQueryUsbCapability(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        const _GUID *CapabilityType,
        __int64 CapabilityBufferLength,
        void *CapabilityBuffer,
        unsigned int *ResultLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, const _GUID *, __int64, void *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetDeviceQueryUsbCapability)(
           DriverGlobals,
           UsbDevice,
           CapabilityType,
           CapabilityBufferLength,
           CapabilityBuffer,
           ResultLength);
}
