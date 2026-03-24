/*
 * XREFs of KiSelectActiveTimerTable @ 0x1402473D0
 * Callers:
 *     KiRetireDpcList @ 0x140246020 (KiRetireDpcList.c)
 *     KiTimerExpiration @ 0x140388BF0 (KiTimerExpiration.c)
 *     KiSetSystemTimeDpc @ 0x14039D8B0 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiSerializeTimerExpiration )
    return a1 + 14656;
  if ( !a2 || *(_BYTE *)(a1 + 33) )
    return KiProcessorBlock[0] + 14656;
  return result;
}
