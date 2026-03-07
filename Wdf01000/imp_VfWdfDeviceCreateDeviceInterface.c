__int64 __fastcall imp_VfWdfDeviceCreateDeviceInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _GUID *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfDeviceCreateDeviceInterface)(
           DriverGlobals,
           Device,
           InterfaceClassGUID,
           ReferenceString);
}
