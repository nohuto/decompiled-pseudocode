/*
 * XREFs of EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C000D310 (DxgkEngVisRgnUniq.c)
 *     GreSfmDwmShutdown @ 0x1C0016EC0 (GreSfmDwmShutdown.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0017570 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreSfmOpenTokenEvent @ 0x1C0019080 (GreSfmOpenTokenEvent.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0019320 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001CE8C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001D468 (DrvNotifyModeChangeStartStop.c)
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EE54 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C001F8B0 (GreUnlockDisplayDevice.c)
 *     GreUnlockSprite @ 0x1C001F940 (GreUnlockSprite.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0021230 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00214A0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C002194C (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0021A24 (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C002AF90 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x1C002B0F0 (MultiUserGreTrackAddEngResource.c)
 *     ldevUnloadImage @ 0x1C002B6B0 (ldevUnloadImage.c)
 *     DrvGetHDEV @ 0x1C003C250 (DrvGetHDEV.c)
 *     ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C003CA90 (--1DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003EBA4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C006DAC0 (hdevEnumerateDisplayOnly.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B61F4 (DrvCleanupAndDestroyMDEV.c)
 *     DrvDestroyMDEV @ 0x1C00B6450 (DrvDestroyMDEV.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00CD490 (DrvInitializeDxgkrnlDpiCache.c)
 *     ldevLoadInternal @ 0x1C00CD9B0 (ldevLoadInternal.c)
 *     GreUnlockPointer @ 0x1C00CDF70 (GreUnlockPointer.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00D8060 (GreSfmGetNotificationTokens.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00D8D30 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00D8F50 (HDXDrvEscape.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00D90AC (--1SEMOBJEX@@QEAA@XZ.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C017F900 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0182C68 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ @ 0x1C018C7B0 (--1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018ED00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F15C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0192A24 (DrvCleanupGraphicsDevices.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0193D30 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DxEngUnlockShareSem @ 0x1C01961D0 (DxEngUnlockShareSem.c)
 *     GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C0197600 (GreUnlockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C0197F40 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockReleaseSemaphore(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx

  result = SGDGetSessionState(a1);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(v6, (unsigned int)&LockRelease, v5, a2, a1);
  }
  return result;
}
