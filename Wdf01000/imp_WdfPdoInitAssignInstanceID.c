int __fastcall imp_WdfPdoInitAssignInstanceID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *InstanceID)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  unsigned int _a1; // ebx
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  FxString *v11; // rax
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !InstanceID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, InstanceID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v9 = 57;
LABEL_9:
        WPP_IFR_SF_D(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      v10 = DeviceInit->Pdo.InstanceID;
      if ( v10 )
        return FxDuplicateUnicodeString(v10->m_Globals, InstanceID, &v10->m_UnicodeString);
      *(_QWORD *)&v12.UsePoolType = 0LL;
      v12.u.PoolFlags = 64LL;
      v11 = (FxString *)FxObjectHandleAllocCommon(v5, &v12, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v11 )
      {
        FxString::FxString(v11, v5);
        DeviceInit->Pdo.InstanceID = v10;
        if ( v10 )
          return FxDuplicateUnicodeString(v10->m_Globals, InstanceID, &v10->m_UnicodeString);
      }
      else
      {
        DeviceInit->Pdo.InstanceID = 0LL;
      }
      _a1 = -1073741670;
      v9 = 58;
      goto LABEL_9;
    }
  }
  return result;
}
