/*
 * XREFs of PostWinlogonMessage @ 0x1C0090D50
 * Callers:
 *     xxxDwmControl @ 0x1C0090CE0 (xxxDwmControl.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01E4320 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E48F0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C000D418 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1C000D7E4 (-TraceLoggingLockMessagePosted@@YAXXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C000DBE0 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     WmsgpPostMessage @ 0x1C0301404 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v4 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v4 >= 0 && v2 == 1027 )
  {
    TraceLoggingLockMessagePosted(v3);
    CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
    {
      if ( qword_1C02D6AA0 )
        qword_1C02D6AA0(3LL);
    }
  }
  return (unsigned int)v4;
}
