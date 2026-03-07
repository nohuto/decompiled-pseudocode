__int64 __fastcall imp_WdfDriverOpenPersistentStateRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v5; // r14
  _FX_DRIVER_GLOBALS *v6; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  FxRegKey *v12; // rax
  FxObject *v13; // rax
  FxObject *v14; // rbx
  int v15; // esi
  signed int _a1; // eax
  void *hKey; // [rsp+40h] [rbp-20h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-18h] BYREF
  FxPoolTypeOrPoolFlags v19; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDriver *pDriver; // [rsp+90h] [rbp+30h] BYREF

  v5 = Key;
  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDriver = 0LL;
  hKey = 0LL;
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Key )
    FxVerifierNullBugCheck(v10, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v6, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v6, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      *(_QWORD *)&v19.UsePoolType = 0LL;
      v19.u.PoolFlags = 64LL;
      v12 = (FxRegKey *)FxObjectHandleAllocCommon(v6, &v19, 0x78uLL, 0, KeyAttributes, 0, FxObjectTypeExternal);
      if ( v12 )
      {
        FxRegKey::FxRegKey(v12, v6);
        v14 = v13;
        if ( v13 )
        {
          v15 = FxObject::Commit(v13, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
          if ( v15 >= 0 )
          {
            _a1 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 1LL, DesiredAccess, 0LL, &hKey);
            v15 = _a1;
            if ( _a1 >= 0 )
            {
              *(_QWORD *)&v14[1].m_Type = hKey;
              *v5 = keyHandle;
              return (unsigned int)v15;
            }
            WPP_IFR_SF_D(v6, 2u, 6u, 0xCu, WPP_FxDriverApiKm_cpp_Traceguids, _a1);
          }
          FxObject::ClearEvtCallbacks(v14);
          ((void (*)(void))v14->DeleteObject)();
          return (unsigned int)v15;
        }
      }
      return 3221225626LL;
    }
  }
  return result;
}
