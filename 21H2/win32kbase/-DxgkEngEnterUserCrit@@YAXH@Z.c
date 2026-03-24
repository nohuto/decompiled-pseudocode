/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A2E70
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *v2; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r14
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v15; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v21; // r14
  struct tagTHREADINFO **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v36; // r14
  __int64 v37; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  PERESOURCE *v43; // rdi
  __int64 v44; // rax
  int v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  PERESOURCE *v48; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h]
  unsigned __int8 ActivityId_4; // [rsp+58h] [rbp-B0h]
  GUID ActivityId_8; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 v53; // [rsp+78h] [rbp-90h]
  GUID v54; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+90h] [rbp-78h] BYREF
  int *v56; // [rsp+B0h] [rbp-58h]
  __int64 v57; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C0h] [rbp-48h] BYREF
  int *v59; // [rsp+E0h] [rbp-28h]
  __int64 v60; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v62; // [rsp+110h] [rbp+8h]
  __int64 v63; // [rsp+118h] [rbp+10h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+120h] [rbp+18h] BYREF
  void **v65; // [rsp+140h] [rbp+38h]
  __int64 v66; // [rsp+148h] [rbp+40h]

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v40 = PsGetCurrentThreadWin32Thread(v19);
      v49 = v40;
      if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v49 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v46 = ActivityId_4;
          v57 = 4LL;
          v56 = &v46;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &ActivityId_8,
            0LL,
            3u,
            &v55);
        }
      }
    }
    else
    {
      v49 = 0LL;
    }
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v22 )
        v21 = *v22;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v24, v23);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v27, v26) == gpepCSRSS && v21 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v21 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v49 && (*(_DWORD *)(v49 + 48) || *(int *)(v49 + 24) > 0) )
    {
      *(_DWORD *)(v49 + 44) = 1;
      *(GUID *)(v49 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v45 = ActivityId_4;
          v60 = 4LL;
          v59 = &v45;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FA0,
            &ActivityId_8,
            0LL,
            3u,
            &v58);
          v41 = dword_1C024BA90;
        }
        if ( v41 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v47) = ActivityId_4;
          v63 = 4LL;
          v62 = &v47;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FCD,
            &ActivityId_8,
            0LL,
            3u,
            &v61);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v21;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v37 = PsGetCurrentProcess(v29, v28),
          ProcessSessionId = PsGetProcessSessionIdEx(v37),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v31 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v31 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
      if ( v31
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v31 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v31 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        v48 = DomainLockRef;
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v45 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v45 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v36 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v36[2];
            v42 = *v36;
            v36[2] = 0LL;
            if ( !*(_DWORD *)(v42 + 8) )
            {
              v45 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v43 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v43 == (PERESOURCE *)&gDomainDummyLock )
            {
              v46 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v43);
            HMUnlockObject(*v36);
            tagDomLock::LockExclusive(v43);
            v36 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          DomainLockRef = v48;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
  }
  else
  {
    v2 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v2 )
      v2[1] = KeQueryPerformanceCounter(0LL);
    v54 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v53 = 0;
      v44 = PsGetCurrentThreadWin32Thread(v1);
      v52 = v44;
      if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
      {
        EtwActivityIdControl(3u, &v54);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v48) = v53;
          v66 = 4LL;
          v65 = (void **)&v48;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &v54,
            0LL,
            3u,
            &v64);
        }
      }
    }
    else
    {
      v52 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v4 )
        v3 = *v4;
      v7 = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( v7 )
      {
        if ( v7 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v52, v8, v10, v11);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v15, 1);
      *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C024A738 - 1) > 2u
        && (qword_1C024A720 & 0x200000010000000LL) != 0
        && (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v17,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v18,
          v15,
          0,
          gullUserCritAcquireToken);
      }
      if ( v15 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v18,
            v15,
            1000000 * v15 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
  }
}
