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
