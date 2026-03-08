/*
 * XREFs of HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend @ 0x1C0023430
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StopTimer @ 0x1C002E944 (HUBMISC_StopTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  return v2;
}
