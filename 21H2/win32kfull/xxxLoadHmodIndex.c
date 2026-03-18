/*
 * XREFs of xxxLoadHmodIndex @ 0x1C0054214
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C0074AA8 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00A4130 (xxxLoadUserApiHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C004DBCC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C00541E4 (IS_USERCRIT_OWNED_SHARED.c)
 *     ClientLoadLibrary @ 0x1C006A724 (ClientLoadLibrary.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ClientFreeLibrary @ 0x1C0077D70 (ClientFreeLibrary.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00783CC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C0113BA8 (UserGetLastStatus.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(int a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  unsigned int DLT; // eax
  char *v11; // rdi
  int v12; // r14d
  tagDomLock *v13; // rcx
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  unsigned int v24; // eax
  __int64 *v25; // rbx
  tagDomLock *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const WCHAR *v31; // rdx
  int AtomNameFromAtomTable; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  tagDomLock *v42; // rax
  int v43; // edi
  char *v44; // rbx
  tagDomLock *v45; // rcx
  unsigned int v46; // eax
  tagDomLock *v47; // rax
  __int64 v48; // rcx
  int v49; // edi
  char *v50; // rbx
  tagDomLock *v51; // rcx
  unsigned int v52; // eax
  tagDomLock *v53; // rax
  __int64 *v54; // rbx
  int v55; // edi
  tagDomLock *v56; // rcx
  struct _UNICODE_STRING v57; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING String1_8; // [rsp+48h] [rbp-C0h] BYREF
  tagDomLock *v60; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  char v65; // [rsp+80h] [rbp-88h]
  tagDomLock *v66; // [rsp+88h] [rbp-80h]
  char v67; // [rsp+90h] [rbp-78h] BYREF
  __int64 v68; // [rsp+98h] [rbp-70h]
  char v69; // [rsp+A0h] [rbp-68h]
  __int64 v70; // [rsp+A8h] [rbp-60h]
  char v71; // [rsp+B0h] [rbp-58h]
  tagDomLock *DomainLockRef; // [rsp+B8h] [rbp-50h]
  char v73; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-40h]
  char v75; // [rsp+D0h] [rbp-38h]
  __int64 v76; // [rsp+D8h] [rbp-30h]
  char v77; // [rsp+E0h] [rbp-28h]
  WCHAR SourceString[264]; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR v79[264]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v1 = a1;
  v2 = 0;
  DestinationString_8 = 0LL;
  v3 = 0LL;
  v57 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v9 = 1;
  DLT = DLT_CLIENTLIB::getDLT(v6, v5, v7, v8);
  v73 = 1;
  v11 = &v73;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v12 = 0;
  v74 = gDomainDummyLock;
  v76 = 0LL;
  v75 = 0;
  v77 = 0;
  do
  {
    v13 = (tagDomLock *)*((_QWORD *)v11 - 1);
    if ( v13 )
    {
      if ( *v11 )
        tagDomLock::LockExclusive(v13);
      else
        tagDomLock::LockShared(v13);
    }
    ++v12;
    v11 += 16;
  }
  while ( !v12 );
  v77 = 1;
  if ( !gbInDestroyHandleTableObjects
    && ExIsResourceAcquiredExclusiveLite(gpresUser) != 1
    && (!IS_USERCRIT_OWNED_SHARED() || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainClientLibLock) != 1) )
  {
    __int2c();
  }
  v14 = *(_QWORD *)(v3 + 424);
  v15 = 1 << v1;
  if ( ((1 << v1) & *(_DWORD *)(v14 + 404)) != 0 )
  {
    v16 = *(_QWORD *)(v14 + 8 * v1 + 408);
    goto LABEL_12;
  }
  if ( (int)v1 < 0 || (int)v1 >= catomSysTableEntries )
  {
    UserSetLastError(87LL);
  }
  else
  {
    LockRefactorStagingAssertAny((PERESOURCE *)gDomainClientLibLock);
    v18 = v1;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 424) + 8 * v1 + 408) != -1LL )
    {
      UserGetAtomNameFromAtomTable(
        UserLibmgmtAtomTableHandle,
        *((unsigned __int16 *)&aatomSysLoaded + v1),
        SourceString,
        260LL,
        *(_QWORD *)&v57.Length,
        v57.Buffer,
        *(_QWORD *)&DestinationString_8.Length,
        DestinationString_8.Buffer);
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      if ( (_DWORD)v1 == gihmodUserApiHook )
      {
        v31 = &gszFunctionUserApiHook;
      }
      else
      {
        if ( (_DWORD)v1 != gihmodUserApiHookWOW )
        {
          RtlInitUnicodeString(&v57, 0LL);
          v9 = 0;
LABEL_26:
          if ( v77 && DomainLockRef )
          {
            if ( v73 )
              tagDomLock::UnLockExclusive(DomainLockRef);
            else
              tagDomLock::UnLockShared(DomainLockRef);
          }
          v23 = ClientLoadLibrary(&DestinationString_8, &v57);
          if ( v23 )
          {
            v24 = DLT_CLIENTLIB::getDLT(v20, v19, v21, v22);
            v25 = &v61;
            v60 = (tagDomLock *)GetDomainLockRef(v24);
            v64 = 0LL;
            LOBYTE(v61) = 1;
            v62 = gDomainDummyLock;
            LOBYTE(v63) = 0;
            v65 = 0;
            do
            {
              v26 = (tagDomLock *)*(v25 - 1);
              if ( v26 )
              {
                if ( *(_BYTE *)v25 )
                  tagDomLock::LockExclusive(v26);
                else
                  tagDomLock::LockShared(v26);
              }
              ++v2;
              v25 += 2;
            }
            while ( !v2 );
            v65 = 1;
            String1_8 = 0LL;
            if ( v9
              && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                             UserLibmgmtAtomTableHandle,
                                             *((unsigned __int16 *)&aatomSysLoaded + v18),
                                             v79,
                                             260LL,
                                             *(_QWORD *)&v57.Length,
                                             v57.Buffer,
                                             *(_QWORD *)&DestinationString_8.Length,
                                             DestinationString_8.Buffer),
                   RtlInitUnicodeString(&String1_8, v79),
                   !AtomNameFromAtomTable)
               || RtlCompareUnicodeString(&String1_8, &DestinationString_8, 0)) )
            {
              v41 = DLT_CLIENTLIB::getDLT(v34, v33, v35, v36);
              v42 = (tagDomLock *)GetDomainLockRef(v41);
              v68 = gDomainDummyLock;
              v66 = v42;
              v67 = 1;
              v69 = 0;
              v70 = 0LL;
              if ( v42 )
                tagDomLock::UnLockExclusive(v42);
              v71 = 1;
              ClientFreeLibrary(v23);
              v23 = 0LL;
              if ( v71 )
              {
                v43 = 0;
                v44 = &v67;
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
                  ++v43;
                  v44 += 16;
                }
                while ( !v43 );
              }
            }
            else
            {
              LockRefactorStagingAssertOwned(gDomainClientLibLock);
              if ( (v15 & *(_DWORD *)(*(_QWORD *)(v3 + 424) + 404LL)) != 0 )
              {
                v46 = DLT_CLIENTLIB::getDLT(v28, v27, v29, v30);
                v47 = (tagDomLock *)GetDomainLockRef(v46);
                v68 = gDomainDummyLock;
                v66 = v47;
                v67 = 1;
                v69 = 0;
                v70 = 0LL;
                if ( v47 )
                  tagDomLock::UnLockExclusive(v47);
                v48 = *(_QWORD *)(v3 + 424);
                v71 = 1;
                ClientFreeLibrary(*(_QWORD *)(v48 + 8 * v18 + 408));
                if ( v71 )
                {
                  v49 = 0;
                  v50 = &v67;
                  do
                  {
                    v51 = (tagDomLock *)*((_QWORD *)v50 - 1);
                    if ( v51 )
                    {
                      if ( *v50 )
                        tagDomLock::LockExclusive(v51);
                      else
                        tagDomLock::LockShared(v51);
                    }
                    ++v49;
                    v50 += 16;
                  }
                  while ( !v49 );
                }
              }
              else
              {
                ++*((_DWORD *)&acatomSysUse + v18);
                LockRefactorStagingAssertOwned(gDomainClientLibLock);
                *(_QWORD *)(*(_QWORD *)(v3 + 424) + 8 * v18 + 408) = v23;
                *(_DWORD *)(*(_QWORD *)(v3 + 424) + 404LL) |= v15;
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
              return v23;
            }
            v52 = DLT_CLIENTLIB::getDLT(v38, v37, v39, v40);
            v53 = (tagDomLock *)GetDomainLockRef(v52);
            LOBYTE(v63) = 0;
            v60 = v53;
            v54 = &v61;
            v55 = 0;
            v62 = gDomainDummyLock;
            v64 = 0LL;
            LOBYTE(v61) = 1;
            v65 = 0;
            do
            {
              v56 = (tagDomLock *)*(v54 - 1);
              if ( v56 )
              {
                if ( *(_BYTE *)v54 )
                  tagDomLock::LockExclusive(v56);
                else
                  tagDomLock::LockShared(v56);
              }
              ++v55;
              v54 += 2;
            }
            while ( !v55 );
            v65 = 1;
            LockRefactorStagingAssertOwned(gDomainClientLibLock);
            *(_QWORD *)(*(_QWORD *)(v3 + 424) + 8 * v18 + 408) = -1LL;
          }
          if ( v65 && v60 )
          {
            if ( (_BYTE)v61 )
              tagDomLock::UnLockExclusive(v60);
            else
              tagDomLock::UnLockShared(v60);
          }
          return v23;
        }
        v31 = &gszFunctionUserApiHookWOW;
      }
      RtlInitUnicodeString(&v57, v31);
      goto LABEL_26;
    }
  }
  v16 = 0LL;
LABEL_12:
  if ( v77 && DomainLockRef )
  {
    if ( v73 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return v16;
}
