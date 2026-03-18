/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C0071CE0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C0067580 (DrvChangeDisplaySettingsPreValidate.c)
 *     UpdateGraphicsDeviceList @ 0x1C006A194 (UpdateGraphicsDeviceList.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     NtUserQueryDisplayConfig @ 0x1C0070110 (NtUserQueryDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0070820 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0070D14 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     EngQueryW32kCddInterface @ 0x1C00BD920 (EngQueryW32kCddInterface.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     DrvSetMonitorPowerState @ 0x1C00D2E20 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00DEB70 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C014A580 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0160660 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C006CF70 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
