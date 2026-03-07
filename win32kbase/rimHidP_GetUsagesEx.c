__int64 __fastcall rimHidP_GetUsagesEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int16 v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v9 = a2;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 128) )
    return 3221225659LL;
  v14 = SGDGetUserSessionState(v11, v10, v12, v13);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(v14 + 128))(
           0LL,
           v9,
           a3,
           a4,
           a5,
           a6,
           a7);
}
