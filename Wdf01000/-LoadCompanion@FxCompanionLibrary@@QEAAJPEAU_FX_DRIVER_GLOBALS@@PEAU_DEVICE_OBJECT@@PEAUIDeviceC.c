/*
 * XREFs of ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C002D3FC
 * Callers:
 *     ?Init@FxCompanionTarget@@AEAAJPEAVFxDevice@@@Z @ 0x1C002DF78 (-Init@FxCompanionTarget@@AEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C002CDF8 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002D96C (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002DA0C (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C002DAB0 (RtlStringCbCopyUnicodeString.c)
 *     GetNameFromPath @ 0x1C004E0BC (GetNameFromPath.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadCompanion(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *Pdo,
        IDeviceCompanionCallbacks *CallbackInterface,
        IDeviceCompanion **DeviceCompanion)
{
  FxDriver *Driver; // rcx
  char v9; // r15
  unsigned int v10; // ebx
  signed int _a1; // eax
  unsigned __int64 v12; // rbx
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  wchar_t *v16; // rsi
  signed int v17; // eax
  unsigned __int16 v18; // r9
  IDeviceCompanion **v19; // r12
  signed int v20; // eax
  _UNICODE_STRING svcNameUnicodeString; // [rsp+30h] [rbp-20h] BYREF
  __m128i v23; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 size; // [rsp+98h] [rbp+48h] BYREF
  _DEVICE_OBJECT *v26; // [rsp+A0h] [rbp+50h]

  v26 = Pdo;
  Driver = DriverGlobals->Driver;
  size = 0;
  v9 = 0;
  svcNameUnicodeString = 0LL;
  GetNameFromPath(&Driver->m_RegistryPath, &svcNameUnicodeString);
  if ( !svcNameUnicodeString.Length )
  {
    v10 = -1073741811;
    WPP_IFR_SF_(DriverGlobals, 2u, 0xCu, 0xFu, WPP_FxCompanionLibrary_cpp_Traceguids);
    return v10;
  }
  _a1 = RtlUShortAdd(svcNameUnicodeString.Length, 2u, &size);
  v10 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x10u, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    return v10;
  }
  v12 = size;
  Tag = DriverGlobals->Tag;
  v14 = retaddr;
  v23.m128i_i64[0] = 0LL;
  v23.m128i_i64[1] = 64LL;
  if ( !DriverGlobals->FxPoolTrackingOn )
    v14 = 0LL;
  v15 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v23, size, Tag, v14);
  v16 = (wchar_t *)v15;
  if ( !v15 )
  {
    v10 = -1073741670;
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x11u, WPP_FxCompanionLibrary_cpp_Traceguids, size);
    return v10;
  }
  v17 = RtlStringCbCopyUnicodeString((wchar_t *)v15, v12, &svcNameUnicodeString);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 18;
LABEL_11:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, v18, WPP_FxCompanionLibrary_cpp_Traceguids, v17);
    goto $exit_4;
  }
  v17 = FxCompanionLibrary::OpenCompanionLibraryInterface(this, DriverGlobals);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 19;
    goto LABEL_11;
  }
  v19 = DeviceCompanion;
  v20 = this->m_RdCompanionLibrary->LoadCompanion(
          this->m_RdCompanionLibrary,
          v26,
          v16,
          CallbackInterface,
          DeviceCompanion);
  v10 = v20;
  if ( v20 >= 0 )
  {
    WPP_IFR_SF_q(DriverGlobals, 4u, 0xCu, 0x15u, WPP_FxCompanionLibrary_cpp_Traceguids, v19);
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x14u, WPP_FxCompanionLibrary_cpp_Traceguids, v20);
    v9 = 1;
  }
$exit_4:
  FxPoolFree((FX_POOL_TRACKER *)v16);
  if ( v9 )
    FxCompanionLibrary::CloseCompanionLibraryInterface(this);
  return v10;
}
