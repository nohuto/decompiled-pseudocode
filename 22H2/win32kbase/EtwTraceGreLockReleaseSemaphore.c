/*
 * XREFs of EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C000EDA0 (DxgkEngVisRgnUniq.c)
 *     ldevLoadInternal @ 0x1C0016680 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x1C0017300 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C0017800 (ldevUnloadImage.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019B08 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001B11C (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C001B2D0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     GreSfmOpenTokenEvent @ 0x1C001B440 (GreSfmOpenTokenEvent.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C144 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001C770 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C001CBA0 (GreUnlockDisplayDevice.c)
 *     GreUnlockSprite @ 0x1C001CC30 (GreUnlockSprite.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C001E5DC (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0034688 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C00355C0 (hdevEnumerateDisplayOnly.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00397F0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0045A6C (--1SEMOBJEXORSHARED@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     DrvGetHDEV @ 0x1C005AF70 (DrvGetHDEV.c)
 *     ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005B120 (--1DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C005DCC4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005E63C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0077F40 (MultiUserGreTrackRemoveEngResource.c)
 *     MultiUserGreTrackAddEngResource @ 0x1C00780A0 (MultiUserGreTrackAddEngResource.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C008F8D0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C009AE60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00A074C (DrvCleanupAndDestroyMDEV.c)
 *     DrvDestroyMDEV @ 0x1C00A09A8 (DrvDestroyMDEV.c)
 *     GreSfmDwmShutdown @ 0x1C00B5910 (GreSfmDwmShutdown.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00BE310 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreUnlockPointer @ 0x1C00BEAF0 (GreUnlockPointer.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00CBC90 (GreSfmGetNotificationTokens.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CC970 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00CCB90 (HDXDrvEscape.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CCCEC (--1SEMOBJEX@@QEAA@XZ.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00D182C (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0152180 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01545DC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0156018 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ @ 0x1C015FBF0 (--1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160B38 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0161F78 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01623D4 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0165C94 (DrvCleanupGraphicsDevices.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0166FA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DxEngUnlockShareSem @ 0x1C0169440 (DxEngUnlockShareSem.c)
 *     GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C016A820 (GreUnlockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C016B1A0 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
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
