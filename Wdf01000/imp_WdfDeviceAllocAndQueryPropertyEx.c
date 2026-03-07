int __fastcall imp_WdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v11; // edi
  int result; // eax
  WDFMEMORY__ **v13; // rdi
  unsigned int *v14; // rsi
  _WDF_OBJECT_ATTRIBUTES *v15; // rbp
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v9, 0xCu, 0x39u, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v11;
  }
  v11 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v11 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v11;
  }
  if ( m_Globals->FxVerifierOn )
    VfCheckNxPoolType((unsigned int)PoolType, retaddr, m_Globals->Tag);
  v13 = PropertyMemory;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v14 = Type;
  if ( !Type )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v15 = PropertyMemoryAttributes;
  *PropertyMemory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, v15, 0);
  if ( result >= 0 )
    return FxDevice::_AllocAndQueryPropertyEx(m_Globals, 0LL, pDevice, DeviceProperty, _a1, PoolType, v15, v13, v14);
  return result;
}
