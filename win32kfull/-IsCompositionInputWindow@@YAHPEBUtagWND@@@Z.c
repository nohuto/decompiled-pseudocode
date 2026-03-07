__int64 __fastcall IsCompositionInputWindow(const struct tagWND *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 Prop; // rbx
  tagObjLock **v8; // rsi
  int v9; // ebp
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  char v11; // [rsp+60h] [rbp-38h]
  char v12; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v2 = *((_QWORD *)a1 + 18);
  v11 = 0;
  v3 = CInputQueueProp::s_atom;
  v12 = 0;
  v4 = SGDGetUserSessionState(a1);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v5) )
  {
    v12 = 1;
    if ( v2 == gObjDummyLock )
      v2 = 0LL;
    *(_QWORD *)&v10 = v2;
    v8 = (tagObjLock **)&v10;
    v9 = 0;
    do
    {
      if ( *v8 )
        tagObjLock::LockExclusive(*v8);
      ++v9;
      ++v8;
    }
    while ( !v9 );
    v11 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v3, 1LL);
  if ( v12 && v11 )
  {
    if ( (_QWORD)v10 )
      tagObjLock::UnLockExclusive((tagObjLock *)v10);
    v11 = 0;
  }
  if ( !Prop )
    return 0LL;
  if ( !*(_DWORD *)(Prop + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 210LL);
  return 1LL;
}
