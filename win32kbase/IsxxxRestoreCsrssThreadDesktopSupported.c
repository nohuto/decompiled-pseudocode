/*
 * XREFs of IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C0271FCC
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159D70 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxRestoreCsrssThreadDesktopSupported()
{
  if ( qword_1C02D6BA8 )
    return qword_1C02D6BA8();
  else
    return 3221225659LL;
}
