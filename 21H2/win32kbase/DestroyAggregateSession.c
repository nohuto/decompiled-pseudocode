/*
 * XREFs of DestroyAggregateSession @ 0x1C02C8730
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C02C80F8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C02C8298 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02C8634 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C02C8770 (CancelTimerCallbacksAndDeleteTimer.c)
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
