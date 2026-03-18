/*
 * XREFs of IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C023E368
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxRestoreCsrssThreadDesktopSupported()
{
  if ( qword_1C029C360 )
    return qword_1C029C360();
  else
    return 3221225659LL;
}
