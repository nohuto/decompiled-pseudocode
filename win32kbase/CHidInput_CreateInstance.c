__int64 __fastcall CHidInput_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int Instance; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  Instance = CHidInput::CreateInstance((struct CHidInput **)(v4 + 16840));
  v9 = 0LL;
  if ( Instance >= 0 )
    return *(_QWORD *)(SGDGetUserSessionState(0LL, v6, v7, v8) + 16840);
  return v9;
}
