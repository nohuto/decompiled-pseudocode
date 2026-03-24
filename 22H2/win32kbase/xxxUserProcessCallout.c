/*
 * XREFs of xxxUserProcessCallout @ 0x1C003D2A0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     UserJobCallout @ 0x1C004FC24 (UserJobCallout.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C007614C (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00879F8 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxInitProcessInfo @ 0x1C00B8BC4 (xxxInitProcessInfo.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxUserProcessCallout(__int64 a1, PEPROCESS *a2)
{
  struct tagTHREADINFO *v2; // rdi
  PEPROCESS *v3; // rbx
  void *v5; // rcx
  int v6; // eax
  int inited; // r12d
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct _W32PROCESS *v23; // rdi
  int v24; // edx
  void *v26; // rcx
  __int64 v27; // rcx
  LARGE_INTEGER *v28; // rbx
  char v29; // r13
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _W32PROCESS *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // esi
  int v45; // eax
  int v46; // r8d
  int v47; // ecx
  char *i; // rax
  __int64 ProcessJob; // rax
  __int64 v50; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v52; // rax
  __int64 v53; // rdx
  int v54; // r8d
  __int64 *v55; // rdi
  __int64 *v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rax
  InputExtensibilityCallout *v59; // rcx
  __int64 v60; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v72; // rsi
  __int64 v73; // rax
  PERESOURCE *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // r9
  PERESOURCE *v80; // rbx
  __int64 v81; // rax
  PERESOURCE *v82; // rdi
  __int64 *v83; // rsi
  int v84; // [rsp+30h] [rbp-D0h] BYREF
  int v85; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v86; // [rsp+38h] [rbp-C8h] BYREF
  int v87; // [rsp+3Ch] [rbp-C4h] BYREF
  int v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+44h] [rbp-BCh] BYREF
  struct _W32PROCESS *v90; // [rsp+48h] [rbp-B8h]
  int v91; // [rsp+50h] [rbp-B0h] BYREF
  int v92; // [rsp+54h] [rbp-ACh]
  int v93; // [rsp+58h] [rbp-A8h] BYREF
  int v94; // [rsp+5Ch] [rbp-A4h] BYREF
  PERESOURCE *v95; // [rsp+60h] [rbp-A0h] BYREF
  PACCESS_TOKEN PrimaryToken; // [rsp+68h] [rbp-98h]
  __int64 v97; // [rsp+70h] [rbp-90h] BYREF
  int v98; // [rsp+78h] [rbp-88h]
  int v99; // [rsp+7Ch] [rbp-84h]
  __int64 v100; // [rsp+80h] [rbp-80h]
  __int64 v101; // [rsp+88h] [rbp-78h]
  unsigned __int8 v102; // [rsp+90h] [rbp-70h]
  GUID ActivityId; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v104; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v105; // [rsp+B0h] [rbp-50h]
  GUID v106; // [rsp+B4h] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+C8h] [rbp-38h] BYREF
  int *v108; // [rsp+E8h] [rbp-18h]
  __int64 v109; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+F8h] [rbp-8h] BYREF
  int *v111; // [rsp+118h] [rbp+18h]
  __int64 v112; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+128h] [rbp+28h] BYREF
  int *v114; // [rsp+148h] [rbp+48h]
  __int64 v115; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+158h] [rbp+58h] BYREF
  int *v117; // [rsp+178h] [rbp+78h]
  __int64 v118; // [rsp+180h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+188h] [rbp+88h] BYREF
  int *v120; // [rsp+1A8h] [rbp+A8h]
  __int64 v121; // [rsp+1B0h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+1B8h] [rbp+B8h] BYREF
  void **v123; // [rsp+1D8h] [rbp+D8h]
  __int64 v124; // [rsp+1E0h] [rbp+E0h]

  v2 = 0LL;
  v90 = (struct _W32PROCESS *)a1;
  v3 = a2;
  if ( a2 )
  {
    v5 = &WPP_658ee5f6f19939820aaea989098c75e5_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        30,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    v6 = *(_DWORD *)(a1 + 12);
    inited = 1073741851;
    v88 = 1073741851;
    v92 = v6 & 0x8000;
    v84 = 0;
    v86 = 0;
    PrimaryToken = 0LL;
    v89 = 0;
    if ( (v6 & 0x8000) == 0 )
    {
      PrimaryToken = PsReferencePrimaryToken(*v3);
      if ( PrimaryToken )
      {
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   PrimaryToken,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v84,
                   &v86,
                   &v89);
        v88 = inited;
      }
      else
      {
        inited = -1073741700;
        v88 = -1073741700;
      }
      v2 = 0LL;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v102 = 1;
      v66 = PsGetCurrentThreadWin32Thread(v8);
      v101 = v66;
      if ( v66 && (*(int *)(v66 + 24) > 0 || *(_DWORD *)(v101 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v67, v68) )
          {
            v87 = v102;
            v109 = 4LL;
            v108 = &v87;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217FD7,
              (int)&ActivityId,
              0,
              3u,
              &v107);
          }
        }
      }
    }
    else
    {
      v101 = 0LL;
    }
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v2 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v101
      && (*(_DWORD *)(v101 + 48) || *(int *)(v101 + 24) > 0) )
    {
      *(_DWORD *)(v101 + 44) = 1;
      *(GUID *)(v101 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, 0LL) )
        {
          v85 = v102;
          v112 = 4LL;
          v111 = &v85;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024AA90,
            (int)&dword_1C0217F80,
            (int)&ActivityId,
            v70,
            3u,
            &v110);
          v69 = (unsigned int)dword_1C024AA90;
        }
        if ( (unsigned int)v69 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v69, v70) )
        {
          v91 = v102;
          v115 = 4LL;
          v114 = &v91;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024AA90,
            (int)&dword_1C0217FAD,
            (int)&ActivityId,
            0,
            3u,
            &v113);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v60 = PsGetCurrentProcess(v17, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(v60),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v19 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v19 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
      if ( v19
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v19 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v19 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        v95 = DomainLockRef;
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v85 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v85 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v72 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v72[2];
            v73 = *v72;
            v72[2] = 0LL;
            if ( !*(_DWORD *)(v73 + 8) )
            {
              v85 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v74 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v74 == (PERESOURCE *)&gDomainDummyLock )
            {
              v87 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v74);
            HMUnlockObject(*v72);
            tagDomLock::LockExclusive(v74);
            v72 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          DomainLockRef = v95;
          inited = v88;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v23 = v90;
    if ( !v92 && inited >= 0 )
      inited = xxxInitProcessInfo(v90, PrimaryToken, v89);
    if ( PrimaryToken )
      PsDereferencePrimaryToken(PrimaryToken);
    if ( inited < 0 )
      DestroyProcessInfo(v23);
    UserSessionSwitchLeaveCrit();
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)v23);
      v50 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          v99 = 0;
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v50);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v100 = *(_QWORD *)v23;
          v97 = v50;
          v98 = 1;
          inited = UserJobCallout(&v97);
          v52 = (struct _ERESOURCE *)PsGetJobLock(v50);
          ExReleaseResourceAndLeaveCriticalRegion(v52);
        }
      }
    }
  }
  else
  {
    v26 = &WPP_658ee5f6f19939820aaea989098c75e5_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        31,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v26);
    if ( v28 )
      v28[1] = KeQueryPerformanceCounter(0LL);
    v106 = 0LL;
    v29 = 1;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v105 = 1;
      v75 = PsGetCurrentThreadWin32Thread(v27);
      v104 = v75;
      if ( v75 && (*(int *)(v75 + 24) > 0 || *(_DWORD *)(v104 + 48)) )
      {
        EtwActivityIdControl(3u, &v106);
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v76, v77) )
          {
            v93 = v105;
            v118 = 4LL;
            v117 = &v93;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&v106, 0, 3u, &v116);
          }
        }
      }
    }
    else
    {
      v104 = 0LL;
    }
    while ( 1 )
    {
      v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v30 )
        v2 = *v30;
      v33 = (PVOID)PsGetCurrentProcess(v32, v31);
      if ( v33 )
      {
        if ( v33 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    v36 = v90;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v104
      && (*(_DWORD *)(v104 + 48) || *(int *)(v104 + 24) > 0) )
    {
      *(_DWORD *)(v104 + 44) = 1;
      *(GUID *)(v104 + 28) = v106;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, 0LL) )
        {
          v94 = v105;
          v121 = 4LL;
          v120 = &v94;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&v106, v79, 3u, &v119);
          v78 = (unsigned int)dword_1C024AA90;
        }
        if ( (unsigned int)v78 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v78, v79) )
        {
          LODWORD(v95) = v105;
          v124 = 4LL;
          v123 = (void **)&v95;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&v106, 0, 3u, &v122);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v63 = PsGetCurrentProcess(v38, v37),
          v64 = PsGetProcessSessionIdEx(v63),
          v65 = PsGetCurrentThreadProcess(),
          v64 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
    {
      v39 = KeGetCurrentThread();
      v40 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v39);
        if ( v42 )
          v40 = *v42;
      }
      v43 = PsGetCurrentProcessWin32Process(v41);
      if ( v40
        && v43
        && (*(_DWORD *)(v40 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v40 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v43 + 12) & 0x8000) != 0 )
      {
        v80 = (PERESOURCE *)GetDomainLockRef(12);
        if ( v80 == (PERESOURCE *)&gDomainDummyLock )
        {
          v84 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*v80) == 1 )
        {
          v84 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v80);
        while ( 1 )
        {
          v83 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v81 = *v83;
          v83[2] = 0LL;
          if ( !*(_DWORD *)(v81 + 8) )
          {
            v84 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v82 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v82 == (PERESOURCE *)&gDomainDummyLock )
          {
            v86 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v82);
          HMUnlockObject(*v83);
          tagDomLock::LockExclusive(v82);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v80);
        v36 = v90;
      }
    }
    if ( gpepCSRSS && *(PVOID *)v36 == gpepCSRSS )
    {
      if ( (unsigned __int8)isInputVirtualizationEnabled() && gpkeIVThreadShutdown )
        KeSetEvent(gpkeIVThreadShutdown, 1, 0);
    }
    else
    {
      v29 = 0;
    }
    v44 = -1073741637;
    if ( *(_QWORD *)v36 && ((__int64 (*)(void))PsGetProcessJob)() )
    {
      v45 = qword_1C0256A58 ? qword_1C0256A58() : -1073741637;
      if ( v45 >= 0 && qword_1C0256A60 )
        qword_1C0256A60(v36);
    }
    if ( (unsigned int)DestroyProcessInfo(v36) )
    {
      v47 = giheLast;
      for ( i = (char *)qword_1C024FA38 + 32 * (unsigned int)giheLast; i > (char *)qword_1C024FA38 && !i[24]; i -= 32 )
        giheLast = --v47;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), (int)qword_1C024FA38, v46);
      v55 = (__int64 *)(gpDispInfo + 24);
      v56 = *(__int64 **)(gpDispInfo + 24);
      if ( v56 )
      {
        do
        {
          v57 = (__int64)v56;
          if ( (v56[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v55, v56[1]);
            v57 = *v55;
          }
          v58 = v57;
          if ( v56 == (__int64 *)v57 )
            v58 = *v56;
          else
            v56 = v55;
          v55 = v56;
          v56 = (__int64 *)v58;
        }
        while ( v58 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v53, v54);
      if ( qword_1C0255A80 )
        v44 = qword_1C0255A80();
      if ( v44 >= 0 && qword_1C0255A88 )
        qword_1C0255A88(0LL);
      if ( v29 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v59);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v24,
      14,
      32,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  return (unsigned int)inited;
}
