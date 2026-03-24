/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C003E200
 * Callers:
 *     <none>
 * Callees:
 *     HKLtoPKL @ 0x1C000B4F0 (HKLtoPKL.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C00374D0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00376C0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C003E420 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0127794 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v11; // rdi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r14
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v23; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v25; // ecx
  int v26; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-35h]
  __int64 v35; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int8 v36; // [rsp+40h] [rbp-29h]
  GUID ActivityId; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+58h] [rbp-11h] BYREF
  int *v39; // [rsp+78h] [rbp+Fh]
  __int64 v40; // [rsp+80h] [rbp+17h]

  v34 = a1;
  v7 = a1;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v36 = 0;
    v30 = PsGetCurrentThreadWin32Thread(v9);
    v35 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v35 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v31, v32) )
        {
          v33 = v36;
          v40 = 4LL;
          v39 = &v33;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FD7, (int)&ActivityId, 0, 3u, &v38);
        }
      }
    }
  }
  else
  {
    v35 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v35, v16, v18, v19);
  v21 = PsGetCurrentThreadWin32Thread(v20);
  if ( v21 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v21 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v23, 1);
    *(LARGE_INTEGER *)(v21 + 8) = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0249748 - 1) > 2u
      && (qword_1C0249730 & 0x200000010000000LL) != 0
      && (qword_1C0249738 & 0x200000010000000LL) == qword_1C0249738
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        v25,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v26,
        v23,
        0,
        gullUserCritAcquireToken);
    }
    if ( v23 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v26,
          v23,
          1000000 * v23 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    v7 = v34;
    *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v28 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v28 = *(_QWORD *)(ThreadWin32Thread + 440);
  if ( v28 )
    v8 = InternalMapVirtualKeyEx(v7, a2, *(_QWORD *)(*(_QWORD *)(v28 + 48) + 32LL));
  UserSessionSwitchLeaveCrit();
  return v8;
}
