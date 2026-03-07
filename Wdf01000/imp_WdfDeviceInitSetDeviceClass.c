void __fastcall imp_WdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( !DeviceClassGuid )
    FxVerifierNullBugCheck(DeviceInit->DriverGlobals, retaddr);
  DeviceInit->Security.DeviceClassSet = 1;
  DeviceInit->Security.DeviceClass = *DeviceClassGuid;
}
