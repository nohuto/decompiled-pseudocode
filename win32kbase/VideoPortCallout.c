void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned __int64 v4; // r8
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
  int v16; // r8d
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  PVOID v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  LARGE_INTEGER *v31; // rbx
  __int64 v32; // rax
  struct tagTHREADINFO **v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  LARGE_INTEGER v39; // r14
  __int64 v40; // rbx
  int v41; // r8d
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h]
  PVOID v54[2]; // [rsp+50h] [rbp-10h] BYREF
  int v56; // [rsp+B0h] [rbp+50h] BYREF

  v52 = a1;
  v1 = a1;
  v56 = 0;
  Object = (PVOID)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !Object )
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
    return;
  }
  if ( *(_BYTE *)(v52 + 31) && (!gbVideoInitialized || !CsrApiPort) )
  {
    v54[0] = gpevtVideoInitialized;
    v54[1] = gpevtQueueReadyForCallout;
    KeWaitForMultipleObjects(2u, v54, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
  }
  if ( gbVideoInitialized )
  {
    if ( !CsrApiPort )
    {
      v19 = -1073741816;
      goto LABEL_25;
    }
    v4 = 0x8000002010000000uLL;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & v4) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (v4 & qword_1C02C4050) != 0
      && (v4 & qword_1C02C4058) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, Reserved, v4, v3, Timeout);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v7 = SGDGetUserSessionState(v2, Reserved, v4, v3);
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
          *(LARGE_INTEGER *)(v13 + 8) = PerformanceCounter;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v16,
              v15,
              1000000 * v15 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v15 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v16,
                v15,
                1000 * v15 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v17 = *v8;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v17;
        if ( v17 )
        {
          *((_DWORD *)v17 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v27 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v26 = *v27;
                v27[2] = 0LL;
                if ( !*(_DWORD *)(v26 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*v27);
              }
            }
          }
        }
LABEL_23:
        v19 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v52, &v56);
        UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
        if ( v19 >= 0 )
        {
          KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
          v19 = *(_DWORD *)(v1 + 24);
          goto LABEL_25;
        }
        if ( !v56 )
          goto LABEL_25;
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (v28 = WPP_MAIN_CB.Reserved,
              v30 = 0x8000002010000000uLL,
              v29 = 2LL,
              ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
          && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
          || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
        {
          v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v28, v30, v24, Timeout);
          if ( v31 )
            v31[1] = KeQueryPerformanceCounter(0LL);
        }
        v32 = SGDGetUserSessionState(v29, v28, v30, v24);
        v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v32 + 8));
        if ( v33 )
        {
          if ( IsEtwUserCritEnabled() )
          {
            v38 = PsGetCurrentThreadWin32Thread(v35, v34, v36, v37, Timeout);
            if ( v38 )
            {
              v39 = KeQueryPerformanceCounter(0LL);
              v40 = v39.QuadPart - *(_QWORD *)(v38 + 8);
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
              UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v40, 0);
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
              *(LARGE_INTEGER *)(v38 + 8) = v39;
              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v41,
                  v40,
                  1000000 * v40 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              if ( v40 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                && (signed __int64)(v39.QuadPart - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v41,
                    v40,
                    1000 * v40 / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v39.QuadPart;
              }
              *(_QWORD *)(v38 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          v42 = *v33;
          if ( !IsThreadCrossSessionAttached() )
          {
            gptiCurrent = v42;
            if ( v42 )
            {
              *((_DWORD *)v42 + 387) = 1;
              v44 = PsGetCurrentProcessWin32Process(v43);
              if ( v44 )
              {
                if ( *(_QWORD *)v44 )
                {
                  if ( (*(_DWORD *)(v44 + 12) & 0x8000) != 0
                    && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v45[2];
                        v46 = *v45;
                        v45[2] = 0LL;
                        if ( !*(_DWORD *)(v46 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*v45);
                        v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v1 = a1;
                    }
                  }
                }
              }
            }
            goto LABEL_111;
          }
        }
        else
        {
          EtwTraceAcquiredExclusiveUserCrit();
        }
        gptiCurrent = 0LL;
LABEL_111:
        CSTRemove(4LL, &v52);
        UserSessionSwitchLeaveCrit(v48, v47, v49, v50);
        goto LABEL_25;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
    goto LABEL_23;
  }
  v19 = -2143420409;
LABEL_25:
  if ( Object )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Object);
  *(_DWORD *)(v1 + 24) = v19;
}
