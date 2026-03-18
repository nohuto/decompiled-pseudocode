/*
 * XREFs of DestroyAggregateSession @ 0x140A6F188
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140803550 (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140A6F104 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
