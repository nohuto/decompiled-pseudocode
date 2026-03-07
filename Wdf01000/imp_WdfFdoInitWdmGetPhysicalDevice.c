_DEVICE_OBJECT *__fastcall imp_WdfFdoInitWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( DeviceInit->InitType == FxDeviceInitTypeFdo )
    return DeviceInit->Fdo.PhysicalDevice;
  WPP_IFR_SF_(DeviceInit->DriverGlobals, 2u, 0x12u, 0x26u, WPP_FxDeviceInitApi_cpp_Traceguids);
  return 0LL;
}
