__int64 __fastcall imp_VfWdfDeviceGetDevicePowerState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetDevicePowerState)(
           DriverGlobals,
           Device);
}
