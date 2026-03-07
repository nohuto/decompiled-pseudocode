__int64 __fastcall imp_VfWdfPdoInitAssignRawDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _GUID *))WdfVersion.Functions.pfnWdfPdoInitAssignRawDevice)(
           DriverGlobals,
           DeviceInit,
           DeviceClassGuid);
}
