/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D96F8
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     IsPowerOnGdiSupported @ 0x1C00D4684 (IsPowerOnGdiSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C00DA44C (IsxxxSetCsrssThreadDesktopSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C0167B3C (McTemplateK0tt_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // r15
  char v5; // bp
  ULONG v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v15; // rax
  struct tagTHREADINFO **v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v23; // rbx
  int v24; // r8d
  struct tagTHREADINFO *v25; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *i; // rbx
  __int64 v28; // rax
  __int64 WaitMode; // [rsp+20h] [rbp-58h]
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  *(_OWORD *)Object = 0LL;
  v4 = a2;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt_EtwWriteTransfer(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( *(_BYTE *)(SGDGetUserGdiSessionState(a1) + 1) )
      {
        v6 = 1;
        a1 = *(_QWORD *)(SGDGetUserGdiSessionState(a1) + 8);
        Object[0] = (PVOID)a1;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      UserSessionSwitchLeaveCrit(a1, v7, v8, v9);
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
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
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, Reserved, v11, v12, WaitMode);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      }
      v15 = SGDGetUserSessionState(v10, Reserved, v11, v12);
      v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v15 + 8));
      if ( !v16 )
      {
        EtwTraceAcquiredExclusiveUserCrit();
        goto LABEL_51;
      }
      if ( IsEtwUserCritEnabled() )
      {
        v21 = PsGetCurrentThreadWin32Thread(v18, v17, v19, v20, WaitMode);
        if ( v21 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v21 + 8);
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v23, 0);
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
          *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v24,
              v23,
              1000000 * v23 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v23 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v24,
                v23,
                1000 * v23 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v21 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v25 = *v16;
      if ( IsThreadCrossSessionAttached() )
      {
LABEL_51:
        gptiCurrent = 0LL;
      }
      else
      {
        gptiCurrent = v25;
        if ( v25 )
        {
          *((_DWORD *)v25 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                a1 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        gpSharedUserCritDeferredUnlockListHead;
                        i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
                  {
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
                    v28 = *i;
                    i[2] = 0LL;
                    if ( !*(_DWORD *)(v28 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*i);
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    if ( qword_1C02D6AC0 )
      qword_1C02D6AC0(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
