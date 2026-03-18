/*
 * XREFs of xxxLoadHmodIndex @ 0x1C01223C0
 * Callers:
 *     xxxLoadUserApiHook @ 0x1C0021150 (xxxLoadUserApiHook.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C009E648 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     UserGetLastStatus @ 0x1C00164AC (UserGetLastStatus.c)
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     ClientLoadLibrary @ 0x1C0023120 (ClientLoadLibrary.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00713C4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ClientFreeLibrary @ 0x1C0071A44 (ClientFreeLibrary.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0071C4C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxLoadHmodIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  PERESOURCE *v5; // rax
  int v6; // edi
  __int64 v7; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int DLT; // eax
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // esi
  tagDomLock *v19; // rcx
  PERESOURCE *v20; // rax
  __int64 v21; // rcx
  PERESOURCE *v22; // rax
  __int64 v23; // rbx
  int v24; // r12d
  __int64 v25; // rbx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 Library; // r14
  unsigned int v33; // eax
  char *v34; // rbx
  int v35; // esi
  tagDomLock *v36; // rcx
  int AtomNameFromAtomTable; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  tagDomLock *v43; // rax
  char *v44; // rbx
  tagDomLock *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  tagDomLock *v51; // rax
  __int64 v52; // rcx
  char *v53; // rbx
  tagDomLock *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // eax
  tagDomLock *v60; // rax
  char *v61; // rbx
  tagDomLock *v62; // rcx
  __int64 v63; // [rsp+20h] [rbp-E0h]
  __int64 v64; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING v65; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *v68; // [rsp+58h] [rbp-A8h]
  char v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h]
  char v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  char v73; // [rsp+80h] [rbp-80h]
  tagDomLock *DomainLockRef; // [rsp+88h] [rbp-78h] BYREF
  char v75; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h]
  char v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  char v79; // [rsp+B0h] [rbp-50h]
  tagDomLock *v80; // [rsp+B8h] [rbp-48h]
  char v81; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-38h]
  char v83; // [rsp+D0h] [rbp-30h]
  __int64 v84; // [rsp+D8h] [rbp-28h]
  char v85; // [rsp+E0h] [rbp-20h]
  WCHAR SourceString[264]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR v87[264]; // [rsp+300h] [rbp+200h] BYREF

  v4 = (int)a1;
  DestinationString = 0LL;
  v65 = 0LL;
  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v6 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  DLT = DLT_CLIENTLIB::getDLT(v10, v9, v11, v12, 1);
  v75 = 1;
  v14 = &v75;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v18 = 0;
  v76 = gDomainDummyLock;
  v78 = 0LL;
  v79 = 0;
  v77 = 0;
  do
  {
    v19 = (tagDomLock *)*((_QWORD *)v14 - 1);
    if ( v19 )
    {
      if ( *v14 )
        tagDomLock::LockExclusive(v19);
      else
        tagDomLock::LockShared(v19);
    }
    ++v18;
    v14 += 16;
  }
  while ( !v18 );
  v79 = 1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v20 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v19, v15, v16, v17);
    if ( ExIsResourceAcquiredExclusiveLite(*v20) != 1 )
    {
      v22 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v21, v15, v16, v17);
      if ( !ExIsResourceAcquiredSharedLite(*v22)
        || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainClientLibLock) != 1 )
      {
        __int2c();
      }
    }
  }
  v23 = *(_QWORD *)(v7 + 424);
  v24 = 1 << v4;
  if ( ((1 << v4) & *(_DWORD *)(v23 + 396)) != 0 )
  {
    v25 = *(_QWORD *)(v23 + 8 * v4 + 400);
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return v25;
  }
  if ( (int)v4 < 0 || (int)v4 >= catomSysTableEntries )
  {
    UserSetLastError(87);
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return 0LL;
  }
  LockRefactorStagingAssertAny((PERESOURCE *)gDomainClientLibLock, v15, v16, v17);
  v27 = v4;
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v4 + 400) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v4),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v4 == gihmodUserApiHook )
    {
      RtlInitUnicodeString(&v65, gszFunctionUserApiHook);
    }
    else if ( (_DWORD)v4 == gihmodUserApiHookWOW )
    {
      RtlInitUnicodeString(&v65, gszFunctionUserApiHookWOW);
    }
    else
    {
      RtlInitUnicodeString(&v65, 0LL);
      LODWORD(v63) = 0;
    }
    if ( v79 && DomainLockRef )
    {
      if ( v75 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v65);
    if ( Library )
    {
      v33 = DLT_CLIENTLIB::getDLT(v29, v28, v30, v31, v63);
      v34 = &v69;
      v68 = (tagDomLock *)GetDomainLockRef(v33);
      v35 = 0;
      v69 = 1;
      v72 = 0LL;
      v73 = 0;
      v70 = gDomainDummyLock;
      v71 = 0;
      do
      {
        v36 = (tagDomLock *)*((_QWORD *)v34 - 1);
        if ( v36 )
        {
          if ( *v34 )
            tagDomLock::LockExclusive(v36);
          else
            tagDomLock::LockShared(v36);
        }
        ++v35;
        v34 += 16;
      }
      while ( !v35 );
      String1 = 0LL;
      v73 = 1;
      if ( (_DWORD)v64
        && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                       UserLibmgmtAtomTableHandle,
                                       *((unsigned __int16 *)&aatomSysLoaded + v27),
                                       v87,
                                       260LL),
             RtlInitUnicodeString(&String1, v87),
             !AtomNameFromAtomTable)
         || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
      {
        v42 = DLT_CLIENTLIB::getDLT(v39, v38, v40, v41, v64);
        v43 = (tagDomLock *)GetDomainLockRef(v42);
        v82 = gDomainDummyLock;
        v80 = v43;
        v81 = 1;
        v83 = 0;
        v84 = 0LL;
        if ( v43 )
          tagDomLock::UnLockExclusive(v43);
        v85 = 1;
        ClientFreeLibrary(Library);
        Library = 0LL;
        if ( v85 )
        {
          v44 = &v81;
          do
          {
            v45 = (tagDomLock *)*((_QWORD *)v44 - 1);
            if ( v45 )
            {
              if ( *v44 )
                tagDomLock::LockExclusive(v45);
              else
                tagDomLock::LockShared(v45);
            }
            ++v6;
            v44 += 16;
          }
          while ( !v6 );
        }
      }
      else
      {
        LockRefactorStagingAssertOwned((PERESOURCE *)gDomainClientLibLock);
        if ( (v24 & *(_DWORD *)(*(_QWORD *)(v7 + 424) + 396LL)) != 0 )
        {
          v50 = DLT_CLIENTLIB::getDLT(v47, v46, v48, v49, v64);
          v51 = (tagDomLock *)GetDomainLockRef(v50);
          v82 = gDomainDummyLock;
          v80 = v51;
          v81 = 1;
          v83 = 0;
          v84 = 0LL;
          if ( v51 )
            tagDomLock::UnLockExclusive(v51);
          v52 = *(_QWORD *)(v7 + 424);
          v85 = 1;
          ClientFreeLibrary(*(_QWORD *)(v52 + 8 * v27 + 400));
          if ( v85 )
          {
            v53 = &v81;
            do
            {
              v54 = (tagDomLock *)*((_QWORD *)v53 - 1);
              if ( v54 )
              {
                if ( *v53 )
                  tagDomLock::LockExclusive(v54);
                else
                  tagDomLock::LockShared(v54);
              }
              ++v6;
              v53 += 16;
            }
            while ( !v6 );
          }
        }
        else
        {
          ++*((_DWORD *)&acatomSysUse + v27);
          LockRefactorStagingAssertOwned((PERESOURCE *)gDomainClientLibLock);
          *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v27 + 400) = Library;
          *(_DWORD *)(*(_QWORD *)(v7 + 424) + 396LL) |= v24;
        }
      }
    }
    else
    {
      if ( (unsigned int)UserGetLastStatus() != -1073740284
        && (unsigned int)UserGetLastStatus() != -1073740760
        && (unsigned int)UserGetLastError() != 1655
        && (unsigned int)UserGetLastError() != 577 )
      {
        return Library;
      }
      v59 = DLT_CLIENTLIB::getDLT(v56, v55, v57, v58, v63);
      v60 = (tagDomLock *)GetDomainLockRef(v59);
      v69 = 1;
      v61 = &v69;
      v68 = v60;
      v70 = gDomainDummyLock;
      v72 = 0LL;
      v73 = 0;
      v71 = 0;
      do
      {
        v62 = (tagDomLock *)*((_QWORD *)v61 - 1);
        if ( v62 )
        {
          if ( *v61 )
            tagDomLock::LockExclusive(v62);
          else
            tagDomLock::LockShared(v62);
        }
        ++v6;
        v61 += 16;
      }
      while ( !v6 );
      v73 = 1;
      LockRefactorStagingAssertOwned((PERESOURCE *)gDomainClientLibLock);
      *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v27 + 400) = -1LL;
    }
    if ( v73 && v68 )
    {
      if ( v69 )
      {
        tagDomLock::UnLockExclusive(v68);
        return Library;
      }
      tagDomLock::UnLockShared(v68);
    }
    return Library;
  }
  if ( v79 && DomainLockRef )
  {
    if ( v75 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return 0LL;
}
