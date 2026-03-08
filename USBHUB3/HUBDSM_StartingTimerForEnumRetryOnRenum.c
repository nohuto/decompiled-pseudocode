/*
 * XREFs of HUBDSM_StartingTimerForEnumRetryOnRenum @ 0x1C0020A20
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartEnumRetryTimer @ 0x1C002E7AC (HUBMISC_StartEnumRetryTimer.c)
 */

__int64 __fastcall HUBDSM_StartingTimerForEnumRetryOnRenum(__int64 a1)
{
  HUBMISC_StartEnumRetryTimer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
