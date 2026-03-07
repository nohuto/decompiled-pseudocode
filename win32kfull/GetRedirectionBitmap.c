__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 Prop; // rbx
  tagObjLock **v7; // rbx
  int v8; // ebp
  __int128 v9; // [rsp+48h] [rbp-40h] BYREF
  char v10; // [rsp+58h] [rbp-30h]
  char v11; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 144);
  v9 = 0LL;
  v10 = 0;
  v2 = (unsigned __int16)atomLayer;
  v11 = 0;
  v4 = SGDGetUserSessionState(a1);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v11 = 1;
    if ( v1 == gObjDummyLock )
      v1 = 0LL;
    *(_QWORD *)&v9 = v1;
    v7 = (tagObjLock **)&v9;
    v8 = 0;
    do
    {
      if ( *v7 )
        tagObjLock::LockExclusive(*v7);
      ++v8;
      ++v7;
    }
    while ( !v8 );
    v10 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v2, 1LL);
  if ( v11 && v10 )
  {
    if ( (_QWORD)v9 )
      tagObjLock::UnLockExclusive((tagObjLock *)v9);
    v10 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  else
    return 0LL;
}
