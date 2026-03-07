__int64 __fastcall imp_VfWdfDeviceAssignMofResourceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *MofResourceName)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfDeviceAssignMofResourceName)(
           DriverGlobals,
           Device,
           MofResourceName);
}
