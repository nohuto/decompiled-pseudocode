__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2)
{
  tagObjLock **v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // esi

  v2 = (tagObjLock **)(a1 + 16);
  *(_QWORD *)a1 = gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  v5 = SGDGetUserSessionState(a1);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v6) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    if ( a2 == (tagObjLock *)gObjDummyLock )
      a2 = 0LL;
    *v2 = a2;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v8 = 0;
      do
      {
        if ( *v2 )
          tagObjLock::LockExclusive(*v2);
        ++v8;
        ++v2;
      }
      while ( !v8 );
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return a1;
}
