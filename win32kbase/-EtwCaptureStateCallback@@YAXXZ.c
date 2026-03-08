/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C003422C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C0161690 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C016691C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID Reserved; // rdx
  unsigned __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO **v8; // r14
  struct tagTHREADINFO *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v18; // rbx
  int v19; // r8d
  bool v20; // zf
  struct tagTHREADINFO *v21; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rax
  __int64 *v24; // rbx
  unsigned int v25; // edi
  char Flink; // bl
  _DWORD *v27; // rax
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int64 v31; // rbp
  __int64 i; // rbx
  _QWORD *j; // rsi
  unsigned int ThreadId; // r13d
  char ThreadInfoFlags; // al
  int v36; // ecx
  char v37; // r14
  unsigned int *v38; // [rsp+20h] [rbp-58h]
  char v39; // [rsp+80h] [rbp+8h]
  unsigned int v40; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+90h] [rbp+18h] BYREF

  v41 = 0;
  v40 = 0;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v5 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v5, a4, v38);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v7 = SGDGetUserSessionState(a1, Reserved, v5, a4);
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v7 + 8));
  if ( !v8 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_15:
    gptiCurrent = 0LL;
    goto LABEL_46;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v16 = PsGetCurrentThreadWin32Thread(v13, v12, v14, v15, v38);
    if ( v16 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v18 = PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v18, 0);
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
      v20 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v16 + 8) = PerformanceCounter;
      if ( !v20
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v19,
          v18,
          1000000 * v18 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v18 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v19,
            v18,
            1000 * v18 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v21 = *v8;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_15;
  gptiCurrent = v21;
  if ( v21 )
  {
    *((_DWORD *)v21 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v9 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v23 = *v24;
              v24[2] = 0LL;
              if ( !*(_DWORD *)(v23 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v24);
            }
          }
        }
      }
    }
  }
LABEL_46:
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000000000040000uLL) != 0
    && (qword_1C02C4058 & 0x8000000000040000uLL) == qword_1C02C4058 )
  {
    if ( LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v25 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( v25 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
      {
        Flink = (char)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
        v27 = (_DWORD *)SGDGetUserSessionState(v9, 0x8000000000040000uLL, v10, v11);
        McTemplateK0qqqqq_EtwWriteTransfer(
          *v27,
          (unsigned int)&WaitCursorEvent,
          v28,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          *v27,
          Flink,
          v25);
      }
    }
  }
  v29 = 0x8000000000080000uLL;
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000000000080000uLL) != 0
    && (qword_1C02C4058 & 0x8000000000080000uLL) == qword_1C02C4058 )
  {
    v30 = grpWinStaList;
    v31 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v30 )
    {
      for ( i = *(_QWORD *)(v30 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 93));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 93));
          v36 = *((_DWORD *)j + 118);
          v39 = ThreadInfoFlags;
          if ( v36 )
            v37 = v31 - v36;
          else
            v37 = 0;
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 39), v31, &v41, &v40, 0LL, 0LL);
          LOBYTE(v11) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              (_DWORD)v9,
              (unsigned int)&ThreadInfoRundownEvent,
              v10,
              ThreadId,
              v39,
              v37,
              v41,
              v40);
        }
      }
      v30 = *(_QWORD *)(v30 + 8);
    }
  }
  UserSessionSwitchLeaveCrit((__int64)v9, v29, v10, v11);
}
