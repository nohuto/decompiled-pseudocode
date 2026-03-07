int __fastcall imp_WdfFdoInitQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength,
        unsigned int *Type)
{
  _FX_DRIVER_GLOBALS *v10; // rbx
  int v11; // edi
  int result; // eax
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v10 = DeviceInit->DriverGlobals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(
      v10,
      (unsigned __int8)DeviceInit,
      0xCu,
      0x2Fu,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      DeviceProperty->Size,
      24,
      -1073741820);
    return v11;
  }
  if ( !ResultLength )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( BufferLength )
  {
    if ( !PropertyBuffer )
      FxVerifierNullBugCheck(v10, retaddr);
  }
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( result >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      v11 = -1073741808;
      WPP_IFR_SF_D(v10, 2u, 0x12u, 0x30u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
      return v11;
    }
    return FxDevice::_QueryPropertyEx(
             v10,
             DeviceInit,
             0LL,
             DeviceProperty,
             _a1,
             BufferLength,
             PropertyBuffer,
             ResultLength,
             Type);
  }
  return result;
}
