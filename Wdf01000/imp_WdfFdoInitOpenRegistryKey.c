int __fastcall imp_WdfFdoInitOpenRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceInstanceKeyType,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  int result; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  if ( DeviceInit->InitType )
  {
    WPP_IFR_SF_D(v9, 2u, 0x12u, 0x27u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
  else
  {
    result = FxValidateObjectAttributes(v9, KeyAttributes, 0);
    if ( result >= 0 )
      return FxDevice::_OpenKey(v9, DeviceInit, 0LL, DeviceInstanceKeyType, DesiredAccess, KeyAttributes, Key);
  }
  return result;
}
