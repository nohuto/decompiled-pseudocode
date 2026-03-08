/*
 * XREFs of DestroyAggregateSession @ 0x1C03D3654
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0210A1C (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C0210C04 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C03D3898 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C03D35C4 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
