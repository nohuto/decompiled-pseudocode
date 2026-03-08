/*
 * XREFs of HUBHSM_NotifyingHubResetToPortsOnResetOnResume @ 0x1C0008A80
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueResetToAllPSMs @ 0x1C0010CF0 (HUBMUX_QueueResetToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResetToPortsOnResetOnResume(__int64 a1)
{
  HUBMUX_QueueResetToAllPSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
