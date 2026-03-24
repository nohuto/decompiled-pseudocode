/*
 * XREFs of UserThreadCallout @ 0x1C003DA00
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     IsGetAppCompatFlags2QuadWordSupported @ 0x1C003E0FC (IsGetAppCompatFlags2QuadWordSupported.c)
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C003FFAC (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GreCleanDC @ 0x1C0093490 (GreCleanDC.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  int ThreadInfo; // ebx
  __int64 v4; // rcx
  __int64 v5; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v7; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v9; // rcx
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v27; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v29; // rdi
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v45; // rsi
  __int64 v46; // rbx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  PERESOURCE *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  PERESOURCE *v67; // rbx
  __int64 *v68; // rsi
  __int64 v69; // rax
  PERESOURCE *v70; // rdi
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE *v73; // [rsp+38h] [rbp-C8h] BYREF
  int v74; // [rsp+40h] [rbp-C0h] BYREF
  int v75; // [rsp+44h] [rbp-BCh]
  int v76; // [rsp+48h] [rbp-B8h] BYREF
  int v77; // [rsp+4Ch] [rbp-B4h] BYREF
  PETHREAD Threada; // [rsp+50h] [rbp-B0h]
  __int64 v79; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v80; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v82; // [rsp+78h] [rbp-88h]
  unsigned __int8 v83; // [rsp+80h] [rbp-80h]
  GUID v84; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+98h] [rbp-68h] BYREF
  int *v86; // [rsp+B8h] [rbp-48h]
  __int64 v87; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+C8h] [rbp-38h] BYREF
  int *v89; // [rsp+E8h] [rbp-18h]
  __int64 v90; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+F8h] [rbp-8h] BYREF
  int *v92; // [rsp+118h] [rbp+18h]
  __int64 v93; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+128h] [rbp+28h] BYREF
  int *v95; // [rsp+148h] [rbp+48h]
  __int64 v96; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+158h] [rbp+58h] BYREF
  int *v98; // [rsp+178h] [rbp+78h]
  __int64 v99; // [rsp+180h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+188h] [rbp+88h] BYREF
  void **v101; // [rsp+1A8h] [rbp+A8h]
  __int64 v102; // [rsp+1B0h] [rbp+B0h]

  Threada = Thread;
  ThreadInfo = 0;
  v75 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          14,
          26,
          (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v80 = 1;
        v55 = PsGetCurrentThreadWin32Thread(v27);
        v79 = v55;
        if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024AA90 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v56, v57) )
            {
              v72 = v80;
              v87 = 4LL;
              v86 = &v72;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C024AA90,
                (int)&dword_1C0217FD7,
                (int)&ActivityId,
                0,
                3u,
                &v85);
            }
          }
        }
      }
      else
      {
        v79 = 0LL;
      }
      v29 = 0LL;
      while ( 1 )
      {
        v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v30 )
          v29 = *v30;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v32, v31);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS && v29 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v29 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v79 && (*(_DWORD *)(v79 + 48) || *(int *)(v79 + 24) > 0) )
      {
        *(_DWORD *)(v79 + 44) = 1;
        *(GUID *)(v79 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v36) )
          {
            v71 = v80;
            v90 = 4LL;
            v89 = &v71;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217F80,
              (int)&ActivityId,
              0,
              3u,
              &v88);
            v58 = (unsigned int)dword_1C024AA90;
          }
          if ( (unsigned int)v58 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v58, v59) )
          {
            v74 = v80;
            v93 = 4LL;
            v92 = &v74;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217FAD,
              (int)&ActivityId,
              0,
              3u,
              &v91);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v29;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v49 = PsGetCurrentProcess(v38, v37),
            ProcessSessionId = PsGetProcessSessionIdEx(v49),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v40 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v40 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v41);
        if ( v40
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v40 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v40 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
          v73 = DomainLockRef;
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          {
            v71 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          {
            v71 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v45 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v45[2];
              v60 = *v45;
              v45[2] = 0LL;
              if ( !*(_DWORD *)(v60 + 8) )
              {
                v71 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v61 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v61 == (PERESOURCE *)&gDomainDummyLock )
              {
                v72 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v61);
              HMUnlockObject(*v45);
              tagDomLock::LockExclusive(v61);
              v45 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            DomainLockRef = v73;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      v46 = W32GetThreadWin32Thread((__int64)Threada);
      *(_DWORD *)(v46 + 488) |= 1u;
      if ( qword_1C0256A28 )
        v47 = qword_1C0256A28();
      else
        v47 = -1073741637;
      if ( v47 >= 0 && qword_1C0256A30 )
        qword_1C0256A30();
      if ( gbVideoInitialized || !gbNonServiceSession )
        GreCleanDC(*(HDC *)(gpDispInfo + 56));
      v48 = *(_DWORD *)(v46 + 1232);
      if ( (v48 & 2) != 0 )
      {
        gfSwitchInProgress = 0;
        v48 = *(_DWORD *)(v46 + 1232);
      }
      if ( (v48 & 1) == 0 )
      {
        if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0256A20 )
          qword_1C0256A20(gptiCurrent);
        xxxDestroyThreadInfo();
      }
      UserSessionSwitchLeaveCrit();
      ThreadInfo = v75;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        14,
        25,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    if ( gbNoMorePowerCallouts )
      return 3221225473LL;
    if ( gbUserInitialized )
    {
      v5 = W32GetThreadWin32Thread((__int64)Thread);
      if ( v5 )
      {
        ThreadProcess = PsGetThreadProcess(Thread);
        v7 = ThreadProcess;
        if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
        {
          ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v7);
          *(_DWORD *)(v5 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
        }
        else
        {
          *(_DWORD *)(v5 + 632) = 0;
        }
      }
      v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
      if ( v10 )
        v10[1] = KeQueryPerformanceCounter(0LL);
      v84 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v83 = 1;
        v62 = PsGetCurrentThreadWin32Thread(v9);
        v82 = v62;
        if ( v62 && (*(int *)(v62 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
        {
          EtwActivityIdControl(3u, &v84);
          if ( (unsigned int)dword_1C024AA90 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v63, v64) )
            {
              v76 = v83;
              v96 = 4LL;
              v95 = &v76;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&v84, 0, 3u, &v94);
            }
          }
        }
      }
      else
      {
        v82 = 0LL;
      }
      v11 = 0LL;
      while ( 1 )
      {
        v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v12 )
          v11 = *v12;
        v15 = (PVOID)PsGetCurrentProcess(v14, v13);
        if ( v15 )
        {
          if ( v15 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v11 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v82 && (*(_DWORD *)(v82 + 48) || *(int *)(v82 + 24) > 0) )
      {
        *(_DWORD *)(v82 + 44) = 1;
        *(GUID *)(v82 + 28) = v84;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v18) )
          {
            v77 = v83;
            v99 = 4LL;
            v98 = &v77;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&v84, 0, 3u, &v97);
            v65 = (unsigned int)dword_1C024AA90;
          }
          if ( (unsigned int)v65 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v65, v66) )
          {
            LODWORD(v73) = v83;
            v102 = 4LL;
            v101 = (void **)&v73;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&v84, 0, 3u, &v100);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v52 = PsGetCurrentProcess(v20, v19),
            v53 = PsGetProcessSessionIdEx(v52),
            v54 = PsGetCurrentThreadProcess(),
            v53 == (unsigned int)PsGetProcessSessionIdEx(v54)) )
      {
        v21 = KeGetCurrentThread();
        v22 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v24 = (__int64 *)PsGetThreadWin32Thread(v21);
          if ( v24 )
            v22 = *v24;
        }
        v25 = PsGetCurrentProcessWin32Process(v23);
        if ( v22
          && v25
          && (*(_DWORD *)(v22 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v22 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v25 + 12) & 0x8000) != 0 )
        {
          v67 = (PERESOURCE *)GetDomainLockRef(12);
          v73 = v67;
          if ( v67 == (PERESOURCE *)&gDomainDummyLock )
          {
            v72 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*v67) == 1 )
          {
            v72 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v67);
          v68 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v68[2];
              v69 = *v68;
              v68[2] = 0LL;
              if ( !*(_DWORD *)(v69 + 8) )
              {
                v72 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v70 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v70 == (PERESOURCE *)&gDomainDummyLock )
              {
                v71 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v70);
              HMUnlockObject(*v68);
              tagDomLock::LockExclusive(v70);
              v68 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v67 = v73;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v67);
        }
      }
      ThreadInfo = xxxCreateThreadInfo(Threada);
      if ( ThreadInfo >= 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 && qword_1C0256A20 )
        qword_1C0256A20(gptiCurrent);
      UserSessionSwitchLeaveCrit();
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1232), 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      14,
      27,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  return (unsigned int)ThreadInfo;
}
