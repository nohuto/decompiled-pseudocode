/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0068F8C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00688B0 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0026440 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0120B28 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FD3F4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13
  const struct _GUID *v6; // r14
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  void *v25; // rbx
  void *v26; // rbx
  LONGLONG v27; // rcx
  LONGLONG v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  PERESOURCE *DomainLockRef; // rdi
  __int64 *v36; // rsi
  __int64 v37; // rax
  PERESOURCE *v38; // rbx
  __int64 v39; // rcx
  LARGE_INTEGER *v40; // rbx
  __int64 v41; // rax
  struct tagTHREADINFO *v42; // rbx
  struct tagTHREADINFO **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rax
  struct _KTHREAD *v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rax
  PERESOURCE *v60; // rdi
  __int64 *v61; // rsi
  __int64 v62; // rax
  PERESOURCE *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  LARGE_INTEGER *v66; // rbx
  __int64 v67; // rax
  struct tagTHREADINFO *v68; // rbx
  struct tagTHREADINFO **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  PVOID v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  struct _KTHREAD *v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 *v84; // rax
  __int64 v85; // rax
  PERESOURCE *v86; // rbx
  __int64 *v87; // rsi
  __int64 v88; // rax
  PERESOURCE *v89; // rdi
  int v90; // [rsp+38h] [rbp-D0h] BYREF
  int v91; // [rsp+3Ch] [rbp-CCh] BYREF
  int v92; // [rsp+40h] [rbp-C8h] BYREF
  int v93; // [rsp+44h] [rbp-C4h] BYREF
  int v94; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+54h] [rbp-B4h] BYREF
  ULONG v96; // [rsp+58h] [rbp-B0h] BYREF
  int v97; // [rsp+5Ch] [rbp-ACh] BYREF
  int v98; // [rsp+60h] [rbp-A8h] BYREF
  int v99; // [rsp+64h] [rbp-A4h] BYREF
  int v100; // [rsp+68h] [rbp-A0h] BYREF
  int v101; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v102; // [rsp+70h] [rbp-98h] BYREF
  struct _GUID *v103; // [rsp+78h] [rbp-90h]
  unsigned __int64 v104; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-60h]
  unsigned __int8 v108; // [rsp+B0h] [rbp-58h]
  GUID ActivityId; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-40h]
  unsigned __int8 v111; // [rsp+D0h] [rbp-38h]
  GUID v112; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-20h]
  unsigned __int8 v114; // [rsp+F0h] [rbp-18h]
  GUID v115; // [rsp+F4h] [rbp-14h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+108h] [rbp+0h] BYREF
  int *v117; // [rsp+128h] [rbp+20h]
  __int64 v118; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+138h] [rbp+30h] BYREF
  int *v120; // [rsp+158h] [rbp+50h]
  __int64 v121; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+168h] [rbp+60h] BYREF
  int *v123; // [rsp+188h] [rbp+80h]
  __int64 v124; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+198h] [rbp+90h] BYREF
  int *v126; // [rsp+1B8h] [rbp+B0h]
  __int64 v127; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+1C8h] [rbp+C0h] BYREF
  int *v129; // [rsp+1E8h] [rbp+E0h]
  __int64 v130; // [rsp+1F0h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+1F8h] [rbp+F0h] BYREF
  int *v132; // [rsp+218h] [rbp+110h]
  __int64 v133; // [rsp+220h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+228h] [rbp+120h] BYREF
  int *v135; // [rsp+248h] [rbp+140h]
  __int64 v136; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+258h] [rbp+150h] BYREF
  int *v138; // [rsp+278h] [rbp+170h]
  __int64 v139; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+288h] [rbp+180h] BYREF
  __int64 *v141; // [rsp+2A8h] [rbp+1A0h]
  __int64 v142; // [rsp+2B0h] [rbp+1A8h]
  _BYTE KeyValueInformation[12]; // [rsp+2B8h] [rbp+1B0h] BYREF
  unsigned int v144; // [rsp+2C4h] [rbp+1BCh]
  _BYTE v145[12]; // [rsp+2D0h] [rbp+1C8h] BYREF
  unsigned int v146; // [rsp+2DCh] [rbp+1D4h]

  v104 = a4;
  v103 = a1;
  v4 = a4;
  v6 = a1;
  if ( a2 <= 1 )
  {
    v7 = 0;
    v8 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v108 = 1;
      v33 = PsGetCurrentThreadWin32Thread(v9);
      v107 = v33;
      if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v107 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v92 = v108;
          v118 = 4LL;
          v117 = &v92;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024BA90,
            (int)&dword_1C0218FF7,
            (int)&ActivityId,
            0,
            3u,
            &v116);
        }
      }
    }
    else
    {
      v107 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v107
      && (*(_DWORD *)(v107 + 48) || *(int *)(v107 + 24) > 0) )
    {
      *(_DWORD *)(v107 + 44) = 1;
      *(GUID *)(v107 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v93 = v108;
          v121 = 4LL;
          v120 = &v93;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024BA90,
            (int)&dword_1C0218FA0,
            (int)&ActivityId,
            0,
            3u,
            &v119);
          v34 = dword_1C024BA90;
        }
        if ( v34 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v94 = v108;
          v124 = 4LL;
          v123 = &v94;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024BA90,
            (int)&dword_1C0218FCD,
            (int)&ActivityId,
            0,
            3u,
            &v122);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v30 = PsGetCurrentProcess(v19, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(v30),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v21 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v21 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
      if ( v21
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        {
          v90 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        {
          v90 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v36 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v36[2];
            v37 = *v36;
            v36[2] = 0LL;
            if ( !*(_DWORD *)(v37 + 8) )
            {
              v90 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v38 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v38 == (PERESOURCE *)&gDomainDummyLock )
            {
              v91 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v38);
            HMUnlockObject(*v36);
            tagDomLock::LockExclusive(v38);
            v36 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = 0;
          v4 = v104;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    DestinationString = 0LL;
    ResultLength = 0;
    v91 = gdwPolicyFlags;
    while ( 1 )
    {
      v25 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v91);
      if ( !v25 )
        break;
      RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v25,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v7 = v144;
        v91 = 0;
      }
      else if ( !v91 )
      {
        v7 = 200;
      }
      ZwClose(v25);
      if ( !v91 )
        goto LABEL_29;
    }
    v7 = 200;
LABEL_29:
    ValueName = 0LL;
    v96 = 0;
    v90 = gdwPolicyFlags;
    while ( 1 )
    {
      v26 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v90);
      if ( !v26 )
        break;
      RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(v26, &ValueName, KeyValuePartialInformation, v145, 0x14u, &v96) >= 0 )
      {
        v8 = v146;
        v90 = 0;
      }
      else if ( !v90 )
      {
        v8 = 500;
      }
      ZwClose(v26);
      if ( !v90 )
        goto LABEL_35;
    }
    v8 = 500;
LABEL_35:
    UserSessionSwitchLeaveCrit();
    if ( v7 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v7;
      W32kEtwInputProcessDelayTimeoutMs = v7;
    }
    if ( v8 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v8;
    if ( a2 == 1 )
    {
      v27 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v28 = 3600 * gliQpcFreq.QuadPart;
      v29 = v27 / 1000000;
    }
    else
    {
      v28 = -1LL;
      v29 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v29;
    W32KEtwUserCritTelemetryThrottleQPC = v28;
    W32kEtwEnabledKeyword = v4;
    if ( ((v4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C024A738 - 1) <= 2u
       || (qword_1C024A720 & 0x8000000000040000uLL) == 0
       || (qword_1C024A728 & 0x8000000000040000uLL) != qword_1C024A728)
      && W32kEtwWaitCursorActiveType )
    {
      v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
      if ( v40 )
        v40[1] = KeQueryPerformanceCounter(0LL);
      v112 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v111 = 1;
        v41 = PsGetCurrentThreadWin32Thread(v39);
        v110 = v41;
        if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v110 + 48)) )
        {
          EtwActivityIdControl(3u, &v112);
          if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v97 = v111;
            v127 = 4LL;
            v126 = &v97;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v112, 0, 3u, &v125);
          }
        }
      }
      else
      {
        v110 = 0LL;
      }
      v42 = 0LL;
      while ( 1 )
      {
        v43 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v43 )
          v42 = *v43;
        v46 = (PVOID)PsGetCurrentProcess(v45, v44);
        if ( v46 )
        {
          if ( v46 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v48, v47) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v42 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v110
        && (*(_DWORD *)(v110 + 48) || *(int *)(v110 + 24) > 0) )
      {
        *(_DWORD *)(v110 + 44) = 1;
        *(GUID *)(v110 + 28) = v112;
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v98 = v111;
            v130 = 4LL;
            v129 = &v98;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v112, 0, 3u, &v128);
            v49 = dword_1C024BA90;
          }
          if ( v49 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
          {
            v99 = v111;
            v133 = 4LL;
            v132 = &v99;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v112, 0, 3u, &v131);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v42;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v52 = PsGetCurrentProcess(v51, v50),
            v53 = PsGetProcessSessionIdEx(v52),
            v54 = PsGetCurrentThreadProcess(),
            v53 == (unsigned int)PsGetProcessSessionIdEx(v54)) )
      {
        v55 = KeGetCurrentThread();
        v56 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v58 = (__int64 *)PsGetThreadWin32Thread(v55);
          if ( v58 )
            v56 = *v58;
        }
        v59 = PsGetCurrentProcessWin32Process(v57);
        if ( v56
          && v59
          && (*(_DWORD *)(v56 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v56 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(v59 + 12) & 0x8000) != 0 )
        {
          v60 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v60 == (PERESOURCE *)&gDomainDummyLock )
          {
            v90 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*v60) == 1 )
          {
            v90 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v60);
          v61 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v61[2];
              v62 = *v61;
              v61[2] = 0LL;
              if ( !*(_DWORD *)(v62 + 8) )
              {
                v90 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v63 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v63 == (PERESOURCE *)&gDomainDummyLock )
              {
                v91 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v63);
              HMUnlockObject(*v61);
              tagDomLock::LockExclusive(v63);
              v61 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v104;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v60);
        }
      }
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit();
    }
    v6 = v103;
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v66 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v64);
    if ( v66 )
      v66[1] = KeQueryPerformanceCounter(0LL);
    v115 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v114 = 1;
      v67 = PsGetCurrentThreadWin32Thread(v65);
      v113 = v67;
      if ( v67 && (*(int *)(v67 + 24) > 0 || *(_DWORD *)(v113 + 48)) )
      {
        EtwActivityIdControl(3u, &v115);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v100 = v114;
          v136 = 4LL;
          v135 = &v100;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v115, 0, 3u, &v134);
        }
      }
    }
    else
    {
      v113 = 0LL;
    }
    v68 = 0LL;
    while ( 1 )
    {
      v69 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v69 )
        v68 = *v69;
      v72 = (PVOID)PsGetCurrentProcess(v71, v70);
      if ( v72 )
      {
        if ( v72 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v74, v73) == gpepCSRSS && v68 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v68 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v113
      && (*(_DWORD *)(v113 + 48) || *(int *)(v113 + 24) > 0) )
    {
      *(_DWORD *)(v113 + 44) = 1;
      *(GUID *)(v113 + 28) = v115;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v101 = v114;
          v139 = 4LL;
          v138 = &v101;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v115, 0, 3u, &v137);
          v75 = dword_1C024BA90;
        }
        if ( v75 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v102) = v114;
          v142 = 4LL;
          v141 = &v102;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v115, 0, 3u, &v140);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v68;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v78 = PsGetCurrentProcess(v77, v76),
          v79 = PsGetProcessSessionIdEx(v78),
          v80 = PsGetCurrentThreadProcess(),
          v79 == (unsigned int)PsGetProcessSessionIdEx(v80)) )
    {
      v81 = KeGetCurrentThread();
      v82 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v84 = (__int64 *)PsGetThreadWin32Thread(v81);
        if ( v84 )
          v82 = *v84;
      }
      v85 = PsGetCurrentProcessWin32Process(v83);
      if ( v82
        && v85
        && (*(_DWORD *)(v82 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v82 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v85 + 12) & 0x8000) != 0 )
      {
        v86 = (PERESOURCE *)GetDomainLockRef(12);
        if ( v86 == (PERESOURCE *)&gDomainDummyLock )
        {
          v90 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
        }
        if ( ExIsResourceAcquiredExclusiveLite(*v86) == 1 )
        {
          v90 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v86);
        v87 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v87[2];
            v88 = *v87;
            v87[2] = 0LL;
            if ( !*(_DWORD *)(v88 + 8) )
            {
              v90 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
            }
            v89 = (PERESOURCE *)GetDomainLockRef(12);
            if ( v89 == (PERESOURCE *)&gDomainDummyLock )
            {
              v91 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v89);
            HMUnlockObject(*v87);
            tagDomLock::LockExclusive(v89);
            v87 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = v104;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v86);
      }
    }
    CitEtwEnableCallback(v6, 2u, v4);
    UserSessionSwitchLeaveCrit();
  }
}
