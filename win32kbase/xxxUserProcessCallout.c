__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  PEPROCESS *v5; // rdi
  struct _W32PROCESS *v6; // r15
  PDEVICE_OBJECT v7; // rcx
  char v8; // bl
  int inited; // esi
  bool v10; // zf
  int v11; // eax
  PACCESS_TOKEN v12; // r12
  unsigned __int64 v13; // rdx
  PVOID v14; // r8
  LARGE_INTEGER *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  LARGE_INTEGER *v21; // r14
  __int64 v22; // r15
  int v23; // r8d
  LARGE_INTEGER *v24; // r14
  struct _LIST_ENTRY *v25; // rcx
  struct tagTHREADINFO *v26; // rdi
  __int64 v27; // rdx
  struct tagTHREADINFO *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edx
  __int64 ProcessJob; // rax
  __int64 v34; // rdi
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v36; // rax
  PDEVICE_OBJECT v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // rdx
  PVOID Reserved; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v49; // rsi
  struct _LIST_ENTRY *QuadPart; // r12
  int v51; // r8d
  struct tagTHREADINFO *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ecx
  char *i; // rax
  char *v60; // rsi
  char *v61; // rdi
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 *v66; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v68; // rax
  __int64 *v69; // rdi
  int *v70; // [rsp+20h] [rbp-58h]
  int v71; // [rsp+40h] [rbp-38h] BYREF
  int v72; // [rsp+44h] [rbp-34h]
  LARGE_INTEGER *v73; // [rsp+48h] [rbp-30h]
  struct tagTHREADINFO **v74; // [rsp+50h] [rbp-28h]
  __int64 v75; // [rsp+58h] [rbp-20h] BYREF
  int v76; // [rsp+60h] [rbp-18h]
  int v77; // [rsp+64h] [rbp-14h]
  __int64 v78; // [rsp+68h] [rbp-10h]
  LARGE_INTEGER v80; // [rsp+C8h] [rbp+50h]
  struct tagTHREADINFO **v81; // [rsp+C8h] [rbp+50h]
  int v82; // [rsp+D0h] [rbp+58h] BYREF
  PVOID v83; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = a1;
  if ( !a2 )
  {
    v37 = WPP_GLOBAL_Control;
    v8 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    v38 = 32LL;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        32,
        (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v39 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v37, v39, Reserved, v38, v70);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v42 = SGDGetUserSessionState(v37, v39, Reserved, v38);
    v81 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v42 + 8));
    if ( v81 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v47 = PsGetCurrentThreadWin32Thread(v44, v43, v45, v46, v70);
        if ( v47 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v49 = PerformanceCounter.QuadPart - *(_QWORD *)(v47 + 8);
          QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v49, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          v10 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
          *(_QWORD *)(v47 + 8) = QuadPart;
          if ( !v10
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v51,
              v49,
              1000000 * v49 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v49 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)QuadPart - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v51,
                v49,
                1000 * v49 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = QuadPart;
          }
          *(_QWORD *)(v47 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          v4 = 0;
        }
        v6 = a1;
      }
      v52 = *v81;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v52;
        if ( v52 )
        {
          *((_DWORD *)v52 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v53);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v69 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v68 = *v69;
                v69[2] = 0LL;
                if ( !*(_DWORD *)(v68 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v69);
              }
            }
          }
        }
        goto LABEL_67;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_67:
    if ( gpepCSRSS && *(PVOID *)v6 == gpepCSRSS )
      v4 = 1;
    if ( *(_QWORD *)v6
      && PsGetProcessJob(*(_QWORD *)v6)
      && qword_1C02D6FF0
      && (int)qword_1C02D6FF0() >= 0
      && qword_1C02D6FF8 )
    {
      qword_1C02D6FF8(v6);
    }
    if ( (unsigned int)DestroyProcessInfo(v6) )
    {
      v58 = giheLast;
      for ( i = (char *)qword_1C02D0E08 + 32 * (unsigned int)giheLast; i > (char *)qword_1C02D0E08 && !i[24]; i -= 32 )
        giheLast = --v58;
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
      v60 = (char *)gpDispInfo + 24;
      v61 = (char *)*((_QWORD *)gpDispInfo + 3);
      if ( v61 )
      {
        do
        {
          if ( (*((_DWORD *)v61 + 16) & 0x400000) != 0 )
            DestroyCacheDC(v60, *((_QWORD *)v61 + 1));
          v62 = *(char **)v60;
          if ( v61 == *(char **)v60 )
          {
            v62 = *(char **)v61;
            v60 = v61;
          }
          v61 = v62;
        }
        while ( v62 );
      }
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
      ApiSetEditionShowSystemCursor();
      if ( v4 && *(_QWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 16048) )
      {
        v63 = SGDGetUserSessionState(v55, v54, v56, v57);
        InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(v63 + 16048));
      }
    }
    inited = 0;
    goto LABEL_85;
  }
  v7 = WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      31,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  inited = 1073741851;
  v10 = (*((_DWORD *)v6 + 3) & 0x8000) == 0;
  v11 = *((_DWORD *)v6 + 3) & 0x8000;
  v71 = 0;
  v72 = v11;
  v12 = 0LL;
  LODWORD(v83) = 0;
  v82 = 0;
  if ( v10 )
  {
    v12 = PsReferencePrimaryToken(*v5);
    if ( v12 )
      inited = UserProcessImmersiveType(
                 (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v5,
                 v12,
                 (enum _PROCESS_IMMERSIVE_TYPE *)&v71,
                 &v83,
                 &v82);
    else
      inited = -1073741700;
  }
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (v14 = WPP_MAIN_CB.Reserved,
        v13 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v13, v14, a4, v70);
    if ( v15 )
      v15[1] = KeQueryPerformanceCounter(0LL);
  }
  v16 = SGDGetUserSessionState(v7, v13, v14, a4);
  v74 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v16 + 8));
  if ( !v74 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_94:
    gptiCurrent = 0LL;
    goto LABEL_25;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v73 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, v70);
    v21 = v73;
    if ( v73 )
    {
      v80 = KeQueryPerformanceCounter(0LL);
      v22 = v80.QuadPart - v21[1].QuadPart;
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BD8 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v22, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BD8 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      v10 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      v24 = v73;
      v25 = (struct _LIST_ENTRY *)v80.QuadPart;
      v73[1] = v80;
      if ( !v10
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v23,
          v22,
          1000000 * v22 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
        v25 = (struct _LIST_ENTRY *)v80.QuadPart;
      }
      if ( v22 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (char *)v25 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v23,
            v22,
            1000 * v22 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
          v25 = (struct _LIST_ENTRY *)v80.QuadPart;
        }
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v25;
      }
      v6 = a1;
      v24[2].QuadPart = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v26 = *v74;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_94;
  gptiCurrent = v26;
  if ( v26 )
  {
    *((_DWORD *)v26 + 387) = 1;
    v64 = PsGetCurrentProcessWin32Process(v28);
    if ( v64 )
    {
      if ( *(_QWORD *)v64 )
      {
        if ( (*(_DWORD *)(v64 + 12) & 0x8000) != 0 )
        {
          v28 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v66 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v65 = *v66;
              v66[2] = 0LL;
              if ( !*(_DWORD *)(v65 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v66);
            }
          }
        }
      }
    }
  }
LABEL_25:
  if ( !v72 && inited >= 0 )
    inited = xxxInitProcessInfo(v6, v12, v71, (int)v83, v82);
  if ( v12 )
    PsDereferencePrimaryToken(v12);
  if ( inited < 0 )
  {
    DestroyProcessInfo(v6);
LABEL_85:
    UserSessionSwitchLeaveCrit(v55, v54, v56, v57);
    goto LABEL_30;
  }
  UserSessionSwitchLeaveCrit((__int64)v28, v27, v29, v30);
  if ( !inited )
  {
    ProcessJob = PsGetProcessJob(*(_QWORD *)v6);
    v34 = ProcessJob;
    if ( ProcessJob )
    {
      if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
      {
        v77 = 0;
        JobLock = (struct _ERESOURCE *)PsGetJobLock(v34);
        ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
        v78 = *(_QWORD *)v6;
        v75 = v34;
        v76 = 1;
        inited = UserJobCallout(&v75);
        v36 = (struct _ERESOURCE *)PsGetJobLock(v34);
        ExReleaseResourceAndLeaveCriticalRegion(v36);
      }
    }
  }
LABEL_30:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 33;
    LOBYTE(v31) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v31,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      33,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  }
  return (unsigned int)inited;
}
