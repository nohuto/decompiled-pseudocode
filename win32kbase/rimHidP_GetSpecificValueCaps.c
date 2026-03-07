__int64 __fastcall rimHidP_GetSpecificValueCaps(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // si
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 136) )
    return 3221225659LL;
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(v15 + 136))(
           v10,
           v9,
           v8,
           v7,
           a5,
           a6,
           a7);
}
