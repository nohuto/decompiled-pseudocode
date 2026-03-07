__int64 __fastcall imp_WdfDeviceQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  unsigned int *v9; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *v11; // rdi
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int Property; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v9 = ResultLength;
  m_Globals = pDevice->m_Globals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = PropertyBuffer;
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( pDevice->m_Legacy )
    {
      v13 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x1Fu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    }
    else
    {
      Property = FxDevice::_QueryProperty(
                   m_Globals,
                   0LL,
                   pDevice,
                   0LL,
                   (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                   BufferLength,
                   v11,
                   v9);
      v13 = Property;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x20u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceProperty, Property);
    }
    return v13;
  }
  return result;
}
