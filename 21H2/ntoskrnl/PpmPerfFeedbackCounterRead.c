/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x1403C182C
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64 *, __int64 *); // rax
  __int64 v5; // rcx
  __int64 v7; // r10
  unsigned __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))a1;
  v5 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v11 = 0LL;
  if ( !*(_BYTE *)(a1 + 33) )
    return ((__int64 (__fastcall *)(__int64, _DWORD *))v3)(v5, a3);
  v3(v5, a2, &v11, &v12);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v11 == v7 )
  {
    result = *(unsigned int *)(a1 + 24);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v12 - v9;
    result = (v12 - v9) * (unsigned __int64)*(unsigned __int8 *)(a1 + 35) / (v11 - v7);
    *(_QWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 8) = v10 + v9;
  }
  *a3 = result;
  return result;
}
