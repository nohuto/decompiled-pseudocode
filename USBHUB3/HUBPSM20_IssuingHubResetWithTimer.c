/*
 * XREFs of HUBPSM20_IssuingHubResetWithTimer @ 0x1C0012140
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0011000 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 */

__int64 __fastcall HUBPSM20_IssuingHubResetWithTimer(__int64 a1)
{
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(**(_QWORD **)(a1 + 960));
  return 3013LL;
}
