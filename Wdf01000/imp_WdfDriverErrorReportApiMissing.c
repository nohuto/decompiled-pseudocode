__int64 __fastcall imp_WdfDriverErrorReportApiMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const wchar_t *FrameworkExtensionName,
        unsigned int ApiIndex,
        unsigned __int8 DoesApiReturnNtstatus)
{
  unsigned __int64 v6; // r14
  unsigned __int8 v8; // dl
  const _GUID *v9; // r8
  const _GUID *v10; // r9
  const wchar_t *v11; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char *DriverName; // rax
  bool v14; // zf
  const char *v15; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  const char *v17; // rax
  _tlgWrapperByVal<8> *v19; // [rsp+20h] [rbp-41h]
  _tlgWrapperByVal<4> v20; // [rsp+60h] [rbp-1h] BYREF
  FxDriver *pDriver; // [rsp+68h] [rbp+7h] BYREF
  _tlgWrapSz<unsigned short> v22; // [rsp+70h] [rbp+Fh] BYREF
  _tlgWrapSz<char> v23; // [rsp+78h] [rbp+17h] BYREF
  _tlgWrapperByRef<16> v24; // [rsp+80h] [rbp+1Fh] BYREF
  _tlgWrapperByVal<8> v25; // [rsp+88h] [rbp+27h] BYREF
  _tlgWrapperByVal<4> v26; // [rsp+C0h] [rbp+5Fh] BYREF
  _tlgWrapperByVal<4> hProvider; // [rsp+D0h] [rbp+6Fh] BYREF

  pDriver = 0LL;
  v6 = ApiIndex;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  v11 = L"KMDF";
  if ( FrameworkExtensionName )
    v11 = FrameworkExtensionName;
  m_Globals = pDriver->m_Globals;
  DriverName = DriverGlobals->DriverName;
  v14 = DriverGlobals->DriverName[0] == 0;
  v15 = "(Unknown)";
  if ( !v14 )
    v15 = DriverName;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    v26.Value = v6;
    v22.Psz = v11;
    hProvider.Value = WdfBindInfo->Version.Minor;
    v20.Value = WdfBindInfo->Version.Major;
    v23.Psz = m_Globals->Public.DriverName;
    v24.Ptr = m_Globals->TelemetryContext;
    v25.Value = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (const _tlgProvider_t *)WdfBindInfo,
      (char *)&tlgEvent_1._tlgChannel,
      v9,
      v10,
      &v25,
      &v24,
      &v23,
      &v20,
      &hProvider,
      &v22,
      &v26);
  }
  v17 = "WDF";
  if ( FrameworkExtensionName )
    v17 = " ";
  WPP_IFR_SF_sSLSs(m_Globals, v8, (unsigned int)v9, (unsigned __int16)v10, (const _GUID *)v19, v15, v11, v6, v11, v17);
  if ( !DoesApiReturnNtstatus || m_Globals->FxVerifierOn )
    FxVerifierDriverReportedBugcheck(m_Globals, 0x10Du, 0x10uLL, (unsigned __int64)v15, (unsigned __int64)v11, v6);
  return 3221225594LL;
}
