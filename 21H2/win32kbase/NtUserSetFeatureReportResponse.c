/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C0161000
 * Callers:
 *     <none>
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004E54 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C019E298 (RIMIDEResetPointerDeviceMaxCount.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // rdi
  char *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT v9; // rcx
  _UNKNOWN **v10; // r8
  __int16 v11; // r9
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  char v23; // r12
  __int64 Pool2; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  PVOID v29; // r13
  char *v30; // r15
  _DWORD *v31; // r15
  unsigned int v32; // r12d
  _DWORD *v33; // r14
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned int Count; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v45; // rdi
  int v46; // eax
  char v48[4]; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-194h]
  char *v50; // [rsp+58h] [rbp-190h]
  __int64 v51; // [rsp+60h] [rbp-188h]
  _DWORD v52[6]; // [rsp+68h] [rbp-180h] BYREF
  PVOID Object; // [rsp+80h] [rbp-168h] BYREF
  __int64 v54; // [rsp+88h] [rbp-160h]
  __int128 v55; // [rsp+90h] [rbp-158h]
  __int64 v56; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v58; // [rsp+B8h] [rbp-130h]
  __int128 v59; // [rsp+C0h] [rbp-128h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-108h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+180h] [rbp-68h] BYREF

  v3 = a3;
  v49 = a3;
  v5 = a1;
  v50 = a1;
  Object = 0LL;
  v54 = 0LL;
  v52[4] = 0;
  v48[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v48);
  if ( v48[0] )
  {
    v9 = WPP_GLOBAL_Control;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v11 = 28;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_(
      v9->AttachedDevice,
      v6,
      (_DWORD)v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v11,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_11:
    v12 = 0;
    UserSetLastError(5LL, v6, (__int64)v10, v8);
    goto LABEL_80;
  }
  if ( (unsigned int)(v3 - 1) > 6 || (v17 = 12 * v3, v17 > 0xFFFFFFFF) )
  {
    v12 = 0;
    UserSetLastError(87LL, v6, v7, v8);
    goto LABEL_80;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v9 = WPP_GLOBAL_Control;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v10 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v11 = 29;
    goto LABEL_10;
  }
  if ( v17 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v18, v6, v19) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v17] > MmUserProbeAddress || &a2[v17] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v52[0] = 1953067861;
  v56 = 260LL;
  v20 = gpLeakTrackingAllocator;
  *(_QWORD *)&v59 = &v56;
  *((_QWORD *)&v59 + 1) = v52;
  v55 = v59;
  v21 = (unsigned int)v17;
  v57 = (unsigned int)v17;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
  {
    v22 = 0LL;
    v58 = 0LL;
    while ( v22 < *((unsigned int *)gpLeakTrackingAllocator + 11) )
    {
      if ( *((_DWORD *)gpLeakTrackingAllocator + v22) == 1953067861 )
      {
        v23 = 0;
        if ( (unsigned int)v17 < 0x1000uLL || (v17 & 0xFFF) != 0 )
        {
          v23 = 1;
          v21 = (unsigned int)v17 + 16LL;
          v57 = v21;
        }
        Pool2 = ExAllocatePool2(*(_QWORD *)v55 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
        if ( !Pool2 )
        {
LABEL_37:
          Pool2 = 0LL;
          v51 = 0LL;
LABEL_38:
          v5 = v50;
          goto LABEL_49;
        }
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v20,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_43:
            v51 = Pool2;
            goto LABEL_38;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v20,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_43;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_37;
      }
      v58 = ++v22;
    }
    v5 = v50;
  }
  Pool2 = ExAllocatePool2(*(_QWORD *)v55 & 0xFFFFFFFFFFFFFFFCuLL | 1, (unsigned int)v17);
  v51 = Pool2;
LABEL_49:
  v54 = Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  memmove((void *)Pool2, a2, (unsigned int)v17);
  v25 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  v29 = Object;
  v30 = (char *)Object + 88;
  if ( !Object )
    v30 = 0LL;
  if ( v25 >= 0 && -__CFSHR__(*((_DWORD *)v30 + 50), 8) == 1 )
  {
    v31 = (_DWORD *)*((_QWORD *)v30 + 59);
    if ( !*(_DWORD *)(*((_QWORD *)Object + 59) + 16LL) && (v31[90] & 0x2000) != 0 )
    {
      v32 = 0;
      if ( !v49 )
      {
LABEL_75:
        v12 = 1;
        goto LABEL_76;
      }
      v33 = (_DWORD *)(Pool2 + 4);
      while ( *((_WORD *)v33 - 2) == 13 )
      {
        if ( *((_WORD *)v33 - 1) == 85 )
        {
          v26 = (unsigned int)*v33;
          if ( (int)v26 > 256 || (v27 = (unsigned int)v31[6], (unsigned int)(v27 - 1) > 3) )
          {
            if ( v31[6] != 7 )
              break;
            v27 = 7LL;
            if ( (int)v26 > 5 )
              break;
          }
          v34 = v31[192] - 1;
          if ( (_DWORD)v27 != 7 )
            v34 = v31[192];
          if ( (_DWORD)v26 != v34 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v31) )
            break;
        }
        else
        {
          if ( *((_WORD *)v33 - 1) != 89 || v31[6] != 7 || *v33 > 1u )
            break;
          v31[238] = *v33;
        }
        ++v32;
        v33 += 3;
        if ( v32 >= v49 )
          goto LABEL_75;
      }
    }
  }
  v12 = 0;
  UserSetLastError(87LL, v26, v27, v28);
LABEL_76:
  if ( v29 )
    ObfDereferenceObject(v29);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
LABEL_80:
  if ( qword_1C029C988 )
    qword_1C029C988(v14, v13, v15, v16);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
    v39 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v35, v37);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v39, v35, v37, v38);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v42, v41, v43);
    v45 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v46 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v45 + 44) || *(_DWORD *)(v45 + 48) || v46 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v45 + 28),
          0LL,
          2u,
          &v61);
      }
      *(_DWORD *)(v45 + 44) = 0;
      *(_OWORD *)(v45 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v12;
}
