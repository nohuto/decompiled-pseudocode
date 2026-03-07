__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, int *); // rax
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(__int64 (__fastcall **)(__int64, int *))a1;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 33) )
    return v1(v3, &v5);
  ((void (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))v1)(v3, 0LL, &v6, &v7);
  *(_QWORD *)(a1 + 16) = v6;
  result = v7;
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}
