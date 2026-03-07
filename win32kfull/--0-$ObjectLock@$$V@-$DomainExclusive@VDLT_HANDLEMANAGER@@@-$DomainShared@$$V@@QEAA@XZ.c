__int64 __fastcall DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdi
  tagDomLock *v4; // rcx

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(a1);
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v2 = 0;
    v3 = a1;
    do
    {
      v4 = *(tagDomLock **)v3;
      if ( *(_QWORD *)v3 )
      {
        if ( *(_BYTE *)(v3 + 8) )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16LL;
    }
    while ( !v2 );
    *(_BYTE *)(a1 + 40) = 1;
  }
  return a1;
}
