__int64 __fastcall RIMOnProcessDestroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *i; // rdx
  __int64 v15; // rax

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v10 = (_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 304);
  for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
  {
    if ( i[2] == a1 )
      *((_BYTE *)i - 6) = 1;
  }
  v15 = SGDGetUserSessionState(v11, i, v12, v13);
  *(_QWORD *)(v15 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v15 + 240, 0LL);
  KeLeaveCriticalRegion();
  return RIMUnregisterCurrentProcessForInput();
}
