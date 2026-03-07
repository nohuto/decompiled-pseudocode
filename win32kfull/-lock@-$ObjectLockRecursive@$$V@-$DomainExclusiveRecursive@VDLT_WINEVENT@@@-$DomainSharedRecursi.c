void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::lock(
        __int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rbx
  int v3; // edi
  tagDomLock *v4; // rcx

  v1 = (_BYTE *)(a1 + 40);
  v2 = a1;
  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(tagDomLock **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *(_BYTE *)(v2 + 8) )
        {
          if ( tagDomLock::IsLockedExclusive((PERESOURCE *)v4) )
            goto LABEL_10;
          tagDomLock::LockExclusive(*(tagDomLock **)v2);
        }
        else
        {
          if ( tagDomLock::IsLockedExclusive((PERESOURCE *)v4) || tagDomLock::IsLockedShared(*(PERESOURCE **)v2) )
          {
LABEL_10:
            *(_QWORD *)v2 = 0LL;
            goto LABEL_11;
          }
          tagDomLock::LockShared(*(tagDomLock **)v2);
        }
      }
LABEL_11:
      ++v3;
      v2 += 16LL;
      if ( v3 )
      {
        *v1 = 1;
        return;
      }
    }
  }
}
