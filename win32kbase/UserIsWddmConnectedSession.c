/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C0022420
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     NtUserQueryDisplayConfig @ 0x1C0021A60 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C002834C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     EngQueryW32kCddInterface @ 0x1C00BCF70 (EngQueryW32kCddInterface.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00CE990 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvSetMonitorPowerState @ 0x1C00D41A0 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6BA0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00E2170 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C016F1A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0176190 (NtUserSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C019288C (DrvChangeDisplaySettingsPreValidate.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C0020FE0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
