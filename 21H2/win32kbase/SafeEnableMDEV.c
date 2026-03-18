/*
 * XREFs of SafeEnableMDEV @ 0x1C00D44A0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     UpdateGraphicsDeviceList @ 0x1C006A194 (UpdateGraphicsDeviceList.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 */

__int64 __fastcall SafeEnableMDEV(unsigned int a1)
{
  if ( !gbMDEVDisabled )
    return 1LL;
  if ( gbGDIOn && (unsigned int)DrvEnableMDEV(*((__int64 **)gpDispInfo + 2), 1, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 0);
    return 1LL;
  }
  return 0LL;
}
