/*
 * XREFs of ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C011E624
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@W4StartRecalcOption@@@Z @ 0x1C015CB60 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0243E0C (--0CRapidHpdInfo@@AEAA@PEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 *     ?RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z @ 0x1C0243FD4 (-RapidHpdModeChange@DesktopRecalc@InputTraceLogging@@SAXH@Z.c)
 *     ?ResetTimer@CRapidHpdInfo@@AEAAXXZ @ 0x1C0244068 (-ResetTimer@CRapidHpdInfo@@AEAAXXZ.c)
 */

char __fastcall RapidHPD::ProcessModeChange(CRapidHpdInfo *a1, const struct _GUID *a2, struct CMonitorTopology *a3)
{
  int v3; // ebx
  struct CMonitorTopology *v4; // rbp
  int v6; // esi
  char v7; // di
  int v8; // edx
  int v10; // ecx
  CRapidHpdInfo *v11; // rax
  struct CRapidHpdInfo *v12; // rax

  v3 = 0;
  v4 = a3;
  v6 = (int)a1;
  v7 = 1;
  if ( !byte_1C0336268 )
  {
    FastGetProfileDword(0LL, 2LL, L"RapidHpdTimeoutMs", 5000LL, &CRapidHpdInfo::s_timeoutMs);
    byte_1C0336268 = 1;
  }
  if ( !v6 )
    return 0;
  if ( v6 == 1 )
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
        v12 = CRapidHpdInfo::CRapidHpdInfo(v11, v4, a2);
      else
        v12 = 0LL;
      CRapidHpdInfo::s_pRapidHpdInfo = v12;
      v10 = 2;
    }
  }
  else
  {
    if ( v6 != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( !CRapidHpdInfo::s_pRapidHpdInfo )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 10;
        LOBYTE(v8) = v7;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          (_DWORD)a3,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          23,
          10,
          (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids);
      }
      return 0;
    }
    ++*((_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo + 5);
    v10 = 3;
  }
  LOBYTE(v3) = v10 == 2;
  InputTraceLogging::DesktopRecalc::RapidHpdModeChange(v3);
  return 1;
}
