/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C0094C20
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0034BF8 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0094F64 (IsValidKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 i; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rax
  PERESOURCE *v38; // rdi
  int v39; // [rsp+38h] [rbp-99h] BYREF
  int v40; // [rsp+3Ch] [rbp-95h] BYREF
  int v41; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-8Dh]
  __int64 v43; // [rsp+50h] [rbp-81h]
  unsigned __int8 v44; // [rsp+58h] [rbp-79h]
  GUID ActivityId; // [rsp+5Ch] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+70h] [rbp-61h] BYREF
  int *v47; // [rsp+90h] [rbp-41h]
  __int64 v48; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-31h] BYREF
  int *v50; // [rsp+C0h] [rbp-11h]
  __int64 v51; // [rsp+C8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-1h] BYREF
  int *v53; // [rsp+F0h] [rbp+1Fh]
  __int64 v54; // [rsp+F8h] [rbp+27h]

  v42 = a1;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v35 = PsGetCurrentThreadWin32Thread(v4);
    v43 = v35;
    if ( v35 && (*(int *)(v35 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v40 = v44;
        v48 = 4LL;
        v47 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
  {
    *(_DWORD *)(v43 + 44) = 1;
    *(GUID *)(v43 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v39 = v44;
        v51 = 4LL;
        v50 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v49);
        v36 = dword_1C024AA90;
      }
      if ( v36 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v41 = v44;
        v54 = 4LL;
        v53 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v52);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v32 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v32),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v21 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v21[2];
          v37 = *v21;
          v21[2] = 0LL;
          if ( !*(_DWORD *)(v37 + 8) )
          {
            v39 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v38 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
          {
            v40 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*v21);
          tagDomLock::LockExclusive(v38);
          v21 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = v42;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v3)
    || (v3 & 0xF) == 1
    && (v31 = PsGetCurrentProcessWin32Process(v23), v22 = 511LL, ((v3 >> 8) & 0x1FF) != *(_WORD *)(v31 + 284)) )
  {
    UserSetLastError(87LL, v22);
LABEL_72:
    v27 = 0LL;
    goto LABEL_37;
  }
  v24 = *((_QWORD *)gptiCurrent + 53);
  v25 = *(_DWORD *)(v24 + 820);
  if ( (v25 & 0x400000) != 0 )
  {
    if ( !a2 )
      goto LABEL_72;
    if ( (v3 & 0xF) == 0 )
      goto LABEL_72;
    v26 = *(_DWORD *)(v24 + 280);
    if ( v26 != 18 )
      goto LABEL_72;
  }
  else
  {
    v26 = *(_DWORD *)(v24 + 280);
  }
  v27 = 1LL;
  *(_DWORD *)(v24 + 820) = v25 | 0x400000;
  if ( v26 != v3 )
  {
    v28 = *(_QWORD *)(v24 + 664);
    *(_DWORD *)(v24 + 280) = v3;
    if ( v28 )
    {
      for ( i = *(_QWORD *)(v28 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v24, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v24, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_37:
  UserSessionSwitchLeaveCrit();
  return v27;
}
