/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00392B4
 * Callers:
 *     UserGetDesktopDC @ 0x1C0020670 (UserGetDesktopDC.c)
 *     GreCreateCompatibleDC @ 0x1C003B340 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Process @ 0x1C0092620 (UserDeleteW32Process.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00A21B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C00A9870 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Thread @ 0x1C011C830 (UserDeleteW32Thread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  ReEnterLeaveCrit *v1; // r14
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v20; // rsi
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  PERESOURCE *v31; // rdi
  int v32; // [rsp+30h] [rbp-99h] BYREF
  int v33; // [rsp+34h] [rbp-95h] BYREF
  int v34; // [rsp+38h] [rbp-91h] BYREF
  ReEnterLeaveCrit *v35; // [rsp+40h] [rbp-89h]
  __int64 v36; // [rsp+48h] [rbp-81h]
  unsigned __int8 v37; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+68h] [rbp-61h] BYREF
  int *v40; // [rsp+88h] [rbp-41h]
  __int64 v41; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+98h] [rbp-31h] BYREF
  int *v43; // [rsp+B8h] [rbp-11h]
  __int64 v44; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C8h] [rbp-1h] BYREF
  int *v46; // [rsp+E8h] [rbp+1Fh]
  __int64 v47; // [rsp+F0h] [rbp+27h]

  v1 = this;
  v35 = this;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)v1 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v37 = 1;
      v25 = PsGetCurrentThreadWin32Thread();
      v36 = v25;
      if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v26, v27) )
          {
            v33 = v37;
            v41 = 4LL;
            v40 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FF7,
              (int)&ActivityId,
              0,
              3u,
              &v39);
          }
        }
      }
    }
    else
    {
      v36 = 0LL;
    }
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
    {
      *(_DWORD *)(v36 + 44) = 1;
      *(GUID *)(v36 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, v11) )
        {
          v32 = v37;
          v44 = 4LL;
          v43 = &v32;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&ActivityId, 0, 3u, &v42);
          v28 = (unsigned int)dword_1C024BA90;
        }
        if ( (unsigned int)v28 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v28, v29) )
        {
          v34 = v37;
          v47 = 4LL;
          v46 = &v34;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&ActivityId, 0, 3u, &v45);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v22 = PsGetCurrentProcess(v13, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(v22),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( v15
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v15 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v15 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v32 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v32 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v20 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v20[2];
            v30 = *v20;
            v20[2] = 0LL;
            if ( !*(_DWORD *)(v30 + 8) )
            {
              v32 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v31 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v31 == (PERESOURCE *)&gDomainDummyLock )
            {
              v33 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v31);
            HMUnlockObject(*v20);
            tagDomLock::LockExclusive((tagDomLock *)v31);
            v20 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v1 = v35;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  return v1;
}
