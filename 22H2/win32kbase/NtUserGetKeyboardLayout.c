/*
 * XREFs of NtUserGetKeyboardLayout @ 0x1C003E7C0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C00374D0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00376C0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _GetKeyboardLayout @ 0x1C003EBD0 (_GetKeyboardLayout.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0127794 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(__int64 a1)
{
  struct tagTHREADINFO *v1; // r14
  unsigned int v2; // r13d
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v17; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v19; // ecx
  int v20; // r8d
  __int64 KeyboardLayout; // rbx
  __int64 v23; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  PVOID CurrentProcess; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v40; // r14
  __int64 v41; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  PERESOURCE *v53; // rdi
  int v54; // [rsp+38h] [rbp-D0h] BYREF
  int v55; // [rsp+3Ch] [rbp-CCh] BYREF
  int v56; // [rsp+40h] [rbp-C8h] BYREF
  int v57; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+50h] [rbp-B8h]
  unsigned __int8 v60; // [rsp+58h] [rbp-B0h]
  GUID v61; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+90h] [rbp-78h] BYREF
  int *v66; // [rsp+B0h] [rbp-58h]
  __int64 v67; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+C0h] [rbp-48h] BYREF
  int *v69; // [rsp+E0h] [rbp-28h]
  __int64 v70; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+F0h] [rbp-18h] BYREF
  int *v72; // [rsp+110h] [rbp+8h]
  int v73; // [rsp+118h] [rbp+10h]
  int v74; // [rsp+11Ch] [rbp+14h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+120h] [rbp+18h] BYREF
  int *v76; // [rsp+140h] [rbp+38h]
  int v77; // [rsp+148h] [rbp+40h]
  int v78; // [rsp+14Ch] [rbp+44h]

  v1 = 0LL;
  LODWORD(v58) = a1;
  v2 = a1;
  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v61 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v60 = 1;
      v47 = PsGetCurrentThreadWin32Thread(v23);
      v59 = v47;
      if ( v47 && (*(int *)(v47 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
      {
        EtwActivityIdControl(3u, &v61);
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v48, v49) )
          {
            v54 = v60;
            v70 = 4LL;
            v69 = &v54;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&v61, 0, 3u, &v68);
          }
        }
      }
    }
    else
    {
      v59 = 0LL;
    }
    while ( 1 )
    {
      v25 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v25 )
        v1 = *v25;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v27, v26);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v30, v29) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v1 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
    {
      *(_DWORD *)(v59 + 44) = 1;
      *(GUID *)(v59 + 28) = v61;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v31) )
        {
          v74 = 0;
          v56 = v60;
          v73 = 4;
          v72 = &v56;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&v61, 0, 3u, &v71);
          v50 = (unsigned int)dword_1C024AA90;
        }
        if ( (unsigned int)v50 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v50, v51) )
        {
          v78 = 0;
          v57 = v60;
          v77 = 4;
          v76 = &v57;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&v61, 0, 3u, &v75);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v1;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v41 = PsGetCurrentProcess(v33, v32),
          ProcessSessionId = PsGetProcessSessionIdEx(v41),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v35 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v35 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36);
      if ( v35
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v35 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v35 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v54 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v54 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v40 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v40[2];
            v52 = *v40;
            v40[2] = 0LL;
            if ( !*(_DWORD *)(v52 + 8) )
            {
              v54 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v53 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v53 == (PERESOURCE *)&gDomainDummyLock )
            {
              v55 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v53);
            HMUnlockObject(*v40);
            tagDomLock::LockExclusive(v53);
            v40 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v58;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 0;
      v44 = PsGetCurrentThreadWin32Thread(v3);
      v62 = v44;
      if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v45, v46) )
          {
            v55 = ActivityId_4;
            v67 = 4LL;
            v66 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217FD7,
              (int)&ActivityId_8,
              0,
              3u,
              &v65);
          }
        }
      }
    }
    else
    {
      v62 = 0LL;
    }
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v6 )
        v5 = *v6;
      v9 = (PVOID)PsGetCurrentProcess(v8, v7);
      if ( v9 )
      {
        if ( v9 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v5 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v62, v10, v12, v13);
    v15 = PsGetCurrentThreadWin32Thread(v14);
    if ( v15 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v17, 1);
      *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0249748 - 1) > 2u
        && (qword_1C0249730 & 0x200000010000000LL) != 0
        && (qword_1C0249738 & 0x200000010000000LL) == qword_1C0249738
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v19,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v20,
          v17,
          0,
          gullUserCritAcquireToken);
      }
      if ( v17 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v20,
            v17,
            1000000 * v17 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
  KeyboardLayout = GetKeyboardLayout(v2);
  UserSessionSwitchLeaveCrit();
  return KeyboardLayout;
}
