/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146B18
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C01737C4 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C017486C (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C017511C (DrvUpdateRemoteGraphicsDeviceList.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C023E368 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C023E394 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
LABEL_7:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 2u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
      {
        if ( qword_1C029C368 )
          qword_1C029C368(&v4, 0LL);
      }
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 )
    goto LABEL_6;
  if ( !qword_1C029C358 )
    return 3221225659LL;
  result = qword_1C029C358(grpdeskRitInput, &v4);
  if ( (int)result >= 0 )
  {
LABEL_6:
    DrvUpdateGraphicsDeviceList(1);
    xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
    goto LABEL_7;
  }
  return result;
}
