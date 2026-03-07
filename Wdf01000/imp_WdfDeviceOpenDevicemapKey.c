__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v8; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v12; // r9
  _WDF_OBJECT_ATTRIBUTES *v13; // rsi
  FxRegKey *v14; // rax
  FxObject *v15; // rax
  FxRegKey *v16; // rdi
  FxDevice *v17; // rcx
  int v18; // esi
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v20; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDevice *pDevice; // [rsp+90h] [rbp+30h] BYREF

  pDevice = 0LL;
  keyHandle = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v8 = Key;
  m_Globals = pDevice->m_Globals;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  result = FxValidateUnicodeString(m_Globals, KeyName);
  if ( (int)result >= 0 )
  {
    if ( !KeyName->Length )
    {
      _a1 = -1073741811;
      v12 = 20;
LABEL_17:
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, v12, WPP_FxDeviceApi_cpp_Traceguids, _a1);
      return _a1;
    }
    _a1 = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( (_a1 & 0x80000000) != 0 )
    {
      FxVerifierDbgBreakPoint(m_Globals);
      return _a1;
    }
    v13 = KeyAttributes;
    result = FxValidateObjectAttributes(m_Globals, KeyAttributes, 1);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&v20.UsePoolType = 0LL;
    v20.u.PoolFlags = 64LL;
    v14 = (FxRegKey *)FxObjectHandleAllocCommon(m_Globals, &v20, 0x78uLL, 0, v13, 0, FxObjectTypeExternal);
    if ( !v14 || (FxRegKey::FxRegKey(v14, m_Globals), (v16 = (FxRegKey *)v15) == 0LL) )
    {
      _a1 = -1073741670;
      v12 = 21;
      goto LABEL_17;
    }
    v15->m_DeviceBase = pDevice;
    v18 = FxObject::Commit(v15, v13, (void **)&keyHandle, 0LL, 1u);
    if ( v18 < 0 || (v18 = FxDevice::OpenDevicemapKeyWorker(v17, m_Globals, KeyName, DesiredAccess, v16), v18 < 0) )
    {
      FxObject::ClearEvtCallbacks(v16);
      v16->DeleteObject(v16);
    }
    else
    {
      *v8 = keyHandle;
    }
    return (unsigned int)v18;
  }
  return result;
}
