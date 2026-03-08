/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C0016EC0 (GreSfmDwmShutdown.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00174C8 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00191F0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001CE8C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001D468 (DrvNotifyModeChangeStartStop.c)
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EF7C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C001F9A0 (GreLockSprite.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0020500 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00210C0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C002B6B0 (ldevUnloadImage.c)
 *     DrvGetHDEV @ 0x1C003C250 (DrvGetHDEV.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0059910 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C006CAF8 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C006DAC0 (hdevEnumerateDisplayOnly.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B61F4 (DrvCleanupAndDestroyMDEV.c)
 *     DrvDestroyMDEV @ 0x1C00B6450 (DrvDestroyMDEV.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00CD490 (DrvInitializeDxgkrnlDpiCache.c)
 *     ldevLoadInternal @ 0x1C00CD9B0 (ldevLoadInternal.c)
 *     GreLockPointer @ 0x1C00CDF30 (GreLockPointer.c)
 *     GreLockDynamicModeChange @ 0x1C00D0860 (GreLockDynamicModeChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00D8D30 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00D8F50 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00D9220 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0182C68 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018ED00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F15C (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0192A24 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0193A60 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0193D30 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C0197570 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C0197F40 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx

  result = SGDGetSessionState(a1);
  v9 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v9 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v9, v7, v8, a2, a3, a1);
  }
  return result;
}
