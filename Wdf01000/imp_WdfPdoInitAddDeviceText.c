__int64 __fastcall imp_WdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v12; // r9
  bool v13; // zf
  ULONG Tag; // ecx
  void *v15; // rax
  FX_POOL **v16; // rax
  FxDeviceText *v17; // rsi
  wchar_t *v18; // rax
  unsigned __int16 v19; // ax
  wchar_t *v20; // rax
  __m128i v21; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v8 = DeviceInit->DriverGlobals;
  v9 = DeviceInit->DriverGlobals;
  if ( !DeviceDescription )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( !DeviceLocation )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v8, DeviceDescription);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v8, DeviceLocation);
      _a1 = result;
      if ( (int)result >= 0 )
      {
        if ( DeviceInit->InitType != FxDeviceInitTypePdo )
        {
          _a1 = -1073741808;
          v12 = 65;
LABEL_23:
          WPP_IFR_SF_D(v8, 2u, 0x12u, v12, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
          return _a1;
        }
        v13 = v8->FxPoolTrackingOn == 0;
        Tag = v8->Tag;
        v21.m128i_i64[0] = 0LL;
        v21.m128i_i64[1] = 256LL;
        if ( v13 )
          v15 = 0LL;
        else
          v15 = retaddr;
        v16 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, &v21, 0x20uLL, Tag, v15);
        v17 = (FxDeviceText *)v16;
        if ( !v16 )
        {
          _a1 = -1073741670;
          v12 = 66;
          goto LABEL_23;
        }
        v16[1] = 0LL;
        v16[2] = 0LL;
        *v16 = 0LL;
        *((_DWORD *)v16 + 6) = LocaleId;
        v18 = FxDuplicateUnicodeStringToString(v8, DeviceDescription);
        v17->m_Description = v18;
        if ( v18 )
        {
          v20 = FxDuplicateUnicodeStringToString(v8, DeviceLocation);
          v17->m_LocationInformation = v20;
          if ( v20 )
          {
            *DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY *)v17;
            DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY **)v17;
            return _a1;
          }
          v19 = 68;
        }
        else
        {
          v19 = 67;
        }
        _a1 = -1073741670;
        WPP_IFR_SF_D(v8, 2u, 0x12u, v19, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC000009A);
        FxDeviceText::`scalar deleting destructor'(v17);
        return _a1;
      }
    }
  }
  return result;
}
