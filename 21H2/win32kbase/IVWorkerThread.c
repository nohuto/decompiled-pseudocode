/*
 * XREFs of IVWorkerThread @ 0x1C01F01F0
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00B9950 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SetThreadBasePriority @ 0x1C0054860 (SetThreadBasePriority.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IVWorkerThread(struct _KEVENT **a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  LARGE_INTEGER *v7; // rbx
  struct tagTHREADINFO **v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct tagKERNELHANDLETABLEENTRY *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  struct _KEVENT *v18; // rsi
  struct _KEVENT *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  LARGE_INTEGER *v29; // rbx
  struct tagTHREADINFO **v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rax
  struct tagKERNELHANDLETABLEENTRY *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rbx
  __int64 v36; // rax
  char *v37; // rsi
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  LARGE_INTEGER *v40; // rbx
  struct tagTHREADINFO **v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  struct tagKERNELHANDLETABLEENTRY *v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // [rsp+38h] [rbp-D0h] BYREF
  void *v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h]
  void (__fastcall *v59)(__int64, int); // [rsp+58h] [rbp-B0h]
  char (__fastcall *v60)(const void *, __int64, int, struct tagRECT *); // [rsp+60h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  int v62; // [rsp+70h] [rbp-98h]
  char v63; // [rsp+74h] [rbp-94h]
  __int64 v64; // [rsp+78h] [rbp-90h] BYREF
  int ActivityId_4; // [rsp+80h] [rbp-88h]
  GUID ActivityId_8; // [rsp+84h] [rbp-84h] BYREF
  __int64 v67; // [rsp+98h] [rbp-70h] BYREF
  int v68; // [rsp+A0h] [rbp-68h]
  GUID v69; // [rsp+A4h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v71; // [rsp+D8h] [rbp-30h]
  __int64 v72; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v80; // [rsp+168h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v83; // [rsp+198h] [rbp+90h]
  __int64 v84; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v86; // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  else
    CurrentThreadWin32Thread = 0LL;
  v64 = CurrentThreadWin32Thread;
  ActivityId_4 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v64 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId_8);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v75 = 4LL;
      LODWORD(v55) = ActivityId_4 == 1;
      v74 = &v55;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId_8,
        0LL,
        3u,
        &v73);
    }
  }
  v5 = 0x8000002010000000uLL;
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & v5) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (v5 & qword_1C028DB20) != 0
    && (v5 & qword_1C028DB28) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v7 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v6, v5);
    if ( v7 )
      v7[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v9 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v9 = 0LL;
    if ( v64 )
    {
      v10 = *(unsigned int *)(v64 + 24);
      if ( *(_DWORD *)(v64 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v64 + 44) = 1;
        *(GUID *)(v64 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v78 = 4LL;
            LODWORD(v55) = ActivityId_4 == 1;
            v77 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId_8,
              0LL,
              3u,
              &v76);
            v11 = dword_1C028EE70;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v72 = 4LL;
            LODWORD(v55) = ActivityId_4 == 1;
            v71 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId_8,
              0LL,
              3u,
              &v70);
          }
        }
      }
    }
    gptiCurrent = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v15 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v16 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v15;
            if ( !*(_DWORD *)(v16 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
              v16 = *v17;
            }
            HMUnlockObject(v16);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v64);
    gptiCurrent = 0LL;
  }
  *((_DWORD *)gptiCurrent + 315) |= 0x10u;
  v18 = *a1;
  v19 = a1[1];
  v56 = v18;
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  gpkeIVThreadShutdown = v19;
  KeSetEvent(v18, 1, 0);
  v57 = 0LL;
  v59 = ivOnChildPartitionConnected;
  LODWORD(v58) = 3;
  v60 = ivOnNonInputPacketReceived;
  qword_1C02A05E0 = (__int64)&v57;
  v61 = 0LL;
  v62 = 0;
  v63 = 0;
  CIVChannel::Initialize((CIVChannel *)&v57);
  while ( 1 )
  {
    UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
    if ( !KeWaitForSingleObject(v19, Executive, 0, 0, 0LL) )
      break;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
    else
      v27 = 0LL;
    v64 = v27;
    ActivityId_4 = 1;
    if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v72 = 4LL;
        LODWORD(v55) = ActivityId_4 == 1;
        v71 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId_8,
          0LL,
          3u,
          &v70);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v28 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v28, v26);
      if ( v29 )
        v29[1] = KeQueryPerformanceCounter(0LL);
    }
    v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v30 )
    {
      v31 = *v30;
      if ( IsThreadCrossSessionAttached() )
        v31 = 0LL;
      if ( v64 )
      {
        v21 = *(unsigned int *)(v64 + 24);
        if ( *(_DWORD *)(v64 + 48) || (int)v21 > 0 )
        {
          *(_DWORD *)(v64 + 44) = 1;
          *(GUID *)(v64 + 28) = ActivityId_8;
          v22 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v72 = 4LL;
              LODWORD(v55) = ActivityId_4 == 1;
              v71 = &v55;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId_8,
                0LL,
                3u,
                &v70);
              v22 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v22 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v72 = 4LL;
              LODWORD(v55) = ActivityId_4 == 1;
              v71 = &v55;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId_8,
                0LL,
                3u,
                &v70);
            }
          }
        }
      }
      gptiCurrent = v31;
      if ( v31 )
      {
        *((_DWORD *)v31 + 377) = 1;
        v32 = PsGetCurrentProcessWin32Process(v21);
        if ( v32 )
        {
          if ( (*(_DWORD *)(v32 + 12) & 0x8000) != 0 )
          {
            v21 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v35 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v33 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                v34 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                gpSharedUserCritDeferredUnlockListHead = v33;
                if ( !*(_DWORD *)(v34 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v20, v22);
                  v34 = *v35;
                }
                HMUnlockObject(v34);
              }
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v64);
      gptiCurrent = 0LL;
    }
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    v36 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
  else
    v36 = 0LL;
  v37 = (char *)v56;
  v67 = v36;
  v68 = 1;
  if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v67 + 48)) )
  {
    EtwActivityIdControl(3u, &v69);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v81 = 4LL;
      LODWORD(v55) = v68 == 1;
      v80 = &v55;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &v69,
        0LL,
        3u,
        &v79);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v38 = W32kEtwEnabledKeyword, v39 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v38, v39);
    if ( v40 )
      v40[1] = KeQueryPerformanceCounter(0LL);
  }
  v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v41 )
  {
    v42 = *v41;
    if ( IsThreadCrossSessionAttached() )
      v42 = 0LL;
    if ( v67 )
    {
      v43 = *(unsigned int *)(v67 + 24);
      if ( *(_DWORD *)(v67 + 48) || (int)v43 > 0 )
      {
        *(_DWORD *)(v67 + 44) = 1;
        *(GUID *)(v67 + 28) = v69;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v84 = 4LL;
            LODWORD(v55) = v68 == 1;
            v83 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &v69,
              0LL,
              3u,
              &v82);
            v44 = dword_1C028EE70;
          }
          if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v87 = 4LL;
            LODWORD(v55) = v68 == 1;
            v86 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &v69,
              0LL,
              3u,
              &v85);
          }
        }
      }
    }
    gptiCurrent = v42;
    if ( v42 )
    {
      *((_DWORD *)v42 + 377) = 1;
      v45 = PsGetCurrentProcessWin32Process(v43);
      if ( v45 )
      {
        if ( (*(_DWORD *)(v45 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v50 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v48 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v49 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v48;
            if ( !*(_DWORD *)(v49 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v46, v47);
              v49 = *v50;
            }
            HMUnlockObject(v49);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v67);
    gptiCurrent = 0LL;
  }
  CIVChannel::Uninitialize((CIVChannel *)&v57);
  gpkeIVThreadShutdown = 0LL;
  gpIVThread = 0LL;
  if ( v37 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v37);
  if ( v19 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v19);
  UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
}
