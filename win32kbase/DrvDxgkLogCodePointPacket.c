/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00CA680
 * Callers:
 *     LogDiagSDC @ 0x1C001049C (LogDiagSDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00D0464 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6BA0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F534 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C018F8A8 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C0194484 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     LogDiagCDS @ 0x1C0195280 (LogDiagCDS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 DxgkWin32kInterface; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v6[0] = 6;
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v6[1] = 64;
  v9 = 0LL;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  (*(void (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 304))(v6);
  return v7;
}
