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
