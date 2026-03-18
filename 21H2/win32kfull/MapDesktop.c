/*
 * XREFs of MapDesktop @ 0x1C0077E30
 * Callers:
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     xxxResolveDesktop @ 0x1C00CF130 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C0107DE0 (UserCommitDesktopMemory.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetDesktopView @ 0x1C0078100 (GetDesktopView.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00783CC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_DESKTOP@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C0078424 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_DESKTOP@@@-$DomainShared@$$V@SharedUserCritOnly@@QEAA.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // r15
  NTSTATUS v2; // ebx
  char v4; // r12
  char v5; // dl
  tagDomLock *v6; // rcx
  __int64 ProcessWin32Process; // r14
  __int64 v8; // rcx
  __int64 v9; // r13
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // [rsp+58h] [rbp-29h] BYREF
  __int64 v16; // [rsp+60h] [rbp-21h] BYREF
  __int64 v17; // [rsp+68h] [rbp-19h] BYREF
  __int64 v18; // [rsp+70h] [rbp-11h] BYREF
  tagDomLock *v19; // [rsp+78h] [rbp-9h] BYREF
  char v20; // [rsp+80h] [rbp-1h]
  char v21; // [rsp+A0h] [rbp+1Fh]
  char v22; // [rsp+A8h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v2 = 0;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v4 = 1;
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
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      24,
      (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
      v1,
      *(_QWORD *)(a1 + 8),
      v15);
  if ( ExIsResourceAcquiredSharedLite(gpresUser) )
    v4 = 0;
  else
    EnterCrit(1LL, 0LL);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( (v8 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v8)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, &v17))
        && (v9 = *(_QWORD *)(v1 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v1) )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_DESKTOP>::ObjectLock<>::ObjectLock<>(&v19);
        LockRefactorStagingAssertOwned(gDomainDesktopLock);
        if ( GetDesktopView(ProcessWin32Process, v1) )
        {
LABEL_16:
          if ( v22 )
          {
            if ( v21 )
            {
              v6 = v19;
              if ( v19 )
              {
                if ( v20 )
                  tagDomLock::UnLockExclusive(v19);
                else
                  tagDomLock::UnLockShared(v19);
              }
            }
          }
          goto LABEL_17;
        }
        v11 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
        if ( v11 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v15 = 4096LL;
          v2 = MmMapViewOfSection(v9, v12, &v16, 0LL, 0LL, &v15, &v18, 2, 0x400000, 2);
          if ( v2 >= 0 )
          {
            v11[1] = v1;
            v11[2] = v16;
            *v11 = *(_QWORD *)(ProcessWin32Process + 704);
            *(_QWORD *)(ProcessWin32Process + 704) = v11;
            goto LABEL_16;
          }
          Win32FreePool(v11);
        }
        else
        {
          v2 = -1073741801;
        }
        if ( v22 && v21 && v19 )
        {
          if ( v20 )
            tagDomLock::UnLockExclusive(v19);
          else
            tagDomLock::UnLockShared(v19);
        }
      }
      else
      {
        v2 = -1073741790;
      }
    }
    else
    {
      v2 = -1073741811;
    }
    v13 = RtlNtStatusToDosError(v2);
    UserSetLastError(v13, v14);
  }
LABEL_17:
  if ( v4 )
    UserSessionSwitchLeaveCrit(v6);
  return (unsigned int)v2;
}
