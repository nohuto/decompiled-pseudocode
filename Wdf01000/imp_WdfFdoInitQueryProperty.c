int __fastcall imp_WdfFdoInitQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  int result; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( result >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_D(v9, 2u, 0x12u, 0x29u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
      return -1073741808;
    }
    else
    {
      return FxDevice::_QueryProperty(
               v9,
               DeviceInit,
               0LL,
               0LL,
               DeviceProperty,
               BufferLength,
               PropertyBuffer,
               ResultLength);
    }
  }
  return result;
}
