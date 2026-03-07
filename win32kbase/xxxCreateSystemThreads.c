__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  void (__fastcall *v10)(void *); // rax
  PVOID Reserved; // rdx
  unsigned __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v14; // rax
  struct tagTHREADINFO **v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v22; // rbx
  int v23; // r8d
  bool v24; // zf
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v28; // rbx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned int v32; // [rsp+70h] [rbp+8h] BYREF
  void *v33; // [rsp+78h] [rbp+10h] BYREF

  v32 = 0;
  v33 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS || !(unsigned int)CSTPop(&v32, &v33) )
    return 1LL;
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  switch ( v32 )
  {
    case 1u:
      if ( !qword_1C02D6A38 || (int)qword_1C02D6A38() < 0 )
        break;
      v10 = (void (__fastcall *)(void *))qword_1C02D6A40;
LABEL_7:
      if ( v10 )
        v10(v33);
      break;
    case 2u:
      if ( !qword_1C02D6A68 || (int)qword_1C02D6A68() < 0 )
        break;
      v10 = (void (__fastcall *)(void *))qword_1C02D6A70;
      goto LABEL_7;
    case 4u:
      VideoPortCalloutThread(v33);
      break;
    case 8u:
      IVWorkerThread(v33);
      break;
  }
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v12 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, Reserved, v12, v9, v31);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v14 = SGDGetUserSessionState(v8, Reserved, v12, v9);
  v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v14 + 8));
  if ( !v15 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_52:
    gptiCurrent = 0LL;
    return 1LL;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v20 = PsGetCurrentThreadWin32Thread(v17, v16, v18, v19, v31);
    if ( v20 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v22 = PerformanceCounter.QuadPart - *(_QWORD *)(v20 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v22, 0);
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
      v24 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v20 + 8) = PerformanceCounter;
      if ( !v24
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
      }
      if ( v22 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v23,
            v22,
            1000 * v22 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v20 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v25 = *v15;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_52;
  gptiCurrent = v25;
  if ( v25 )
  {
    *((_DWORD *)v25 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v28 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v30 = *v28;
          v28[2] = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
          {
            v32 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*v28);
        }
      }
    }
  }
  return 1LL;
}
