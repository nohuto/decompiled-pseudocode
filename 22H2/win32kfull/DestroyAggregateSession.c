/*
 * XREFs of DestroyAggregateSession @ 0x1C0399760
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1C0399664 (TlgUnregisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C03999F4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0399B84 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C03997A0 (CancelTimerCallbacksAndDeleteTimer.c)
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
