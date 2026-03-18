/*
 * XREFs of PostWinlogonMessage @ 0x1C0086360
 * Callers:
 *     xxxDwmControl @ 0x1C00862F0 (xxxDwmControl.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013356C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PowerOffMonitor @ 0x1C0133C60 (PowerOffMonitor.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6100 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B66D0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C00C3CC0 (IsSetTimerCoalescingToleranceSupported.c)
 *     SetTimerCoalescingTolerance @ 0x1C00C3FBC (SetTimerCoalescingTolerance.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1C00C46A4 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00C5220 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1C00D02A8 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1C00D036C (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     WmsgpPostMessage @ 0x1C02BFD34 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v7, a2);
  if ( !v7 )
  {
    CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v7);
    return 0LL;
  }
  v6 = WmsgpPostMessage(v5, a1, v2);
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v7);
  if ( v6 >= 0 && a1 == 1027 )
  {
    TraceLoggingLockMessagePosted();
    CInputGlobals::UpdateGlobalTickCount(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1), 1LL);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
      SetTimerCoalescingTolerance(3LL);
  }
  return (unsigned int)v6;
}
