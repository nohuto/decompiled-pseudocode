__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, void *, unsigned __int16 *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveConfigDescriptor)(
           DriverGlobals,
           UsbDevice,
           ConfigDescriptor,
           ConfigDescriptorLength);
}
