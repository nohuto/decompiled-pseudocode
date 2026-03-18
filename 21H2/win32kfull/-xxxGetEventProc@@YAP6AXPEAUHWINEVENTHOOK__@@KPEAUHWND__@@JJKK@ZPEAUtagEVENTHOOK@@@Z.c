/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C0074AA8
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxLoadHmodIndex @ 0x1C0054214 (xxxLoadHmodIndex.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0074278 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     MakeExportSuppressedPfnValid @ 0x1C00FAF1C (MakeExportSuppressedPfnValid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  int v2; // esi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v10; // ecx
  int v11; // esi
  char *v12; // rbx
  tagDomLock *v13; // rcx
  int v14; // esi
  char *v15; // rbx
  tagDomLock *v16; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  tagDomLock *v22; // rcx
  bool v23; // zf
  int v24; // edi
  char *v25; // rbx
  tagDomLock *v26; // rcx
  tagDomLock *v27; // [rsp+28h] [rbp-29h] BYREF
  char v28; // [rsp+30h] [rbp-21h] BYREF
  __int64 v29; // [rsp+38h] [rbp-19h]
  char v30; // [rsp+40h] [rbp-11h]
  __int64 v31; // [rsp+48h] [rbp-9h]
  char v32; // [rsp+50h] [rbp-1h]
  tagDomLock *v33; // [rsp+58h] [rbp+7h] BYREF
  char v34; // [rsp+60h] [rbp+Fh] BYREF
  char v35; // [rsp+80h] [rbp+2Fh]

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v27);
  if ( !v32 )
  {
    v2 = 0;
    v3 = &v28;
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
    v32 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    if ( !v32 )
      return 0LL;
    v22 = v27;
    if ( !v27 )
      return 0LL;
    v23 = v28 == 0;
LABEL_62:
    if ( v23 )
      tagDomLock::UnLockShared(v22);
    else
      tagDomLock::UnLockExclusive(v22);
    return 0LL;
  }
  if ( v32 && v27 )
  {
    if ( v28 )
      tagDomLock::UnLockExclusive(v27);
    else
      tagDomLock::UnLockShared(v27);
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *((_DWORD *)a1 + 18) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5);
    if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
      return 0LL;
    DLT = DLT_WINEVENT::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v29 = gDomainDummyLock;
    v27 = DomainLockRef;
    v28 = 1;
    v30 = 0;
    v31 = 0LL;
    if ( DomainLockRef )
      tagDomLock::UnLockExclusive(DomainLockRef);
    v10 = *((_DWORD *)a1 + 18);
    v32 = 1;
    if ( !xxxLoadHmodIndex(v10) )
    {
      if ( v32 )
      {
        v24 = 0;
        v25 = &v28;
        do
        {
          v26 = (tagDomLock *)*((_QWORD *)v25 - 1);
          if ( v26 )
          {
            if ( *v25 )
              tagDomLock::LockExclusive(v26);
            else
              tagDomLock::LockShared(v26);
          }
          ++v24;
          v25 += 16;
        }
        while ( !v24 );
      }
      return 0LL;
    }
    if ( v32 )
    {
      v11 = 0;
      v12 = &v28;
      do
      {
        v13 = (tagDomLock *)*((_QWORD *)v12 - 1);
        if ( v13 )
        {
          if ( *v12 )
            tagDomLock::LockExclusive(v13);
          else
            tagDomLock::LockShared(v13);
        }
        ++v11;
        v12 += 16;
      }
      while ( !v11 );
    }
  }
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v33);
  if ( !v35 )
  {
    v14 = 0;
    v15 = &v34;
    do
    {
      v16 = (tagDomLock *)*((_QWORD *)v15 - 1);
      if ( v16 )
      {
        if ( *v15 )
          tagDomLock::LockExclusive(v16);
        else
          tagDomLock::LockShared(v16);
      }
      ++v14;
      v15 += 16;
    }
    while ( !v14 );
    v35 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    if ( !v35 )
      return 0LL;
    v22 = v33;
    if ( !v33 )
      return 0LL;
    v23 = v34 == 0;
    goto LABEL_62;
  }
  if ( v35 && v33 )
  {
    if ( v34 )
      tagDomLock::UnLockExclusive(v33);
    else
      tagDomLock::UnLockShared(v33);
  }
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v18 = *((int *)a1 + 18);
  v19 = *(_QWORD *)(ThreadWin32Thread + 424);
  v20 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v19 + 8 * v18 + 408);
  if ( (_DWORD)v18 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v19 + 8 * v18 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v20;
}
