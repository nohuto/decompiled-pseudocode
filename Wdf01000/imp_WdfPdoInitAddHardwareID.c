/*
 * XREFs of imp_WdfPdoInitAddHardwareID @ 0x1C0030A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C004F080 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

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
