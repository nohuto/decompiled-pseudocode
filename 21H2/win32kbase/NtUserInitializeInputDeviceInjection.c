/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C015BD40
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
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C019FD60 (RIMIDE_InitializeDeviceInjection.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        char *a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        ULONG64 a7)
{
  unsigned int v7; // r14d
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // r9
  __int64 Pool2; // rdi
  __int64 v13; // r12
  PDEVICE_OBJECT v14; // rcx
  _UNKNOWN **v15; // r8
  __int16 v16; // r9
  __int64 v17; // rcx
  ULONG64 v18; // rcx
  size_t v19; // r15
  __int64 v20; // r9
  __int64 v21; // rdx
  PVOID v22; // rsi
  unsigned __int64 v23; // rcx
  char v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int Count; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdi
  int v51; // eax
  char v53[4]; // [rsp+50h] [rbp-1E8h] BYREF
  int v54; // [rsp+54h] [rbp-1E4h]
  unsigned int v55; // [rsp+58h] [rbp-1E0h]
  unsigned __int16 v56; // [rsp+5Ch] [rbp-1DCh]
  unsigned __int16 v57; // [rsp+5Eh] [rbp-1DAh]
  __int64 v58; // [rsp+60h] [rbp-1D8h]
  _DWORD v59[6]; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-1B0h]
  __int128 v62; // [rsp+90h] [rbp-1A8h]
  int v63; // [rsp+A0h] [rbp-198h]
  __int64 v64; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-188h]
  unsigned __int64 v66; // [rsp+B8h] [rbp-180h]
  unsigned __int64 i; // [rsp+C0h] [rbp-178h]
  __int128 v68; // [rsp+D0h] [rbp-168h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-158h]
  struct _KTHREAD *v71; // [rsp+F0h] [rbp-148h]
  __int128 v72; // [rsp+100h] [rbp-138h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp-128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1B0h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1D0h] [rbp-68h] BYREF

  v7 = a4;
  v55 = a4;
  v56 = a2;
  v57 = a1;
  v9 = a5;
  for ( i = a5; ; v9 = i )
  {
    v59[4] = 0;
    v53[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v53);
    Pool2 = 0LL;
    v61 = 0LL;
    v13 = 0LL;
    v60 = 0LL;
    if ( v53[0] )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      v15 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v16 = 10;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        v14->AttachedDevice,
        (_DWORD)v10,
        (_DWORD)v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        v16,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_11:
      v17 = 5LL;
LABEL_90:
      v54 = 0;
      UserSetLastError(v17, (__int64)v10, (__int64)v15, v11);
      goto LABEL_91;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      v15 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v16 = 11;
      goto LABEL_10;
    }
    v19 = 32LL * v7;
    if ( v19 > 0xFFFFFFFF || !v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v17 = 87LL;
      goto LABEL_90;
    }
    if ( v9 )
    {
      v13 = HMValidateSharedHandle(v9, (__int64)v10);
      if ( !v13 )
      {
        v54 = 0;
        goto LABEL_87;
      }
    }
    if ( v19 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v18, v10, v15) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v19] > MmUserProbeAddress || &a3[v19] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v21 = (unsigned int)v19;
    v59[0] = 1953067861;
    v64 = 260LL;
    v22 = gpLeakTrackingAllocator;
    *(_QWORD *)&v68 = &v64;
    *((_QWORD *)&v68 + 1) = v59;
    v62 = v68;
    v65 = (unsigned int)v19;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
    {
      v23 = 0LL;
      v66 = 0LL;
      while ( v23 < *((unsigned int *)gpLeakTrackingAllocator + 11) )
      {
        if ( *((_DWORD *)gpLeakTrackingAllocator + v23) == 1953067861 )
        {
          v24 = 0;
          if ( (unsigned int)v19 < 0x1000uLL || (v19 & 0xFFF) != 0 )
          {
            v24 = 1;
            v21 = (unsigned int)v19 + 16LL;
            v65 = v21;
          }
          Pool2 = ExAllocatePool2(*(_QWORD *)v62 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
          if ( !Pool2 )
          {
LABEL_40:
            Pool2 = 0LL;
            v58 = 0LL;
LABEL_41:
            v7 = v55;
            goto LABEL_52;
          }
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v22,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_46:
              v58 = Pool2;
              goto LABEL_41;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v22,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_46;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_40;
        }
        v66 = ++v23;
      }
      v7 = v55;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v62 & 0xFFFFFFFFFFFFFFFCuLL | 1, (unsigned int)v19);
    v58 = Pool2;
LABEL_52:
    v61 = Pool2;
    if ( !Pool2 )
      ExRaiseStatus(-1073741801);
    memmove((void *)Pool2, a3, v19);
    v25 = RIMIDE_InitializeDeviceInjection(v57, v56, Pool2, v7, v13, a6, &v60);
    v63 = v25;
    if ( v25 >= 0 )
    {
      v10 = (_QWORD *)a7;
      v18 = MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = v60;
      v54 = 1;
      goto LABEL_87;
    }
    if ( v25 != -2147483631 )
      break;
    if ( qword_1C029C988 )
      qword_1C029C988(v27, v26, v15, v20);
    if ( UserIsUserCritSecInExclusive() )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
      v32 = gcDeferredDestroyTargets;
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v28, v30);
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v32, v28, v30, v31);
    }
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( gptiCurrent )
    {
      CurrentThread = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread((__int64)CurrentThread) )
      {
        v71 = KeGetCurrentThread();
        *(_DWORD *)(W32GetThreadWin32Thread((__int64)v71) + 1508) = 0;
      }
    }
    gptiCurrent = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v35, v34, v36);
      v38 = CurrentThreadWin32Thread;
      if ( CurrentThreadWin32Thread )
      {
        v39 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
        if ( (*(_DWORD *)(v38 + 44) || *(_DWORD *)(v38 + 48) || v39 > 0)
          && (unsigned int)dword_1C028EE70 > 6
          && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD03,
            (const GUID *)(v38 + 28),
            0LL,
            2u,
            &v74);
        }
        *(_DWORD *)(v38 + 44) = 0;
        v72 = 0LL;
        *(_OWORD *)(v38 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  }
  v54 = 0;
  UserSetLastError(87LL, v26, (__int64)v15, v20);
LABEL_87:
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
LABEL_91:
  if ( qword_1C029C988 )
    qword_1C029C988(v18, v10, v15, v20);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42);
    v44 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v40, v42);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v44, v40, v42, v43);
  }
  v45 = AtomicExecutionCheck::GetCount();
  if ( v45 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v45, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v49 = PsGetCurrentThreadWin32Thread(v47, v46, v48);
    v50 = v49;
    if ( v49 )
    {
      v51 = *(_DWORD *)(v49 + 24);
      if ( (*(_DWORD *)(v50 + 44) || *(_DWORD *)(v50 + 48) || v51 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v50 + 28),
          0LL,
          2u,
          &v75);
      }
      *(_DWORD *)(v50 + 44) = 0;
      *(_OWORD *)(v50 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v54;
}
