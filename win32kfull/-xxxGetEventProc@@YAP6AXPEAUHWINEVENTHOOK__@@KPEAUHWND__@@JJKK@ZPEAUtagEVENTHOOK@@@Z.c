void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  int v2; // esi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  tagDomLock *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v12; // rcx
  int v13; // esi
  char *v14; // rbx
  tagDomLock *v15; // rcx
  int v16; // esi
  char *v17; // rbx
  tagDomLock *v18; // rcx
  tagDomLock *v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v25; // edi
  char *v26; // rbx
  tagDomLock *v27; // rcx
  tagDomLock *v28; // [rsp+20h] [rbp-40h] BYREF
  char v29; // [rsp+28h] [rbp-38h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  char v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h]
  char v33; // [rsp+48h] [rbp-18h]

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v28);
  if ( !v33 )
  {
    v2 = 0;
    v3 = &v29;
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
    v33 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    goto LABEL_57;
  if ( v33 )
  {
    v5 = v28;
    if ( v28 )
    {
      if ( v29 )
        tagDomLock::UnLockExclusive(v28);
      else
        tagDomLock::UnLockShared(v28);
    }
  }
  PtiCurrentShared((__int64)v5);
  if ( *((_DWORD *)a1 + 18) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
    if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
      return 0LL;
    DLT = DLT_WINEVENT::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v30 = gDomainDummyLock;
    v28 = DomainLockRef;
    v29 = 1;
    v31 = 0;
    v32 = 0LL;
    if ( DomainLockRef )
      tagDomLock::UnLockExclusive(DomainLockRef);
    v12 = *((unsigned int *)a1 + 18);
    v33 = 1;
    if ( !xxxLoadHmodIndex(v12) )
    {
      if ( v33 )
      {
        v25 = 0;
        v26 = &v29;
        do
        {
          v27 = (tagDomLock *)*((_QWORD *)v26 - 1);
          if ( v27 )
          {
            if ( *v26 )
              tagDomLock::LockExclusive(v27);
            else
              tagDomLock::LockShared(v27);
          }
          ++v25;
          v26 += 16;
        }
        while ( !v25 );
      }
      return 0LL;
    }
    if ( v33 )
    {
      v13 = 0;
      v14 = &v29;
      do
      {
        v15 = (tagDomLock *)*((_QWORD *)v14 - 1);
        if ( v15 )
        {
          if ( *v14 )
            tagDomLock::LockExclusive(v15);
          else
            tagDomLock::LockShared(v15);
        }
        ++v13;
        v14 += 16;
      }
      while ( !v13 );
    }
  }
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v28);
  if ( !v33 )
  {
    v16 = 0;
    v17 = &v29;
    do
    {
      v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
      if ( v18 )
      {
        if ( *v17 )
          tagDomLock::LockExclusive(v18);
        else
          tagDomLock::LockShared(v18);
      }
      ++v16;
      v17 += 16;
    }
    while ( !v16 );
    v33 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
LABEL_57:
    if ( v33 && v28 )
    {
      if ( v29 )
        tagDomLock::UnLockExclusive(v28);
      else
        tagDomLock::UnLockShared(v28);
    }
    return 0LL;
  }
  if ( v33 )
  {
    v19 = v28;
    if ( v28 )
    {
      if ( v29 )
        tagDomLock::UnLockExclusive(v28);
      else
        tagDomLock::UnLockShared(v28);
    }
  }
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v20 = PtiCurrentShared((__int64)v19);
  v21 = *((int *)a1 + 18);
  v22 = *((_QWORD *)v20 + 53);
  v23 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v22 + 8 * v21 + 400);
  if ( (_DWORD)v21 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v22 + 8 * v21 + 400));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v23;
}
