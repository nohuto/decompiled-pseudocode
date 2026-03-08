/*
 * XREFs of imp_WdfDeviceInitAssignSDDLString @ 0x1C002EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

int __fastcall imp_WdfDeviceInitAssignSDDLString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  int result; // eax
  FxString *Sddl; // rcx
  FxString *v8; // rax
  FxString *v9; // rax
  FxPoolTypeOrPoolFlags v10; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  result = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( !SDDLString )
    {
      if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
        return -1073741808;
      Sddl = DeviceInit->Security.Sddl;
      if ( Sddl )
      {
        Sddl->Release(Sddl, 0LL, 528, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
        DeviceInit->Security.Sddl = 0LL;
      }
      return 0;
    }
    result = FxValidateUnicodeString(v5, SDDLString);
    if ( result < 0 )
      return result;
    v8 = DeviceInit->Security.Sddl;
    if ( !v8 )
    {
      *(_QWORD *)&v10.UsePoolType = 0LL;
      v10.u.PoolFlags = 64LL;
      v9 = (FxString *)FxObjectHandleAllocCommon(v5, &v10, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
      if ( v9 )
      {
        FxString::FxString(v9, v5);
        DeviceInit->Security.Sddl = v8;
        if ( v8 )
          return FxDuplicateUnicodeString(v8->m_Globals, SDDLString, &v8->m_UnicodeString);
      }
      else
      {
        DeviceInit->Security.Sddl = 0LL;
      }
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x10u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return -1073741670;
    }
    return FxDuplicateUnicodeString(v8->m_Globals, SDDLString, &v8->m_UnicodeString);
  }
  return result;
}
