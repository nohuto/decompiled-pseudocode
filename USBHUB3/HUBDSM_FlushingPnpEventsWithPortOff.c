/*
 * XREFs of HUBDSM_FlushingPnpEventsWithPortOff @ 0x1C0023DB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerFailureEvent @ 0x1C00198D8 (HUBPDO_SignalPnpPowerFailureEvent.c)
 */

__int64 __fastcall HUBDSM_FlushingPnpEventsWithPortOff(__int64 a1)
{
  HUBPDO_SignalPnpPowerFailureEvent(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
