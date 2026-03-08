/*
 * XREFs of DestroyAggregateSession @ 0x1C039C5B4
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1C039C4B8 (TlgUnregisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C039C844 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C039C9D4 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C039C5F4 (CancelTimerCallbacksAndDeleteTimer.c)
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
