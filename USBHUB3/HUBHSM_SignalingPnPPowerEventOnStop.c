/*
 * XREFs of HUBHSM_SignalingPnPPowerEventOnStop @ 0x1C0009130
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000E0F4 (HUBFDO_SignalPnpPowerEvent.c)
 */

__int64 __fastcall HUBHSM_SignalingPnPPowerEventOnStop(__int64 a1)
{
  HUBFDO_SignalPnpPowerEvent(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
