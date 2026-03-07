void __fastcall xxxDoSysExpungeIfNeeded(__int64 a1)
{
  unsigned int DLT; // eax
  char *v3; // rbx
  int v4; // edi
  tagDomLock *v5; // rcx
  __int64 v6; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  char v12; // [rsp+48h] [rbp-20h]

  DLT = DLT_CLIENTLIB::getDLT(a1);
  v8 = 1;
  v3 = &v8;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v9 = gDomainDummyLock;
  v11 = 0LL;
  v4 = 0;
  v12 = 0;
  v10 = 0;
  do
  {
    v5 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v5 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v5);
      else
        tagDomLock::LockShared(v5);
    }
    ++v4;
    v3 += 16;
  }
  while ( !v4 );
  v6 = *(_QWORD *)(a1 + 424);
  v12 = 1;
  if ( *(_DWORD *)(v6 + 392) == gcSysExpunge )
    goto LABEL_11;
  *(_DWORD *)(v6 + 392) = gcSysExpunge;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) & (__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) != 0 )
    xxxDoSysExpunge(a1);
  if ( v12 )
  {
LABEL_11:
    if ( DomainLockRef )
    {
      if ( v8 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
}
