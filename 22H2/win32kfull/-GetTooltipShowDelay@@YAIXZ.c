/*
 * XREFs of ?GetTooltipShowDelay@@YAIXZ @ 0x1C013D300
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTooltipShowDelay(__int64 a1)
{
  return (unsigned int)(3 * *(_DWORD *)(SGDGetUserSessionState(a1) + 14360));
}
