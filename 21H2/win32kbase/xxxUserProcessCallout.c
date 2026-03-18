/*
 * XREFs of xxxUserProcessCallout @ 0x1C00369B0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0099D90 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     ApiSetEditionShowSystemCursor @ 0x1C009E618 (ApiSetEditionShowSystemCursor.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C009E864 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     UserJobCallout @ 0x1C00B8BD0 (UserJobCallout.c)
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2, __int64 a3)
{
  PEPROCESS *v3; // rbx
  PDEVICE_OBJECT v5; // rcx
  char v6; // di
  int v7; // eax
  int inited; // esi
  PACCESS_TOKEN v9; // r15
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  struct tagTHREADINFO **v13; // rbx
  struct tagTHREADINFO *v14; // rbx
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _W32PROCESS *v20; // r14
  int v21; // edx
  int v22; // r8d
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  struct tagTHREADINFO **v28; // rbx
  struct tagTHREADINFO *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  char v35; // r14
  __int64 v36; // rdx
  InputExtensibilityCallout *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  char *i; // rax
  __int64 v42; // rdx
  int v43; // r8d
  __int64 **v44; // rsi
  __int64 *v45; // rbx
  __int64 *v46; // rcx
  __int64 ProcessJob; // rax
  __int64 v48; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v50; // rax
  LARGE_INTEGER *v51; // rax
  LARGE_INTEGER *v52; // rbx
  int v53; // eax
  int v54; // eax
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v56; // rax
  __int64 v57; // rcx
  struct tagKERNELHANDLETABLEENTRY *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  struct tagKERNELHANDLETABLEENTRY *v67; // rax
  __int64 v68; // rcx
  struct tagKERNELHANDLETABLEENTRY *v69; // rbx
  int v70; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v71; // [rsp+44h] [rbp-BCh] BYREF
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v73; // [rsp+4Ch] [rbp-B4h] BYREF
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  struct _W32PROCESS *v75; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+60h] [rbp-A0h] BYREF
  int v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+6Ch] [rbp-94h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  __int64 v80; // [rsp+78h] [rbp-88h] BYREF
  int v81; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+98h] [rbp-68h] BYREF
  BOOL *v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+C8h] [rbp-38h] BYREF
  BOOL *v87; // [rsp+E8h] [rbp-18h]
  __int64 v88; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+F8h] [rbp-8h] BYREF
  BOOL *v90; // [rsp+118h] [rbp+18h]
  __int64 v91; // [rsp+120h] [rbp+20h]

  v75 = a1;
  v3 = a2;
  if ( a2 )
  {
    v5 = WPP_GLOBAL_Control;
    v6 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        30,
        (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
    v7 = *((_DWORD *)a1 + 3);
    v74 = 0;
    v73 = 0;
    v70 = v7 & 0x8000;
    inited = 1073741851;
    v9 = 0LL;
    v72 = 0;
    if ( (v7 & 0x8000) == 0 )
    {
      v9 = PsReferencePrimaryToken(*v3);
      if ( v9 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   v9,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v74,
                   &v73,
                   &v72);
      else
        inited = -1073741700;
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, a2, a3);
      v80 = CurrentThreadWin32Thread;
    }
    else
    {
      CurrentThreadWin32Thread = 0LL;
      v80 = 0LL;
    }
    v81 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v80 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v85 = 4LL;
        v71 = v81 == 1;
        v84 = &v71;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v83);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v12 = W32kEtwEnabledKeyword, v11 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v11 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v11, v12);
      if ( v51 )
        v51[1] = KeQueryPerformanceCounter(0LL);
    }
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v13 )
    {
      v14 = *v13;
      v15 = IsThreadCrossSessionAttached();
      v19 = 0LL;
      if ( v15 )
        v14 = 0LL;
      if ( v80 )
      {
        v17 = *(unsigned int *)(v80 + 24);
        if ( *(_DWORD *)(v80 + 48) || (int)v17 > 0 )
        {
          *(_DWORD *)(v80 + 44) = 1;
          *(GUID *)(v80 + 28) = ActivityId;
          v18 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v53 = v19;
              v88 = 4LL;
              LOBYTE(v53) = v81 == 1;
              v71 = v53;
              v87 = &v71;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                v19,
                3u,
                &v86);
              v18 = (unsigned int)dword_1C028EE70;
              v19 = 0LL;
            }
            if ( (unsigned int)v18 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v54 = v19;
              v91 = 4LL;
              LOBYTE(v54) = v81 == 1;
              v71 = v54;
              v90 = &v71;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v89);
            }
          }
        }
      }
      gptiCurrent = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v17 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v58 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v56 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v57 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v56;
                if ( !*(_DWORD *)(v57 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v16, v18);
                  v57 = *(_QWORD *)v58;
                }
                HMUnlockObject(v57, v16, v18, v19);
              }
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v80);
      gptiCurrent = 0LL;
    }
    v20 = v75;
    if ( !v70 && inited >= 0 )
      inited = xxxInitProcessInfo(v75, v9, v72);
    if ( v9 )
      PsDereferencePrimaryToken(v9);
    if ( inited < 0 )
    {
      DestroyProcessInfo(v20);
      UserSessionSwitchLeaveCrit(v60, v59, v61, v62);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
      if ( !inited )
      {
        ProcessJob = PsGetProcessJob(*(_QWORD *)v20);
        v48 = ProcessJob;
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
          {
            v78 = 0;
            JobLock = (struct _ERESOURCE *)PsGetJobLock(v48);
            ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
            v79 = *(_QWORD *)v20;
            v76 = v48;
            v77 = 1;
            inited = UserJobCallout(&v76);
            v50 = (struct _ERESOURCE *)PsGetJobLock(v48);
            ExReleaseResourceAndLeaveCriticalRegion(v50);
          }
        }
      }
    }
  }
  else
  {
    v24 = WPP_GLOBAL_Control;
    v6 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        31,
        (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v25 = PsGetCurrentThreadWin32Thread(v24, a2, a3);
    else
      v25 = 0LL;
    v80 = v25;
    v81 = 1;
    if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v80 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v91 = 4LL;
        v70 = v81 == 1;
        v90 = &v70;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v89);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v27 = W32kEtwEnabledKeyword, v26 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v26 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v52 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24, v26, v27);
      if ( v52 )
        v52[1] = KeQueryPerformanceCounter(0LL);
    }
    v28 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v28 )
    {
      v29 = *v28;
      if ( IsThreadCrossSessionAttached() )
        v29 = 0LL;
      if ( v80 )
      {
        v31 = *(unsigned int *)(v80 + 24);
        if ( *(_DWORD *)(v80 + 48) || (int)v31 > 0 )
        {
          *(_DWORD *)(v80 + 44) = 1;
          *(GUID *)(v80 + 28) = ActivityId;
          v32 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v88 = 4LL;
              v70 = v81 == 1;
              v87 = &v70;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD22,
                (int)&ActivityId,
                0,
                3u,
                &v86);
              v32 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v32 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v85 = 4LL;
              v70 = v81 == 1;
              v84 = &v70;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C028EE70,
                (int)&dword_1C025AD4F,
                (int)&ActivityId,
                0,
                3u,
                &v83);
            }
          }
        }
      }
      gptiCurrent = v29;
      if ( v29 )
      {
        *((_DWORD *)v29 + 377) = 1;
        v63 = PsGetCurrentProcessWin32Process(v31, v30, v32, v33);
        if ( v63 )
        {
          if ( (*(_DWORD *)(v63 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v69 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v67 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v68 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v67;
              if ( !*(_DWORD *)(v68 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v64, v65);
                v68 = *(_QWORD *)v69;
              }
              HMUnlockObject(v68, v64, v65, v66);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v80);
      gptiCurrent = 0LL;
    }
    if ( gpepCSRSS && (v34 = *(_QWORD *)a1, *(PVOID *)a1 == gpepCSRSS) )
    {
      v35 = 1;
    }
    else
    {
      v34 = *(_QWORD *)a1;
      v35 = 0;
    }
    if ( v34
      && ((__int64 (*)(void))PsGetProcessJob)()
      && qword_1C029C7A8
      && (int)qword_1C029C7A8() >= 0
      && qword_1C029C7B0 )
    {
      qword_1C029C7B0(a1);
    }
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v40 = giheLast;
      for ( i = (char *)qword_1C0294B68 + 32 * (unsigned int)giheLast; i > (char *)qword_1C0294B68 && !i[24]; i -= 32 )
        giheLast = --v40;
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), (__int64)qword_1C0294B68, v38);
      v44 = (__int64 **)((char *)gpDispInfo + 24);
      v45 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
      if ( v45 )
      {
        do
        {
          v46 = v45;
          if ( (v45[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v44);
            v46 = *v44;
          }
          if ( v45 == v46 )
          {
            v46 = (__int64 *)*v45;
            v44 = (__int64 **)v45;
          }
          v45 = v46;
        }
        while ( v46 );
      }
      GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v42, v43);
      ApiSetEditionShowSystemCursor();
      if ( v35 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v37);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit((__int64)v37, v36, v38, v39);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = v6;
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v22,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      32,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  }
  return (unsigned int)inited;
}
