/*
 * XREFs of DestroyAggregateSession @ 0x1C0301A30
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C03016EC (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C030188C (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0301934 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0301A70 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer(P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
