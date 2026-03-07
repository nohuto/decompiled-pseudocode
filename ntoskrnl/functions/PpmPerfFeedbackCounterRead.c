__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3)
{
  void (__fastcall *v5)(__int64, __int64, __int64 *, __int64 *); // rax
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v5 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))a1;
  v6 = *(_BYTE *)(a1 + 33) == 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    return ((__int64 (__fastcall *)(__int64, _DWORD *))v5)(v7, a3);
  v5(v7, a2, &v13, &v14);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v13 != v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v13 - v8;
    v11 = v14 - v9;
    *(_DWORD *)(a1 + 24) = (v14 - v9) * (unsigned __int64)*(unsigned int *)(a1 + 36) / (v13 - v8);
    *(_QWORD *)(a1 + 16) = v10 + v8;
    *(_QWORD *)(a1 + 8) = v11 + v9;
  }
  result = *(unsigned int *)(a1 + 24);
  *a3 = result;
  return result;
}
