__int64 __fastcall UnhookWinEvent(void **a1)
{
  int v2; // edi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  __int64 v5; // rcx
  tagDomLock *v7; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h] BYREF
  char v9; // [rsp+48h] [rbp-20h]

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v7);
  if ( !v9 )
  {
    v2 = 0;
    v3 = &v8;
    do
    {
      v4 = (tagDomLock *)*((_QWORD *)v3 - 1);
      if ( v4 )
      {
        if ( *v3 )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16;
    }
    while ( !v2 );
    v9 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 || a1[2] != PtiCurrentShared(v5) )
  {
    UserSetLastError(6);
    if ( v9 && v7 )
    {
      if ( v8 )
        tagDomLock::UnLockExclusive(v7);
      else
        tagDomLock::UnLockShared(v7);
    }
    return 0LL;
  }
  else
  {
    if ( v9 && v7 )
    {
      if ( v8 )
        tagDomLock::UnLockExclusive(v7);
      else
        tagDomLock::UnLockShared(v7);
    }
    DestroyEventHook(a1);
    return 1LL;
  }
}
