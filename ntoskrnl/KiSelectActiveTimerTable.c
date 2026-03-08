/*
 * XREFs of KiSelectActiveTimerTable @ 0x1402521A0
 * Callers:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiSetSystemTimeDpc @ 0x140396560 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056D68C (KiAdjustTimersAfterDripsExit.c)
 *     KiTimerExpiration @ 0x14057A354 (KiTimerExpiration.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  if ( !KiSerializeTimerExpiration )
    return a1 + 15360;
  if ( a2 && !*(_BYTE *)(a1 + 33) )
    return 0LL;
  return KiProcessorBlock[0] + 15360;
}
