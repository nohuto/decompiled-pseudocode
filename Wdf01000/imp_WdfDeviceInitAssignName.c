int __fastcall imp_WdfDeviceInitAssignName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceName)
{
  int result; // eax
  FxString *v6; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( DeviceName )
    {
      result = FxValidateUnicodeString(DeviceInit->DriverGlobals, DeviceName);
      if ( result >= 0 )
        return WDFDEVICE_INIT::AssignName(DeviceInit, DeviceInit->DriverGlobals, DeviceName);
    }
    else
    {
      v6 = DeviceInit->DeviceName;
      if ( v6 )
      {
        v6->Release(v6, 0LL, 232, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->DeviceName = 0LL;
      }
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
        DeviceInit->Characteristics |= 0x80u;
      return 0;
    }
  }
  return result;
}
