/*
 * XREFs of DestroyAggregateSession @ 0x1C027E9D0
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C027E5D8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C027E76C (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C027E8D8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C027EA10 (CancelTimerCallbacksAndDeleteTimer.c)
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
