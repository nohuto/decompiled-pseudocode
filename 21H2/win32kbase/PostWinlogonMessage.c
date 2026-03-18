/*
 * XREFs of PostWinlogonMessage @ 0x1C0059750
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     xxxDwmControl @ 0x1C00596E0 (xxxDwmControl.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B9490 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B99B0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C007CFC0 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00C5360 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WmsgpPostMessage @ 0x1C02C8008 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v3 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v3 >= 0 && v2 == 1027 )
  {
    CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
    {
      if ( qword_1C029C248 )
        qword_1C029C248(3LL);
    }
  }
  return (unsigned int)v3;
}
