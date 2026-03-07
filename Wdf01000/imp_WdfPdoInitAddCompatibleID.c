__int64 __fastcall imp_WdfPdoInitAddCompatibleID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *CompatibleID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  unsigned int v8; // edi
  FxString *v9; // rax
  __int64 v10; // rax
  FxObject *v11; // rsi
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !CompatibleID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, CompatibleID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        v8 = -1073741808;
        WPP_IFR_SF_D(v5, 2u, 0x12u, 0x3Du, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return v8;
      }
      *(_QWORD *)&v12.UsePoolType = 0LL;
      v12.u.PoolFlags = 64LL;
      v9 = (FxString *)FxObjectHandleAllocCommon(v5, &v12, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v9 )
      {
        FxString::FxString(v9, v5);
        v11 = (FxObject *)v10;
        if ( v10 )
        {
          v8 = FxDuplicateUnicodeString(
                 *(_FX_DRIVER_GLOBALS **)(v10 + 16),
                 CompatibleID,
                 (_UNICODE_STRING *)(v10 + 104));
          if ( (v8 & 0x80000000) == 0 )
            v8 = FxCollectionInternal::Add(&DeviceInit->Pdo.CompatibleIDs, v5, v11) == 0 ? 0xC0000001 : 0;
          v11->Release(v11, 0LL, 0, 0LL);
          return v8;
        }
      }
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x3Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
  }
  return result;
}
