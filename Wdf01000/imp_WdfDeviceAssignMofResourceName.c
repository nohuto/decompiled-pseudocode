__int64 __fastcall imp_WdfDeviceAssignMofResourceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *MofResourceName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int _a2; // edi
  unsigned __int16 v8; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !MofResourceName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, MofResourceName);
    if ( (int)result >= 0 )
    {
      if ( pDevice->m_MofResourceName.Buffer )
      {
        _a2 = -1073741808;
        v8 = 14;
      }
      else
      {
        _a2 = FxDuplicateUnicodeString(m_Globals, MofResourceName, &pDevice->m_MofResourceName);
        if ( _a2 >= 0 )
          return (unsigned int)_a2;
        v8 = 15;
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceApiKm_cpp_Traceguids, Device, _a2);
      return (unsigned int)_a2;
    }
  }
  return result;
}
