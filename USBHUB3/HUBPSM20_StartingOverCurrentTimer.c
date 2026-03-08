/*
 * XREFs of HUBPSM20_StartingOverCurrentTimer @ 0x1C0012680
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartOverCurrentTimer @ 0x1C0032480 (HUBMISC_StartOverCurrentTimer.c)
 */

__int64 __fastcall HUBPSM20_StartingOverCurrentTimer(__int64 a1)
{
  HUBMISC_StartOverCurrentTimer(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
