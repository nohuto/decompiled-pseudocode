__int64 __fastcall xxxMKMouseMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v11; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO **v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  struct tagTHREADINFO *v24; // rbx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 *v28; // rbx
  void (__fastcall *v29)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  __int64 v31; // [rsp+20h] [rbp-38h]
  __int64 v32; // [rsp+20h] [rbp-38h]

  if ( (gdwPUDFlags & 0x2000) != 0 && gtmridMKMoveCursor )
    return 0LL;
  v4 = (char)a1;
  LOWORD(a1) = BYTE1(a1);
  gMKDeltaX = v4;
  gMKDeltaY = (char)a1;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  v5 = gMKDeltaX;
  v6 = gMKDeltaY;
  if ( (dword_1C02D1574 & 0x40) != 0
    && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
  {
    v7 = 4 * (unsigned __int8)byte_1C02D14B2;
    v5 = v7 * gMKDeltaX;
    v6 = v7 * gMKDeltaY;
  }
  MouseMove(v5, v6);
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v11 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, Reserved, v11, v9, v31);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v13 = SGDGetUserSessionState(v8, Reserved, v11, v9);
  v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v13 + 8));
  if ( v14 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v19 = PsGetCurrentThreadWin32Thread(v16, v15, v17, v18, v31);
      if ( v19 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
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
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v21, 0);
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
        v23 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
        if ( !v23
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(v32) = 1000000 * v21 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritEvent,
            v22,
            v21,
            v32,
            gullUserCritAcquireToken);
        }
        if ( v21 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(v32) = 1000 * v21 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v22,
              v21,
              v32,
              gullUserCritAcquireToken);
          }
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v24 = *v14;
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
      goto LABEL_51;
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
  }
  gptiCurrent = 0LL;
LABEL_51:
  if ( !dword_1C02D15A8 || (gdwPUDFlags & 0x2000) != 0 )
  {
    v29 = xxxMKMoveConstCursorTimer;
    if ( gMouseCursor[0] )
      v29 = xxxMKMoveAccelCursorTimer;
    giMouseMoveTable = 0;
    gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v29);
  }
  return 0LL;
}
