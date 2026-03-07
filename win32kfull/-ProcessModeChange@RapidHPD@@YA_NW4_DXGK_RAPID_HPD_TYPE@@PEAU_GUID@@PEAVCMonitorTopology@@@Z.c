char __fastcall RapidHPD::ProcessModeChange(CRapidHpdInfo *a1, const struct _GUID *a2, struct CMonitorTopology *a3)
{
  char v3; // di
  int v4; // ebx
  struct CMonitorTopology *v5; // rbp
  int v7; // esi
  int v9; // edx
  int v10; // ecx
  CRapidHpdInfo *v11; // rax
  struct _GUID *v12; // rax

  v3 = 1;
  v4 = 0;
  v5 = a3;
  v7 = (int)a1;
  if ( !byte_1C0361360 )
  {
    FastGetProfileDword(0LL, 2LL, L"RapidHpdTimeoutMs");
    byte_1C0361360 = 1;
  }
  if ( !v7 )
    return 0;
  if ( v7 == 1 )
  {
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      CRapidHpdInfo::ResetTimer(a1);
      v10 = 4;
    }
    else
    {
      v11 = (CRapidHpdInfo *)Win32AllocPoolZInit(48LL, 1920168789LL);
      if ( v11 )
        v12 = (struct _GUID *)CRapidHpdInfo::CRapidHpdInfo(v11, v5, a2);
      else
        v12 = 0LL;
      CRapidHpdInfo::s_pRapidHpdInfo = v12;
      v10 = 2;
    }
  }
  else
  {
    if ( v7 != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 167LL);
    if ( !CRapidHpdInfo::s_pRapidHpdInfo )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v3 = 0;
      }
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 10;
        LOBYTE(v9) = v3;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          (_DWORD)a3,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          23,
          10,
          (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids);
      }
      return 0;
    }
    ++*(_DWORD *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2;
    v10 = 3;
  }
  LOBYTE(v4) = v10 == 2;
  InputTraceLogging::DesktopRecalc::RapidHpdModeChange(v4);
  return 1;
}
