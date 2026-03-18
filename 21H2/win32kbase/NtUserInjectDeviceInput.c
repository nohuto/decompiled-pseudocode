/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C015C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00043E8 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDEInjectDeviceInput @ 0x1C019D008 (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, void *a2, unsigned int a3)
{
  char v3; // r10
  char v4; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // r13
  __int64 Pool2; // rsi
  int v11; // edi
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  int v20; // eax
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 CurrentProcessWow64Process; // rax
  size_t v26; // r12
  PVOID v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  char v30; // r12
  int v31; // eax
  NTSTATUS v32; // r12d
  char v33; // si
  bool v34; // r14
  char LastError; // al
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned int Count; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v48; // rsi
  int v49; // eax
  _BYTE v51[4]; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-1B4h]
  size_t Size; // [rsp+68h] [rbp-1B0h]
  __int64 v54; // [rsp+70h] [rbp-1A8h]
  _DWORD *v55; // [rsp+78h] [rbp-1A0h] BYREF
  _DWORD v56[6]; // [rsp+80h] [rbp-198h] BYREF
  void *Src; // [rsp+98h] [rbp-180h]
  __int64 v58; // [rsp+A0h] [rbp-178h]
  __int128 v59; // [rsp+B0h] [rbp-168h]
  __int64 v60; // [rsp+C8h] [rbp-150h] BYREF
  unsigned __int64 v61; // [rsp+D0h] [rbp-148h]
  unsigned __int64 v62; // [rsp+D8h] [rbp-140h]
  __int64 *v63[2]; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-128h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp-108h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1B0h] [rbp-68h] BYREF

  v3 = a3;
  v52 = a3;
  v4 = (char)a2;
  Src = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      70,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)a1,
      v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v63, "InjectDeviceInput", 0LL);
  v56[4] = 0;
  v51[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v51);
  v9 = 0LL;
  v55 = 0LL;
  Pool2 = 0LL;
  v58 = 0LL;
  if ( v51[0] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        71,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v11 = 0;
    UserSetLastError(5LL, v6, v7, v8);
    goto LABEL_133;
  }
  v16 = v52;
  if ( !v52 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        72,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v11 = 0;
    v17 = 87LL;
    goto LABEL_27;
  }
  v18 = 3LL * v52;
  v19 = 12LL * v52;
  if ( v19 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        73,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v52);
    goto LABEL_119;
  }
  v20 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)&v55);
  if ( v20 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        74,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v20);
    v11 = 0;
    UserSetLastError(6LL, v18, v7, v16);
    v9 = v55;
    goto LABEL_121;
  }
  v9 = v55;
  if ( (v55[68] & 0x2000) == 0 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_119;
    v22 = 75;
LABEL_46:
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      v18,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v22,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_119:
    v24 = 87LL;
LABEL_120:
    v11 = 0;
    UserSetLastError(v24, v18, v7, v16);
    goto LABEL_121;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)(v55 + 22), v18, v7) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        76,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v24 = 5LL;
    goto LABEL_120;
  }
  if ( v9[136] != 2 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_119;
    v22 = 77;
    goto LABEL_46;
  }
  if ( (*((_DWORD *)v9 + 72) & 0x80u) != 0 )
  {
    v23 = *(unsigned int *)(*((_QWORD *)v9 + 70) + 360LL);
    if ( (v23 & 8) != 0 && (v23 & 0x2000) == 0 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_119;
      v22 = 78;
      goto LABEL_46;
    }
  }
  if ( v19 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, v18, v7);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + v19 > MmUserProbeAddress || (char *)Src + v19 < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v26 = (unsigned int)v19;
  Size = v26;
  v56[0] = 1953067861;
  v60 = 260LL;
  v27 = gpLeakTrackingAllocator;
  *(_QWORD *)&v64 = &v60;
  *((_QWORD *)&v64 + 1) = v56;
  v59 = v64;
  v28 = (unsigned int)v26;
  v61 = (unsigned int)v26;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
  {
    v29 = 0LL;
    v62 = 0LL;
    while ( v29 < *((unsigned int *)gpLeakTrackingAllocator + 11) )
    {
      if ( *((_DWORD *)gpLeakTrackingAllocator + v29) == 1953067861 )
      {
        v30 = 0;
        if ( v28 < 0x1000 || (v28 & 0xFFF) != 0 )
        {
          v30 = 1;
          v28 += 16LL;
          v61 = v28;
        }
        Pool2 = ExAllocatePool2(*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFFCuLL | 1, v28);
        if ( !Pool2 )
        {
LABEL_88:
          Pool2 = 0LL;
          v54 = 0LL;
LABEL_89:
          v26 = Size;
          goto LABEL_100;
        }
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v27,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_94:
            v54 = Pool2;
            goto LABEL_89;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v27,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_94;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_88;
      }
      v62 = ++v29;
    }
    v26 = (unsigned int)v26;
  }
  Pool2 = ExAllocatePool2(*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFFCuLL | 1, (unsigned int)v26);
  v54 = Pool2;
LABEL_100:
  v58 = Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  memmove((void *)Pool2, Src, v26);
  v31 = RIMIDEInjectDeviceInput(v9, Pool2, v52, 4LL);
  v32 = v31;
  if ( v31 >= 0 )
  {
    v11 = 1;
    goto LABEL_121;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      80,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      v31);
  }
  v11 = 0;
  v17 = RtlNtStatusToDosError(v32);
LABEL_27:
  UserSetLastError(v17, v6, v7, v16);
LABEL_121:
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( !v11 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v12, v14, v15);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v37,
        v36,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        81,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
  }
LABEL_133:
  if ( qword_1C029C988 )
    qword_1C029C988(v13, v12, v14, v15);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
    v42 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v38, v40);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v42, v38, v40, v41);
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v45, v44, v46);
    v48 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v49 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v48 + 44) || *(_DWORD *)(v48 + 48) || v49 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v48 + 28),
          0LL,
          2u,
          &v66);
      }
      *(_DWORD *)(v48 + 44) = 0;
      *(_OWORD *)(v48 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v63);
  return v11;
}
