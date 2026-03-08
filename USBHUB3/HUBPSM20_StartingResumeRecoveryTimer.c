/*
 * XREFs of HUBPSM20_StartingResumeRecoveryTimer @ 0x1C00126F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StartResumeRecoveryTimer @ 0x1C0032540 (HUBMISC_StartResumeRecoveryTimer.c)
 */

__int64 __fastcall HUBPSM20_StartingResumeRecoveryTimer(__int64 a1)
{
  HUBMISC_StartResumeRecoveryTimer(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
