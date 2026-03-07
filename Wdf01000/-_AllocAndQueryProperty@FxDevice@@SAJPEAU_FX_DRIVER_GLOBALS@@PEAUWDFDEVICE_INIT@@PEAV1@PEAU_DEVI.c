__int64 __fastcall FxDevice::_AllocAndQueryProperty(
        _FX_DRIVER_GLOBALS *Globals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  NTSTATUS _a2; // eax
  unsigned int v13; // edi
  signed int _a1; // eax
  FxMemoryObject *v15; // rsi
  void *v16; // rax
  NTSTATUS v17; // eax
  signed int v18; // eax
  unsigned int length; // [rsp+40h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+48h] [rbp-20h] BYREF

  pMemory = 0LL;
  length = 0;
  _a2 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, 0, 0LL, &length);
  v13 = _a2;
  if ( _a2 == -1073741789 )
  {
    _a1 = FxMemoryObject::_Create(Globals, PropertyMemoryAttributes, PoolType, Globals->Tag, length, &pMemory);
    v13 = _a1;
    if ( _a1 >= 0 )
    {
      v15 = pMemory;
      v16 = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
      v17 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, length, v16, &length);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v18 = FxObject::Commit(v15, PropertyMemoryAttributes, (void **)PropertyMemory, 0LL, 1u);
        v13 = v18;
        if ( v18 >= 0 )
          return v13;
        WPP_IFR_SF_D(Globals, 2u, 0x12u, 0x12u, WPP_FxDevice_cpp_Traceguids, v18);
      }
      else
      {
        WPP_IFR_SF_DDd(Globals, length, 0x12u, 0x11u, WPP_FxDevice_cpp_Traceguids, length, DeviceProperty, v17);
      }
      v15->DeleteObject(v15);
      return v13;
    }
    WPP_IFR_SF_D(Globals, 2u, 0x12u, 0x10u, WPP_FxDevice_cpp_Traceguids, _a1);
  }
  else
  {
    WPP_IFR_SF_dd(Globals, 2u, 0x12u, 0xFu, WPP_FxDevice_cpp_Traceguids, DeviceProperty, _a2);
  }
  return v13;
}
