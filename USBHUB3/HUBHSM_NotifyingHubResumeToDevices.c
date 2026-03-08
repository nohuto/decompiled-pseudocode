/*
 * XREFs of HUBHSM_NotifyingHubResumeToDevices @ 0x1C0008AE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000E0F4 (HUBFDO_SignalPnpPowerEvent.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C001152C (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeToDevices(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_QueuePowerUpEventToDSMs(v1, 4006LL);
  HUBFDO_SignalPnpPowerEvent(v1);
  return 1000LL;
}
