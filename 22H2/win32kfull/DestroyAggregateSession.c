/*
 * XREFs of DestroyAggregateSession @ 0x1C037AC60
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C037A598 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C037A71C (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C037AB6C (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C037ACA0 (CancelTimerCallbacksAndDeleteTimer.c)
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
