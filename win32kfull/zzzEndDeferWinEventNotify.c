// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  char v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  char v9; // [rsp+48h] [rbp-20h]

  DLT = DLT_WINEVENT::getDLT();
  v5 = 1;
  v1 = &v5;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v6 = gDomainDummyLock;
  v8 = 0LL;
  v2 = 0;
  v9 = 0;
  v7 = 0;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v1 - 1);
    if ( v3 )
    {
      if ( *v1 )
        tagDomLock::LockExclusive(v3);
      else
        tagDomLock::LockShared(v3);
    }
    ++v2;
    v1 += 16;
  }
  while ( !v2 );
  v9 = 1;
  --gdwDeferWinEvent;
  if ( DomainLockRef )
  {
    if ( v5 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
