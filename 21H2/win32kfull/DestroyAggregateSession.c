/*
 * XREFs of DestroyAggregateSession @ 0x1C0377C9C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C03776E4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0377874 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C0377BA0 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0377CDC (CancelTimerCallbacksAndDeleteTimer.c)
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
