/*
 * XREFs of KiSelectActiveTimerTable @ 0x14033BC80
 * Callers:
 *     KiRetireDpcList @ 0x1402459D0 (KiRetireDpcList.c)
 *     KiSetSystemTimeDpc @ 0x14039A160 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056FCFC (KiAdjustTimersAfterDripsExit.c)
 *     KiTimerExpiration @ 0x14057C864 (KiTimerExpiration.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
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
