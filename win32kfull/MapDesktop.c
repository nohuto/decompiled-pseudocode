/*
 * XREFs of MapDesktop @ 0x1C003E450
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     NtUserBuildHwndList @ 0x1C003FD60 (NtUserBuildHwndList.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C00DDB90 (UserCommitDesktopMemory.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // r13
  NTSTATUS v2; // edi
  PDEVICE_OBJECT v4; // rcx
  char v5; // dl
  __int64 v6; // rax
  tagDomLock *v7; // rcx
  char v8; // bl
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int DLT; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *i; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  bool v22; // zf
  int v23; // r12d
  char *v24; // rsi
  ULONG v25; // eax
  __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-31h] BYREF
  __int64 v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 v29; // [rsp+70h] [rbp-21h] BYREF
  __int64 v30; // [rsp+78h] [rbp-19h]
  tagDomLock *DomainLockRef; // [rsp+80h] [rbp-11h]
  char v32; // [rsp+88h] [rbp-9h] BYREF
  __int64 v33; // [rsp+90h] [rbp-1h]
  char v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+A0h] [rbp+Fh]
  char v36; // [rsp+A8h] [rbp+17h]
  char v37; // [rsp+B0h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 16);
  v27 = 0LL;
  v2 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      6,
      24,
      (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
      v1,
      *(_QWORD *)(a1 + 8),
      v26,
      v27,
      v28,
      v29);
  v6 = SGDGetUserSessionState(v4);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 8)) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)a1 == 3 )
    goto LABEL_23;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
  v10 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
  {
    v2 = -1073741811;
    goto LABEL_64;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(v11)
    && !(unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, &v29)
    || (v12 = *(_QWORD *)(v1 + 120),
        v13 = *(_QWORD *)(a1 + 8),
        v30 = v12,
        (unsigned int)PsGetProcessSessionId(v13) != *(_DWORD *)v1) )
  {
    v2 = -1073741790;
LABEL_64:
    v25 = RtlNtStatusToDosError(v2);
    UserSetLastError(v25);
    goto LABEL_23;
  }
  DLT = DLT_DESKTOP::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v33 = gDomainDummyLock;
  v35 = 0LL;
  v32 = 1;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v16 = SGDGetUserSessionState(v15);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v16 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v37 = 1;
    if ( !v36 )
    {
      v23 = 0;
      v24 = &v32;
      do
      {
        v7 = (tagDomLock *)*((_QWORD *)v24 - 1);
        if ( v7 )
        {
          if ( *v24 )
            tagDomLock::LockExclusive(v7);
          else
            tagDomLock::LockShared(v7);
        }
        ++v23;
        v24 += 16;
      }
      while ( !v23 );
      v12 = v30;
      v36 = 1;
    }
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    v17 = SGDGetUserSessionState(v7);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v17 + 8)) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainDesktopLock)) )
    {
      __int2c();
    }
  }
  for ( i = (_QWORD *)v10[87]; i; i = (_QWORD *)*i )
  {
    if ( i[1] == v1 )
    {
      if ( v37 )
      {
        if ( v36 )
        {
          v7 = DomainLockRef;
          if ( DomainLockRef )
          {
            v22 = v32 == 0;
LABEL_47:
            if ( v22 )
              tagDomLock::UnLockShared(v7);
            else
              tagDomLock::UnLockExclusive(v7);
            goto LABEL_23;
          }
        }
      }
      goto LABEL_23;
    }
  }
  v20 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
  if ( !v20 )
  {
    v2 = -1073741801;
LABEL_57:
    if ( v37 && v36 && DomainLockRef )
    {
      if ( v32 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    goto LABEL_64;
  }
  v21 = *(_QWORD *)(a1 + 8);
  v27 = 0LL;
  v26 = 0LL;
  v28 = 4096LL;
  v2 = MmMapViewOfSection(v12, v21, &v26, 0LL, 0LL, &v28, &v27, 2, 0x400000, 2);
  if ( v2 < 0 )
  {
    Win32FreePool(v20);
    goto LABEL_57;
  }
  v20[1] = v1;
  v20[2] = v26;
  *v20 = v10[87];
  v22 = v37 == 0;
  v10[87] = v20;
  if ( !v22 )
  {
    if ( v36 )
    {
      v7 = DomainLockRef;
      if ( DomainLockRef )
      {
        v22 = v32 == 0;
        goto LABEL_47;
      }
    }
  }
LABEL_23:
  if ( v8 )
    UserSessionSwitchLeaveCrit(v7);
  return (unsigned int)v2;
}
