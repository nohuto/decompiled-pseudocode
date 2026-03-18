/*
 * XREFs of SafeEnableMDEV @ 0x1C00CC6B0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BF7E0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0135D48 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
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
