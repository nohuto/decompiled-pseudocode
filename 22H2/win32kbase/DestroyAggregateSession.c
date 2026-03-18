/*
 * XREFs of DestroyAggregateSession @ 0x1C02BF83C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C02BF4F8 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C02BF698 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02BF740 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C02BF87C (CancelTimerCallbacksAndDeleteTimer.c)
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
