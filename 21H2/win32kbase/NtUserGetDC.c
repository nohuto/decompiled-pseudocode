/*
 * XREFs of NtUserGetDC @ 0x1C00356D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034360 (GreCreateRectRgnIndirect.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0036060 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0036250 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0038620 (ValidateHwndEx.c)
 *     GreUnlockVisRgn @ 0x1C0038AB0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0038CD0 (GreLockVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C0038E00 (GreSelectVisRgnShared.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

HDC __fastcall NtUserGetDC(__int64 a1)
{
  int v2; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v13; // rdi
  struct UserCritTelemetry *Instance; // rax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  HDC DCEx; // rdi
  __int64 *v25; // rcx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  int v41; // eax
  int v42; // [rsp+30h] [rbp-98h] BYREF
  __int64 v43; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v44; // [rsp+40h] [rbp-88h]
  GUID ActivityId; // [rsp+44h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+58h] [rbp-70h] BYREF
  int *v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+80h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+88h] [rbp-40h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 0;
    v31 = PsGetCurrentThreadWin32Thread();
    v43 = v31;
    if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v32, v33) )
        {
          v42 = v44;
          v48 = 4LL;
          v47 = &v42;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&ActivityId, 0, 3u, &v46);
        }
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v43);
  v11 = PsGetCurrentThreadWin32Thread();
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
    Instance = UserCritTelemetry::getInstance();
    UserCritTelemetry::UpdateUserCritInfo(Instance, v13, 1LL);
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
        (char)gullUserCritAcquireToken);
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
          (char)gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    v17 = ValidateHwndEx(a1, 1LL, 0LL);
    if ( !v17 )
    {
      DCEx = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    v17 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v34 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v34),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v19 + 488) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL) + 24LL) & 1) != 0 )
  {
    if ( !v17 )
    {
      v25 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 24LL);
      if ( v25 )
        v26 = *v25;
      else
        v26 = 0LL;
      if ( !ValidateHwndEx(v26, 1LL, 0LL) )
        v2 = 0;
      goto LABEL_38;
    }
LABEL_23:
    DCEx = (HDC)GetDCEx(v17, 0LL, 0x10000LL);
    goto LABEL_24;
  }
  if ( v17 )
    goto LABEL_23;
LABEL_38:
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !IsThreadCrossSessionAttached() )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v29 )
      v28 = *v29;
  }
  v30 = *(_QWORD *)(v28 + 456);
  if ( v30 )
    DCEx = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 24LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    GreSelectVisRgnShared(DCEx);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  }
LABEL_24:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0257C48 )
    qword_1C0257C48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v42 = 0x20000;
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
    v37 = PsGetCurrentThreadWin32Thread();
    v40 = v37;
    if ( v37 )
    {
      v41 = *(_DWORD *)(v37 + 24);
      if ( (*(_DWORD *)(v40 + 44) || *(_DWORD *)(v40 + 48) || v41 > 0)
        && (unsigned int)dword_1C024BA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v38, v39) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218F81, v40 + 28, 0, 2u, &v49);
      }
      *(_DWORD *)(v40 + 44) = 0;
      *(_OWORD *)(v40 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
