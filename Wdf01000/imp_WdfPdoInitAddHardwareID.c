__int64 __fastcall imp_WdfPdoInitAddHardwareID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *HardwareID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  __int64 v11; // rax
  FxObject *v12; // rsi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !HardwareID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v5, HardwareID);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypePdo )
      {
        *(_QWORD *)&v13.UsePoolType = 0LL;
        v13.u.PoolFlags = 64LL;
        v10 = (FxString *)FxObjectHandleAllocCommon(v5, &v13, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v10 )
        {
          FxString::FxString(v10, v5);
          v12 = (FxObject *)v11;
          if ( v11 )
          {
            _a1 = FxDuplicateUnicodeString(
                    *(_FX_DRIVER_GLOBALS **)(v11 + 16),
                    HardwareID,
                    (_UNICODE_STRING *)(v11 + 104));
            if ( (_a1 & 0x80000000) == 0 )
              _a1 = FxCollectionInternal::Add(&DeviceInit->Pdo.HardwareIDs, v5, v12) == 0 ? 0xC0000001 : 0;
            v12->Release(v12, 0LL, 0, 0LL);
            return _a1;
          }
        }
        _a1 = -1073741670;
        v9 = 60;
      }
      else
      {
        _a1 = -1073741808;
        v9 = 59;
      }
      WPP_IFR_SF_D(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      return _a1;
    }
  }
  return result;
}
