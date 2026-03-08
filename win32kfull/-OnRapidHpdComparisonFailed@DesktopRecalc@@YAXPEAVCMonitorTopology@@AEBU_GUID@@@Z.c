/*
 * XREFs of ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0228DAC
 * Callers:
 *     ?OnTimer@RapidHPD@@YAXXZ @ 0x1C00E0290 (-OnTimer@RapidHPD@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00F954C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 */

void __fastcall DesktopRecalc::OnRapidHpdComparisonFailed(
        DesktopRecalc *this,
        struct CMonitorTopology *a2,
        const struct _GUID *a3,
        const struct _GUID *a4)
{
  struct CMonitorTopology *v4; // rbx

  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      99,
      4,
      23,
      99,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  DesktopRecalc::StartRecalc(*(DesktopRecalc **)(grpdeskRitInput + 40LL), this, v4, a4);
}
