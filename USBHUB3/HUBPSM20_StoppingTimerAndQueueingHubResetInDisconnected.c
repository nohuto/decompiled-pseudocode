/*
 * XREFs of HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C0012780
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0011000 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_StopPortTimer @ 0x1C0032620 (HUBMISC_StopPortTimer.c)
 */

__int64 __fastcall HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  return HUBMISC_StopPortTimer(v1);
}
