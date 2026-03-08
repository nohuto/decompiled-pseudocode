/*
 * XREFs of IVWorkerThread @ 0x1C022118C
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C008E630 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     SetThreadBasePriority @ 0x1C009ADB0 (SetThreadBasePriority.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C022858C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C022970C (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall IVWorkerThread(struct _KEVENT **a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v15; // rbx
  __int64 v16; // r8
  bool v17; // zf
  struct tagTHREADINFO *v18; // rbx
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  struct _KEVENT *v23; // r12
  struct _KEVENT *v24; // rbp
  __int64 v25; // rdx
  struct tagTHREADINFO *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID v32; // rdx
  LARGE_INTEGER *v33; // rbx
  __int64 v34; // rax
  struct tagTHREADINFO **v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  LARGE_INTEGER v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // r8
  struct tagTHREADINFO *v44; // rbx
  __int64 v45; // rax
  __int64 *i; // rbx
  __int64 v47; // rax
  PVOID v48; // rdx
  LARGE_INTEGER *v49; // rbx
  __int64 v50; // rax
  struct tagTHREADINFO **v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  LARGE_INTEGER v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // r8
  struct tagTHREADINFO *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-78h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-78h]
  PLARGE_INTEGER Timeoutb; // [rsp+20h] [rbp-78h]
  PLARGE_INTEGER Timeoutc; // [rsp+20h] [rbp-78h]
  PLARGE_INTEGER Timeoutd; // [rsp+20h] [rbp-78h]
  __int64 v74; // [rsp+30h] [rbp-68h] BYREF
  int v75; // [rsp+38h] [rbp-60h]
  void (__fastcall *v76)(__int64, __int64, __int64, __int64); // [rsp+40h] [rbp-58h]
  char (__fastcall *v77)(const void *, __int64, int, struct tagRECT *); // [rsp+48h] [rbp-50h]
  __int64 v78; // [rsp+50h] [rbp-48h]
  int v79; // [rsp+58h] [rbp-40h]
  char v80; // [rsp+5Ch] [rbp-3Ch]
  char *v81; // [rsp+A8h] [rbp+10h]

  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, a3, a4, Timeout);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = SGDGetUserSessionState(a1, Reserved, a3, a4);
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v7 + 8));
  if ( v8 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v13 = PsGetCurrentThreadWin32Thread(v10, v9, v11, v12, Timeout);
      if ( v13 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v15, 0);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
        v17 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
        if ( !v17
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(Timeouta) = 1000000 * v15 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritEvent,
            v16,
            v15,
            Timeouta,
            gullUserCritAcquireToken);
        }
        if ( v15 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(Timeouta) = 1000 * v15 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v16,
              v15,
              Timeouta,
              gullUserCritAcquireToken);
          }
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v18 = *v8;
    if ( !IsThreadCrossSessionAttached() )
    {
      gptiCurrent = v18;
      if ( v18 )
      {
        *((_DWORD *)v18 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v21 = *v22;
              v22[2] = 0LL;
              if ( !*(_DWORD *)(v21 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v22);
            }
          }
        }
      }
      goto LABEL_46;
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
  }
  gptiCurrent = 0LL;
LABEL_46:
  *((_DWORD *)gptiCurrent + 319) |= 0x10u;
  v23 = *a1;
  v24 = a1[1];
  v81 = (char *)*a1;
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  gpkeIVThreadShutdown = v24;
  KeSetEvent(v23, 1, 0);
  v74 = 0LL;
  v76 = ivOnChildPartitionConnected;
  v75 = 3;
  v77 = ivOnNonInputPacketReceived;
  qword_1C02D8798 = (__int64)&v74;
  v78 = 0LL;
  v79 = 0;
  v80 = 0;
  CIVChannel::Initialize((CIVChannel *)&v74);
  while ( 1 )
  {
    UserSessionSwitchLeaveCrit((__int64)v26, v25, v27, v28);
    if ( !KeWaitForSingleObject(v24, Executive, 0, 0, 0LL) )
      break;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v32 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v32, v30, v31, Timeoutb);
      if ( v33 )
        v33[1] = KeQueryPerformanceCounter(0LL);
    }
    v34 = SGDGetUserSessionState(v29, v32, v30, v31);
    v35 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v34 + 8));
    if ( !v35 )
    {
      EtwTraceAcquiredExclusiveUserCrit();
      goto LABEL_62;
    }
    if ( IsEtwUserCritEnabled() )
    {
      v40 = PsGetCurrentThreadWin32Thread(v37, v36, v38, v39, Timeoutb);
      if ( v40 )
      {
        v41 = KeQueryPerformanceCounter(0LL);
        v42 = v41.QuadPart - *(_QWORD *)(v40 + 8);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v42, 0);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
        v17 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v40 + 8) = v41;
        if ( !v17
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(Timeoutc) = 1000000 * v42 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritEvent,
            v43,
            v42,
            Timeoutc,
            gullUserCritAcquireToken);
        }
        if ( v42 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(v41.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(Timeoutc) = 1000 * v42 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v43,
              v42,
              Timeoutc,
              gullUserCritAcquireToken);
          }
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v41.QuadPart;
        }
        *(_QWORD *)(v40 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v44 = *v35;
    if ( IsThreadCrossSessionAttached() )
    {
LABEL_62:
      gptiCurrent = 0LL;
    }
    else
    {
      gptiCurrent = v44;
      if ( v44 )
      {
        *((_DWORD *)v44 + 387) = 1;
        v45 = PsGetCurrentProcessWin32Process(v26);
        if ( v45 )
        {
          if ( *(_QWORD *)v45 )
          {
            if ( (*(_DWORD *)(v45 + 12) & 0x8000) != 0 )
            {
              v26 = gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      gpSharedUserCritDeferredUnlockListHead;
                      i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
                {
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
                  v47 = *i;
                  i[2] = 0LL;
                  if ( !*(_DWORD *)(v47 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                  HMUnlockObject(*i);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (v48 = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || (v30 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    v49 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v48, v30, v31, Timeoutb);
    if ( v49 )
      v49[1] = KeQueryPerformanceCounter(0LL);
  }
  v50 = SGDGetUserSessionState(v29, v48, v30, v31);
  v51 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v50 + 8));
  if ( !v51 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
    goto LABEL_107;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v56 = PsGetCurrentThreadWin32Thread(v53, v52, v54, v55, Timeoutb);
    if ( v56 )
    {
      v57 = KeQueryPerformanceCounter(0LL);
      v58 = v57.QuadPart - *(_QWORD *)(v56 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v58, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      *(LARGE_INTEGER *)(v56 + 8) = v57;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(Timeoutd) = 1000000 * v58 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritEvent,
          v59,
          v58,
          Timeoutd,
          gullUserCritAcquireToken);
      }
      if ( v58 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(v57.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        {
          LODWORD(Timeoutd) = 1000 * v58 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v59,
            v58,
            Timeoutd,
            gullUserCritAcquireToken);
        }
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v57.QuadPart;
      }
      *(_QWORD *)(v56 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v60 = *v51;
  if ( IsThreadCrossSessionAttached() )
  {
LABEL_107:
    gptiCurrent = 0LL;
  }
  else
  {
    gptiCurrent = v60;
    if ( v60 )
    {
      *((_DWORD *)v60 + 387) = 1;
      v62 = PsGetCurrentProcessWin32Process(v61);
      if ( v62 )
      {
        if ( *(_QWORD *)v62
          && (*(_DWORD *)(v62 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v64 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v63 = *v64;
            v64[2] = 0LL;
            if ( !*(_DWORD *)(v63 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v64);
          }
        }
      }
    }
  }
  CIVChannel::Uninitialize((CIVChannel *)&v74);
  gpkeIVThreadShutdown = 0LL;
  gpIVThread = 0LL;
  if ( v81 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v81);
  if ( v24 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v24);
  UserSessionSwitchLeaveCrit(v66, v65, v67, v68);
}
