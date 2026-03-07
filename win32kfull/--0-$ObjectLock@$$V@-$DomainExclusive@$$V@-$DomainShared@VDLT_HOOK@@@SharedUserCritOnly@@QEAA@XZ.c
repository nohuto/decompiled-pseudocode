__int64 __fastcall SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  bool v4; // zf
  int v5; // esi
  __int64 v6; // rdi
  tagDomLock *v7; // rcx

  DLT = DLT_HOOK::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v4 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v4 )
    {
      v5 = 0;
      v6 = a1;
      do
      {
        v7 = *(tagDomLock **)v6;
        if ( *(_QWORD *)v6 )
        {
          if ( *(_BYTE *)(v6 + 8) )
            tagDomLock::LockExclusive(v7);
          else
            tagDomLock::LockShared(v7);
        }
        ++v5;
        v6 += 16LL;
      }
      while ( !v5 );
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  return a1;
}
