/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C016D440
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccessEx @ 0x1C0016FB0 (CheckAccessEx.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     xxxUserChangeDisplaySettings @ 0x1C015FD70 (xxxUserChangeDisplaySettings.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     DrvLogDiagDisplayChange @ 0x1C01943C0 (DrvLogDiagDisplayChange.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, _WORD *a2, unsigned int a3, void *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO **v14; // r14
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v21; // rbx
  struct tagTHREADINFO *v22; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rax
  __int64 *v25; // rbx
  unsigned int v26; // ebx
  char *v27; // rdx
  int v28; // ecx
  __int64 v30; // [rsp+20h] [rbp-D8h]
  __int64 v31; // [rsp+20h] [rbp-D8h]
  unsigned int v32[2]; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v33[10]; // [rsp+50h] [rbp-A8h] BYREF

  memset(v33, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v9 = 0x200000010000000LL;
  v32[1] = -1;
  v33[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 26;
  LOBYTE(v33[6]) = -1;
  v32[0] = 0x2000;
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v11 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v9) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v9 & qword_1C02C4050) != 0
    && (v9 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, Reserved, v9, v11, v30);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v13 = SGDGetUserSessionState(v8, Reserved, v9, v11);
  v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v13 + 8));
  if ( v14 )
  {
    if ( IsEtwUserCritEnabled() )
    {
      v19 = PsGetCurrentThreadWin32Thread(v16, v15, v17, v18, v30);
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
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BD8 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
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
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BD8 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
        }
        UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
        v15 = 0x200000010000000LL;
        *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
        if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(v31) = 1000000 * v21 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritEvent,
            v17,
            v21,
            v31,
            gullUserCritAcquireToken);
        }
        if ( v21 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(v31) = 1000 * v21 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v17,
              v21,
              v31,
              gullUserCritAcquireToken);
          }
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v22 = *v14;
    gptiCurrent = v22;
    if ( v22 )
    {
      *((_DWORD *)v22 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v16 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v25 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v24 = *v25;
                v25[2] = 0LL;
                if ( !*(_DWORD *)(v24 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v25);
              }
            }
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
  if ( gbVideoInitialized )
  {
    v27 = (char *)gptiCurrent + 424;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 760LL) + 24LL) & 0x10) != 0
      || !CheckAccessEx((int *)(*(_QWORD *)v27 + 864LL), v32, 0LL) )
    {
      if ( a3 != 34 )
      {
        v28 = 5;
LABEL_51:
        v26 = -1;
        UserSetLastError(v28);
        goto LABEL_55;
      }
    }
    else if ( (a3 & 0x8000000) != 0 )
    {
      v28 = 87;
      goto LABEL_51;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v26 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33);
    goto LABEL_55;
  }
  v26 = -1;
LABEL_55:
  UserSessionSwitchLeaveCrit((__int64)v16, v15, v17, v18);
  return v26;
}
