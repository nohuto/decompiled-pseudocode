/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x1C008FCDC
 * Callers:
 *     DestroyAggregateSession @ 0x1C008FD6C (DestroyAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00906E0 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CancelTimerCallbacksAndDeleteTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 360) )
  {
    v4 = *(_QWORD *)(a1 + 264);
    v5 = 2LL;
    LOWORD(v5) = *(_WORD *)(v4 + 56);
    *(_WORD *)(v4 + 56) = 2;
    if ( (_WORD)v5 == 1 )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 264) + 32LL), Executive, 0, 0, 0LL);
    v6 = *(_QWORD *)(a1 + 360);
    LOBYTE(a3) = 1;
    LOBYTE(v5) = 1;
    v8 = 0LL;
    v9 = 0LL;
    result = ExDeleteTimer(v6, v5, a3, &v8);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  return result;
}
