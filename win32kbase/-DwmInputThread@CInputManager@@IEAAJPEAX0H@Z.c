__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // rsi
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v9; // rax
  __int64 v10; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v12; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v14; // rax
  struct tagTHREADINFO **v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v22; // rdi
  __int64 v23; // r8
  struct tagTHREADINFO *v24; // rdi
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+20h] [rbp-48h]
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  HANDLE v37; // [rsp+38h] [rbp-30h] BYREF

  v4 = g_pInputManager;
  Handle = 0LL;
  v37 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v7 = CInputManager::ValidateUserEvent(a3, &v37);
  if ( v7 < 0 )
    return (unsigned int)v7;
  CurrentThread = KeGetCurrentThread();
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
  if ( !v9 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v9 == CurrentThread) )
  {
    *((_QWORD *)v4 + 2) = Handle;
    *((_QWORD *)v4 + 3) = v37;
    *((_QWORD *)v4 + 4) = *(_QWORD *)v4;
    *((_DWORD *)v4 + 15) = a4;
    Handle = 0LL;
    v37 = 0LL;
    if ( qword_1C02D7260 )
    {
      v7 = qword_1C02D7260((char *)v4 + 16);
      if ( v7 < 0 )
      {
LABEL_11:
        v10 = 0x200000010000000LL;
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (Reserved = WPP_MAIN_CB.Reserved,
              v12 = 0x8000002010000000uLL,
              ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
          && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
          || ((__int64)WPP_MAIN_CB.Reserved & v10) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (v10 & qword_1C02C4050) != 0
          && (v10 & qword_1C02C4058) == qword_1C02C4058 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                        CurrentThread,
                                                        Reserved,
                                                        v10,
                                                        v12,
                                                        v34);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        }
        v14 = SGDGetUserSessionState(CurrentThread, Reserved, v10, v12);
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v14 + 8));
        if ( v15 )
        {
          if ( IsEtwUserCritEnabled() )
          {
            v20 = PsGetCurrentThreadWin32Thread(v17, v16, v18, v19, v34);
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
              *(LARGE_INTEGER *)(v20 + 8) = PerformanceCounter;
              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                LODWORD(v35) = 1000000 * v22 / gliQpcFreq.QuadPart;
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  &AcquiredExclusiveUserCritEvent,
                  v23,
                  v22,
                  v35,
                  gullUserCritAcquireToken);
              }
              if ( v22 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                && (signed __int64)(PerformanceCounter.QuadPart
                                  - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                {
                  LODWORD(v35) = 1000 * v22 / gliQpcFreq.QuadPart;
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    &AcquiredExclusiveUserCritTelemetryEvent,
                    v23,
                    v22,
                    v35,
                    gullUserCritAcquireToken);
                }
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
              }
              *(_QWORD *)(v20 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          v24 = *v15;
          if ( !IsThreadCrossSessionAttached() )
          {
            gptiCurrent = v24;
            if ( v24 )
            {
              *((_DWORD *)v24 + 387) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
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
                    v27 = *v28;
                    v28[2] = 0LL;
                    if ( !*(_DWORD *)(v27 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                    HMUnlockObject(*v28);
                  }
                }
              }
            }
            goto LABEL_56;
          }
        }
        else
        {
          EtwTraceAcquiredExclusiveUserCrit();
        }
        gptiCurrent = 0LL;
LABEL_56:
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
        goto LABEL_57;
      }
      if ( qword_1C02D7268 )
      {
        v7 = qword_1C02D7268((char *)v4 + 16);
        goto LABEL_11;
      }
    }
    v7 = -1073741822;
    goto LABEL_11;
  }
  v7 = -2147483631;
LABEL_57:
  if ( Handle )
    ZwClose(Handle);
  if ( v37 )
    ZwClose(v37);
  return (unsigned int)v7;
}
