/*
 * XREFs of NtUserReleaseDC @ 0x1C0036EF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0037134 (EtwTraceReleaseUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C00374D0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00376C0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ReleaseCacheDC @ 0x1C0037B20 (ReleaseCacheDC.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0127794 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  LONGLONG v12; // rbx
  struct UserCritTelemetry *Instance; // rax
  int v14; // ecx
  int v15; // r8d
  _BOOL8 v16; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  int v25; // eax
  int v26; // [rsp+30h] [rbp-49h] BYREF
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int8 v28; // [rsp+40h] [rbp-39h]
  GUID ActivityId; // [rsp+44h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-21h] BYREF
  int *v31; // [rsp+78h] [rbp-1h]
  __int64 v32; // [rsp+80h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp+Fh] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v28 = 0;
    v18 = PsGetCurrentThreadWin32Thread();
    v27 = v18;
    if ( v18 && (*(int *)(v18 + 24) > 0 || *(_DWORD *)(v27 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v19, v20) )
        {
          v26 = v28;
          v32 = 4LL;
          v31 = &v26;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId, 0, 3u, &v30);
        }
      }
    }
  }
  else
  {
    v27 = 0LL;
  }
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v4 )
      v3 = *v4;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v3 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
  v10 = PsGetCurrentThreadWin32Thread();
  if ( v10 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v12, 1LL);
    *(LARGE_INTEGER *)(v10 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0249748 - 1) > 2u
      && (qword_1C0249730 & 0x200000010000000LL) != 0
      && (qword_1C0249738 & 0x200000010000000LL) == qword_1C0249738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v14,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v15,
        v12,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v12 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v15,
          v12,
          1000000 * v12 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v16 = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0256C48 )
    qword_1C0256C48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v21 = PsGetCurrentThreadWin32Thread();
    v24 = v21;
    if ( v21 )
    {
      v25 = *(_DWORD *)(v21 + 24);
      if ( (*(_DWORD *)(v24 + 44) || *(_DWORD *)(v24 + 48) || v25 > 0)
        && (unsigned int)dword_1C024AA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v22, v23) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F61, v24 + 28, 0, 2u, &v33);
      }
      *(_DWORD *)(v24 + 44) = 0;
      *(_OWORD *)(v24 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v16;
}
