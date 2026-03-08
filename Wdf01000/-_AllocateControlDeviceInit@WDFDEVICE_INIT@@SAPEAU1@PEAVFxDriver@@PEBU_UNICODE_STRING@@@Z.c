/*
 * XREFs of ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BD78
 * Callers:
 *     imp_WdfControlDeviceInitAllocate @ 0x1C002E9E0 (imp_WdfControlDeviceInitAllocate.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C002E9A8 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C003B840 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::_AllocateControlDeviceInit(
        FxDriver *Driver,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *v3; // rax
  FX_POOL **v6; // rax
  __int64 v7; // rax
  WDFDEVICE_INIT *v8; // rbx
  FxString *v9; // rax
  FxString *v10; // rax
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = Driver->m_Globals;
  v12.m128i_i64[0] = 0LL;
  v12.m128i_i64[1] = 64LL;
  v3 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v3 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v12, 0x3B0uLL, m_Globals->Tag, v3);
  if ( v6 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v6, Driver);
    v8 = (WDFDEVICE_INIT *)v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 56) |= 0x80u;
      v12.m128i_i64[0] = 0LL;
      v12.m128i_i64[1] = 64LL;
      *(_DWORD *)(v7 + 36) = 2;
      v9 = (FxString *)FxObjectHandleAllocCommon(
                         m_Globals,
                         (FxPoolTypeOrPoolFlags *)&v12,
                         0x78uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeExternal);
      if ( v9 )
        FxString::FxString(v9, m_Globals);
      else
        v10 = 0LL;
      v8->Security.Sddl = v10;
      if ( v10 )
      {
        if ( FxDuplicateUnicodeString(v10->m_Globals, SDDLString, &v10->m_UnicodeString) >= 0 )
          return v8;
      }
      else
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceInit_cpp_Traceguids, Driver, -1073741670);
      }
      WDFDEVICE_INIT::`scalar deleting destructor'(v8);
      return 0LL;
    }
  }
  WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceInit_cpp_Traceguids, Driver);
  return 0LL;
}
