/*
 * XREFs of GreUpdateSharedDevCaps @ 0x1C00197AC
 * Callers:
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0161F78 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00197E8 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall GreUpdateSharedDevCaps(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = SGDGetSessionState();
  vGetDeviceCaps((struct PDEVOBJ *)&v3, *(struct _DEVCAPS **)(*(_QWORD *)(v1 + 24) + 1920LL));
  return 1LL;
}
