/*
 * XREFs of HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold @ 0x1C0012E40
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartD3ColdReconnectTimer @ 0x1C0032598 (HUBMISC_StartD3ColdReconnectTimer.c)
 */

__int64 __fastcall HUBPSM30_StartingTimerForAllowingReconnectOnResumingFromD3Cold(__int64 a1)
{
  HUBMISC_StartD3ColdReconnectTimer(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
