/*
 * XREFs of ReferenceDwmApiPort @ 0x1C0015180
 * Callers:
 *     UserNotifyDisplayChange @ 0x1C00150E0 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 *     SetConnectCompletedState @ 0x1C00B09B0 (SetConnectCompletedState.c)
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v16; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v18; // r8d
  int v19; // [rsp+38h] [rbp-9h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v21; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp+1Fh] BYREF
  int *v24; // [rsp+80h] [rbp+3Fh]
  int v25; // [rsp+88h] [rbp+47h]
  int v26; // [rsp+8Ch] [rbp+4Bh]

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v21 = 0;
      v3 = PsGetCurrentThreadWin32Thread();
      v20 = v3;
      if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v20 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v4, v5) )
          {
            v26 = 0;
            v19 = v21;
            v25 = 4;
            v24 = &v19;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FF7,
              (int)&ActivityId,
              0,
              3u,
              &v23);
          }
        }
      }
    }
    else
    {
      v20 = 0LL;
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v7 )
        v6 = *v7;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v6 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v20);
    v14 = PsGetCurrentThreadWin32Thread();
    if ( v14 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
      Instance = UserCritTelemetry::getInstance();
      UserCritTelemetry::UpdateUserCritInfo(Instance, v16, 1LL);
      *(LARGE_INTEGER *)(v14 + 8) = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C024A738 - 1) > 2u
        && (qword_1C024A720 & 0x200000010000000LL) != 0
        && (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v13,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v18,
          v16,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v16 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v18,
            v16,
            1000000 * v16 / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
      }
      *(_QWORD *)(v14 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit(v13);
  }
  return v0;
}
