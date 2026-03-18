/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C0211D1C (xxxDeferredDesktopRotation.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F2460 (xxxBroadcastDisplaySettingsChange.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@W4StartRecalcOption@@@Z @ 0x1C015CB60 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  bool WorkAreasFromShell; // r14
  struct tagWND *i; // rbx
  __int64 result; // rax
  int v13; // edx
  int v14; // r8d

  WorkAreasFromShell = xxxGetWorkAreasFromShell();
  if ( a2 )
  {
    DesktopRecalc::OnMonitorRectsChanged(*(_QWORD *)(a1 + 40), a2, a5, a6 != 0);
  }
  else
  {
    for ( i = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
          i;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 21LL) & 8) != 0 )
        SelectWindowRgn(i, 2LL, 0);
    }
  }
  result = xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 6996LL) != a3, a4);
  if ( WorkAreasFromShell )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        10,
        4,
        23,
        10,
        (__int64)&WPP_c7e965b19b733746190bb823e4964b27_Traceguids);
    }
    return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 47LL, 0LL, 1);
  }
  return result;
}
