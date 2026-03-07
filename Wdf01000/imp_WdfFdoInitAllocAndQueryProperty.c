int __fastcall imp_WdfFdoInitAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  int result; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  v10 = DeviceInit->DriverGlobals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(v10, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( result >= 0 )
  {
    if ( v9->FxVerifierOn )
      VfCheckNxPoolType((unsigned int)PoolType, retaddr, v9->Tag);
    result = FxValidateObjectAttributes(v9, PropertyMemoryAttributes, 0);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType )
      {
        WPP_IFR_SF_D(v9, 2u, 0x12u, 0x2Au, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return -1073741808;
      }
      else
      {
        return FxDevice::_AllocAndQueryProperty(
                 v9,
                 DeviceInit,
                 0LL,
                 0LL,
                 DeviceProperty,
                 PoolType,
                 PropertyMemoryAttributes,
                 PropertyMemory);
      }
    }
  }
  return result;
}
