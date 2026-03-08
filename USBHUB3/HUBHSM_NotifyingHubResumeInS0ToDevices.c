/*
 * XREFs of HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1C0008AB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C001152C (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeInS0ToDevices(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToDSMs(*(_QWORD *)(a1 + 960), 4010LL);
  return 1000LL;
}
