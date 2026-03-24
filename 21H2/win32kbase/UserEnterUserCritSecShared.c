/*
 * XREFs of UserEnterUserCritSecShared @ 0x1C003BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 UserEnterUserCritSecShared()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v13; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v22; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+60h] [rbp+1Fh] BYREF
  int *v25; // [rsp+80h] [rbp+3Fh]
  int v26; // [rsp+88h] [rbp+47h]
  int v27; // [rsp+8Ch] [rbp+4Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v22 = 0;
    v17 = PsGetCurrentThreadWin32Thread();
    v21 = v17;
    if ( v17 && (*(int *)(v17 + 24) > 0 || *(_DWORD *)(v21 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v18, v19) )
        {
          v27 = 0;
          v20 = v22;
          v26 = 4;
          v25 = &v20;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v24);
        }
      }
    }
  }
  else
  {
    v21 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v21, v6, v8, v9);
  result = PsGetCurrentThreadWin32Thread();
  v11 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v13, 1);
    *(LARGE_INTEGER *)(v11 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C024A738 - 1) > 2u
      && (qword_1C024A720 & 0x200000010000000LL) != 0
      && (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v15,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v16,
        v13,
        0,
        gullUserCritAcquireToken);
    }
    if ( v13 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v16,
          v13,
          1000000 * v13 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    result = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    *(_QWORD *)(v11 + 16) = result;
  }
  return result;
}
