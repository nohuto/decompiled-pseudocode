__int64 __fastcall xxxLoadHmodIndex(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  int v3; // r15d
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  unsigned int DLT; // eax
  char *v8; // rbx
  int v9; // edi
  tagDomLock *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rbx
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rax
  const WCHAR *v20; // rdx
  int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // eax
  char *v24; // r14
  int v25; // eax
  tagDomLock *v26; // rcx
  int AtomNameFromAtomTable; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int v32; // eax
  tagDomLock *v33; // rax
  char *v34; // rdi
  tagDomLock *v35; // rcx
  unsigned int v36; // eax
  tagDomLock *v37; // rax
  __int64 v38; // rcx
  char *v39; // rbx
  tagDomLock *v40; // rcx
  unsigned int v41; // eax
  tagDomLock *v42; // rax
  char *v43; // rbx
  tagDomLock *v44; // rcx
  int v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+20h] [rbp-E0h]
  __int64 Library; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING v48; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-B0h] BYREF
  tagDomLock *v51; // [rsp+60h] [rbp-A0h]
  char v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  char v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h]
  char v56; // [rsp+88h] [rbp-78h]
  tagDomLock *DomainLockRef; // [rsp+90h] [rbp-70h] BYREF
  char v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h]
  char v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  char v62; // [rsp+B8h] [rbp-48h]
  tagDomLock *v63; // [rsp+C0h] [rbp-40h]
  char v64; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  char v66; // [rsp+D8h] [rbp-28h]
  __int64 v67; // [rsp+E0h] [rbp-20h]
  char v68; // [rsp+E8h] [rbp-18h]
  WCHAR SourceString[264]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR v70[264]; // [rsp+300h] [rbp+200h] BYREF

  v1 = (int)a1;
  DestinationString = 0LL;
  v48 = 0LL;
  v2 = SGDGetUserSessionState(a1);
  v3 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8)) )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  DLT = DLT_CLIENTLIB::getDLT(v6);
  v58 = 1;
  v8 = &v58;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v9 = 0;
  v59 = gDomainDummyLock;
  v61 = 0LL;
  v62 = 0;
  v60 = 0;
  do
  {
    v10 = (tagDomLock *)*((_QWORD *)v8 - 1);
    if ( v10 )
    {
      if ( *v8 )
        tagDomLock::LockExclusive(v10);
      else
        tagDomLock::LockShared(v10);
    }
    ++v9;
    v8 += 16;
  }
  while ( !v9 );
  v62 = 1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v11 = SGDGetUserSessionState(v10);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v11 + 8)) != 1 )
    {
      v19 = SGDGetUserSessionState(v12);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 8))
        || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainClientLibLock) != 1 )
      {
        __int2c();
      }
    }
  }
  v13 = *(_QWORD *)(v4 + 424);
  v14 = 1 << v1;
  if ( ((1 << v1) & *(_DWORD *)(v13 + 396)) != 0 )
  {
    v15 = *(_QWORD *)(v13 + 8 * v1 + 400);
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    return v15;
  }
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87);
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(&DomainLockRef);
    return 0LL;
  }
  LockRefactorStagingAssertAny(gDomainClientLibLock);
  v17 = 8 * v1 + 400;
  v18 = v1;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 424) + v17) == -1LL )
  {
    if ( v62 && DomainLockRef )
    {
      if ( v58 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 0LL;
  }
  UserGetAtomNameFromAtomTable(
    UserLibmgmtAtomTableHandle,
    *((unsigned __int16 *)&aatomSysLoaded + v1),
    SourceString,
    260LL,
    v45);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( (_DWORD)v1 == gihmodUserApiHook )
  {
    v20 = &gszFunctionUserApiHook;
LABEL_27:
    RtlInitUnicodeString(&v48, v20);
    v21 = 1;
    goto LABEL_28;
  }
  if ( (_DWORD)v1 == gihmodUserApiHookWOW )
  {
    v20 = &gszFunctionUserApiHookWOW;
    goto LABEL_27;
  }
  RtlInitUnicodeString(&v48, 0LL);
  v21 = 0;
LABEL_28:
  if ( v62 && DomainLockRef )
  {
    if ( v58 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v48);
  if ( Library )
  {
    v23 = DLT_CLIENTLIB::getDLT(v22);
    v24 = &v52;
    v51 = (tagDomLock *)GetDomainLockRef(v23);
    v25 = 0;
    v55 = 0LL;
    v56 = 0;
    v46 = 0;
    v52 = 1;
    v53 = gDomainDummyLock;
    v54 = 0;
    do
    {
      v26 = (tagDomLock *)*((_QWORD *)v24 - 1);
      if ( v26 )
      {
        if ( *v24 )
          tagDomLock::LockExclusive(v26);
        else
          tagDomLock::LockShared(v26);
        v25 = v46;
      }
      ++v25;
      v24 += 16;
      v46 = v25;
    }
    while ( !v25 );
    v56 = 1;
    String1 = 0LL;
    if ( v21
      && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                     UserLibmgmtAtomTableHandle,
                                     *((unsigned __int16 *)&aatomSysLoaded + v18),
                                     v70,
                                     260LL,
                                     v25),
           RtlInitUnicodeString(&String1, v70),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      v32 = DLT_CLIENTLIB::getDLT(v28);
      v33 = (tagDomLock *)GetDomainLockRef(v32);
      v65 = gDomainDummyLock;
      v63 = v33;
      v64 = 1;
      v66 = 0;
      v67 = 0LL;
      if ( v33 )
        tagDomLock::UnLockExclusive(v33);
      v68 = 1;
      ClientFreeLibrary(Library);
      v30 = 0LL;
      if ( v68 )
      {
        v34 = &v64;
        do
        {
          v35 = (tagDomLock *)*((_QWORD *)v34 - 1);
          if ( v35 )
          {
            if ( *v34 )
              tagDomLock::LockExclusive(v35);
            else
              tagDomLock::LockShared(v35);
          }
          ++v3;
          v34 += 16;
        }
        while ( !v3 );
      }
    }
    else
    {
      LockRefactorStagingAssertOwned(gDomainClientLibLock);
      if ( (v14 & *(_DWORD *)(*(_QWORD *)(v4 + 424) + 396LL)) != 0 )
      {
        v36 = DLT_CLIENTLIB::getDLT(v29);
        v37 = (tagDomLock *)GetDomainLockRef(v36);
        v65 = gDomainDummyLock;
        v63 = v37;
        v64 = 1;
        v66 = 0;
        v67 = 0LL;
        if ( v37 )
          tagDomLock::UnLockExclusive(v37);
        v38 = *(_QWORD *)(v4 + 424);
        v68 = 1;
        ClientFreeLibrary(*(_QWORD *)(v38 + v17));
        if ( v68 )
        {
          v39 = &v64;
          do
          {
            v40 = (tagDomLock *)*((_QWORD *)v39 - 1);
            if ( v40 )
            {
              if ( *v39 )
                tagDomLock::LockExclusive(v40);
              else
                tagDomLock::LockShared(v40);
            }
            ++v3;
            v39 += 16;
          }
          while ( !v3 );
        }
        v30 = Library;
      }
      else
      {
        ++*((_DWORD *)&acatomSysUse + v18);
        LockRefactorStagingAssertOwned(gDomainClientLibLock);
        v30 = Library;
        *(_QWORD *)(*(_QWORD *)(v4 + 424) + v17) = Library;
        *(_DWORD *)(*(_QWORD *)(v4 + 424) + 396LL) |= v14;
      }
    }
    if ( v56 && v51 )
    {
      if ( v52 )
        tagDomLock::UnLockExclusive(v51);
      else
        tagDomLock::UnLockShared(v51);
    }
  }
  else
  {
    if ( (unsigned int)UserGetLastStatus() == -1073740284
      || (unsigned int)UserGetLastStatus() == -1073740760
      || (unsigned int)UserGetLastError() == 1655
      || (unsigned int)UserGetLastError() == 577 )
    {
      v41 = DLT_CLIENTLIB::getDLT(v31);
      v42 = (tagDomLock *)GetDomainLockRef(v41);
      v52 = 1;
      v43 = &v52;
      v51 = v42;
      v53 = gDomainDummyLock;
      v55 = 0LL;
      v56 = 0;
      v54 = 0;
      do
      {
        v44 = (tagDomLock *)*((_QWORD *)v43 - 1);
        if ( v44 )
        {
          if ( *v43 )
            tagDomLock::LockExclusive(v44);
          else
            tagDomLock::LockShared(v44);
        }
        ++v3;
        v43 += 16;
      }
      while ( !v3 );
      v56 = 1;
      LockRefactorStagingAssertOwned(gDomainClientLibLock);
      *(_QWORD *)(*(_QWORD *)(v4 + 424) + v17) = -1LL;
      if ( v56 && v51 )
      {
        if ( v52 )
          tagDomLock::UnLockExclusive(v51);
        else
          tagDomLock::UnLockShared(v51);
      }
    }
    return 0LL;
  }
  return v30;
}
