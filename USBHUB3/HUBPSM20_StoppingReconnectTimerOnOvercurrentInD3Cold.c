/*
 * XREFs of HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold @ 0x1C0012760
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StopPortTimer @ 0x1C0032620 (HUBMISC_StopPortTimer.c)
 */

__int64 __fastcall HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold(__int64 a1)
{
  return HUBMISC_StopPortTimer(*(_QWORD *)(a1 + 960));
}
