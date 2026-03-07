__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  unsigned int v3; // esi
  __int64 v4; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v6; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v16; // rbx
  int v17; // r8d
  struct tagTHREADINFO *v18; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 i; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-38h]

  v3 = a1;
  v4 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v6 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v4) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v4 & qword_1C02C4050) != 0
    && (v4 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, Reserved, v4, v6, v34);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = SGDGetUserSessionState(a1, Reserved, v4, v6);
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v8 + 8));
  if ( v9 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, v34);
      if ( v14 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
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
        UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v16, 0);
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
        *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
        if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v17,
            v16,
            1000000 * v16 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        if ( v16 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v17,
              v16,
              1000 * v16 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v18 = *v9;
    gptiCurrent = v18;
    if ( v18 )
    {
      *((_DWORD *)v18 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v20 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v33 = *v20;
            v20[2] = 0LL;
            if ( !*(_DWORD *)(v33 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*v20);
          }
        }
      }
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = 0LL;
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v3) )
    goto LABEL_62;
  if ( (v3 & 0xF) == 1 )
  {
    v32 = PsGetCurrentProcessWin32Process(v22);
    v23 = v32;
    if ( v32 )
    {
      v21 = -(__int64)(*(_QWORD *)v32 != 0LL);
      v23 = v21 & v32;
    }
    if ( ((v3 >> 8) & 0x1FF) != *(_WORD *)(v23 + 284) )
    {
LABEL_62:
      UserSetLastError(87);
LABEL_63:
      v28 = 0LL;
      goto LABEL_30;
    }
  }
  v25 = 0x400000LL;
  v26 = *((_QWORD *)gptiCurrent + 53);
  v27 = *(_DWORD *)(v26 + 812);
  if ( (v27 & 0x400000) != 0 && (!a2 || (v3 & 0xF) == 0 || *(_DWORD *)(v26 + 280) != 18) )
    goto LABEL_63;
  v28 = 1LL;
  *(_DWORD *)(v26 + 812) = v27 | 0x400000;
  if ( *(_DWORD *)(v26 + 280) != v3 )
  {
    *(_DWORD *)(v26 + 280) = v3;
    v29 = *(_QWORD *)(v26 + 656);
    if ( v29 )
    {
      for ( i = *(_QWORD *)(v29 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v26, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v26, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v25, v21, v23, v24);
  return v28;
}
