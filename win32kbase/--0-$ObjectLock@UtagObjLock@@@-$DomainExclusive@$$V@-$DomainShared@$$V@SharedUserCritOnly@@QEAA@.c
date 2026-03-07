__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        __int64 *a2)
{
  tagObjLock **v2; // rdi
  __int64 *v6; // rax
  int v7; // esi

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &gDomainDummyLock;
  v2 = (tagObjLock **)(a1 + 16);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v6 = 0LL;
    *(_BYTE *)(a1 + 40) = 1;
    if ( a2 != &gObjDummyLock )
      v6 = a2;
    *v2 = (tagObjLock *)v6;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v7 = 0;
      do
      {
        if ( *v2 )
          tagObjLock::LockExclusive(*v2);
        ++v7;
        ++v2;
      }
      while ( !v7 );
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return a1;
}
