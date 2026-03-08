/*
 * XREFs of HUBMISC_StartResumeRecoveryTimer @ 0x1C0032540
 * Callers:
 *     HUBPSM20_StartingResumeRecoveryTimer @ 0x1C00126F0 (HUBPSM20_StartingResumeRecoveryTimer.c)
 *     HUBPSM20_WaitingForResumeRecoveryTimerOnResumeInSuspended @ 0x1C0012E70 (HUBPSM20_WaitingForResumeRecoveryTimerOnResumeInSuspended.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StartResumeRecoveryTimer(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 1328);
  if ( v1 && (*(_DWORD *)(v1 + 2464) & 0x80u) != 0 )
    v2 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 2504) + 4LL);
  else
    v2 = 10LL;
  return ExSetTimer(*(_QWORD *)(a1 + 1312), -10000 * v2, 0LL, 0LL);
}
