bool __fastcall imp_WdfDriverIsVersionAvailable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        _WDF_DRIVER_VERSION_AVAILABLE_PARAMS *VersionAvailableParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // dl
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDriver *pDriver; // [rsp+60h] [rbp+8h] BYREF

  pDriver = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  m_Globals = pDriver->m_Globals;
  if ( !VersionAvailableParams )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
    return 0;
  if ( VersionAvailableParams->Size != 12 )
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      v5,
      0x11u,
      0xFu,
      WPP_FxDriverApi_cpp_Traceguids,
      VersionAvailableParams->Size,
      12,
      -1073741820);
    return 0;
  }
  WPP_IFR_SF_dddd(
    m_Globals,
    4u,
    0x11u,
    0x10u,
    WPP_FxDriverApi_cpp_Traceguids,
    1,
    33,
    VersionAvailableParams->MajorVersion,
    VersionAvailableParams->MinorVersion);
  if ( VersionAvailableParams->MajorVersion != 1 )
    return 0;
  return VersionAvailableParams->MinorVersion <= 0x21;
}
