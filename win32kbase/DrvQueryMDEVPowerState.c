/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1C0011490
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C0194740 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8
  __int64 v4; // r10

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  for ( i = a1 + 40; ; i += 56LL )
  {
    v4 = *(_QWORD *)(*(_QWORD *)i + 2552LL);
    if ( !v4 )
      break;
    if ( *(int *)(v4 + 160) < 0 )
      return 0LL;
    if ( ++v2 >= v1 )
      return 1LL;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(56LL * v2 + a1 + 40));
  return 0LL;
}
