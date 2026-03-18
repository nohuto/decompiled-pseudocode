/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00D05E0
 * Callers:
 *     LogDiagSDC @ 0x1C005C5BC (LogDiagSDC.c)
 *     LogDiagCDS @ 0x1C0065CE8 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C007AAA0 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C2644 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     PowerOffMonitor @ 0x1C00D1C90 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0172190 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C01747B0 (DrvLogDrvChangeDisplaySettingsFailures.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(int a1, int a2, int a3, int a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]

  v10 = a1;
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v6 = 0LL;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  ((void (__fastcall *)(_DWORD *))qword_1C0296790)(v5);
  return v6;
}
