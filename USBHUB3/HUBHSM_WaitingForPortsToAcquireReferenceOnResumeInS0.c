/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x1C00093B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C00109DC (HUBMUX_QueuePowerUpEventToPSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToPSMs(*(_QWORD *)(a1 + 960), 3018LL);
  return 1000LL;
}
