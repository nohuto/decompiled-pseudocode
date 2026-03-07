__int64 __fastcall imp_WdfDeviceRetrieveDeviceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF
  FxString *pString; // [rsp+68h] [rbp+20h] BYREF

  pDevice = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
    if ( pDevice->m_DeviceName.Buffer )
    {
      return (unsigned int)FxDuplicateUnicodeString(
                             pString->m_Globals,
                             &pDevice->m_DeviceName,
                             &pString->m_UnicodeString);
    }
    else
    {
      v7 = -1073741811;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741811);
    }
    return v7;
  }
  return result;
}
