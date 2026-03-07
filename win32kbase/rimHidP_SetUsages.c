__int64 __fastcall rimHidP_SetUsages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned __int16 v9; // di
  unsigned __int16 v10; // si
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 192) )
    return 3221225659LL;
  v16 = SGDGetUserSessionState(v13, v12, v14, v15);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(v16 + 192))(
           v11,
           v10,
           v9,
           a4,
           a5,
           a6,
           a7,
           a8);
}
