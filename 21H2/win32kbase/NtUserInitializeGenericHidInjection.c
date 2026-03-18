/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C015B1B0
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
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C019FC14 (RIMIDE_CreateGenericHidDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  PDEVICE_OBJECT v6; // rcx
  _UNKNOWN **v7; // r8
  __int16 v8; // r9
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  ULONG64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  ULONG64 v15; // rcx
  unsigned __int16 epi16; // r13
  __int64 CurrentProcessWow64Process; // rax
  size_t v18; // r15
  __int64 v19; // rax
  const void *v20; // r12
  size_t v21; // rdx
  PVOID v22; // rsi
  unsigned __int64 v23; // rcx
  char v24; // r14
  __int64 v25; // rdx
  __int64 Pool2; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  const void *v29; // r15
  __int64 v30; // rdx
  PVOID v31; // rsi
  unsigned __int64 v32; // rcx
  char v33; // r14
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int Count; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdi
  int v60; // eax
  char v62; // [rsp+50h] [rbp-2F8h] BYREF
  char v63; // [rsp+51h] [rbp-2F7h]
  char v64; // [rsp+52h] [rbp-2F6h]
  int v65; // [rsp+54h] [rbp-2F4h]
  int v66; // [rsp+58h] [rbp-2F0h]
  __int64 v67; // [rsp+60h] [rbp-2E8h]
  __int64 v68; // [rsp+68h] [rbp-2E0h]
  int v69; // [rsp+70h] [rbp-2D8h] BYREF
  int v70; // [rsp+78h] [rbp-2D0h] BYREF
  __int64 v71; // [rsp+90h] [rbp-2B8h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-2A8h]
  __int128 v73; // [rsp+B0h] [rbp-298h]
  _OWORD v74[4]; // [rsp+C0h] [rbp-288h] BYREF
  size_t v75; // [rsp+100h] [rbp-248h]
  unsigned __int64 j; // [rsp+108h] [rbp-240h]
  _QWORD *v77; // [rsp+110h] [rbp-238h]
  __int64 v78; // [rsp+118h] [rbp-230h] BYREF
  __int64 v79; // [rsp+120h] [rbp-228h]
  unsigned __int64 k; // [rsp+128h] [rbp-220h]
  _OWORD *i; // [rsp+130h] [rbp-218h]
  __int64 v82; // [rsp+140h] [rbp-208h] BYREF
  __int128 v83; // [rsp+150h] [rbp-1F8h]
  __int128 v84; // [rsp+160h] [rbp-1E8h]
  __int128 v85; // [rsp+180h] [rbp-1C8h]
  PVOID BackTrace[20]; // [rsp+190h] [rbp-1B8h] BYREF
  PVOID v87[20]; // [rsp+230h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+2D0h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+2F0h] [rbp-58h] BYREF

  v2 = a2;
  v77 = a2;
  v3 = a1;
  for ( i = a1; ; v3 = i )
  {
    v66 = 0;
    v62 = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v62);
    v71 = 0LL;
    memset(v74, 0, sizeof(v74));
    v63 = 0;
    v64 = 0;
    if ( v62 )
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v4) = 0;
      }
      v7 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v8 = 12;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        v6->AttachedDevice,
        v4,
        (_DWORD)v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        v8,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_11:
      v65 = 0;
      UserSetLastError(5LL, v4, (__int64)v7, v5);
      goto LABEL_120;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v4) = 0;
      }
      v7 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v8 = 13;
      goto LABEL_10;
    }
    if ( ((unsigned __int8)v3 & (PsGetCurrentProcessWow64Process(v13, v4, v14) == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)(v3 + 4);
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)(v3 + 4) > MmUserProbeAddress || v15 < (unsigned __int64)v3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v74[0] = *v3;
    v74[1] = v3[1];
    v74[2] = v3[2];
    v74[3] = v3[3];
    epi16 = _mm_extract_epi16((__m128i)v74[3], 4);
    if ( epi16 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, MmUserProbeAddress, v11);
      if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v74[3])) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = *(_QWORD *)&v74[3];
      v15 = *(_QWORD *)&v74[3] + epi16;
      v11 = MmUserProbeAddress;
      if ( v15 > MmUserProbeAddress || v15 < *(_QWORD *)&v74[3] )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v18 = WORD4(v74[2]);
    if ( WORD4(v74[2]) )
    {
      v19 = PsGetCurrentProcessWow64Process(v15, v9, v11);
      if ( ((v19 == 0 ? 3 : 0) & LOBYTE(v74[2])) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = *(_QWORD *)&v74[2];
      v11 = MmUserProbeAddress;
      if ( *(_QWORD *)&v74[2] + v18 > MmUserProbeAddress || *(_QWORD *)&v74[2] + v18 < *(_QWORD *)&v74[2] )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( (_WORD)v18 )
      {
        v20 = *(const void **)&v74[2];
        v21 = v18;
        v69 = 1953067861;
        v82 = 260LL;
        v22 = gpLeakTrackingAllocator;
        *(_QWORD *)&v83 = &v82;
        *((_QWORD *)&v83 + 1) = &v69;
        v72 = v83;
        v75 = v18;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
        {
          v23 = 0LL;
          for ( j = 0LL; ; j = v23 )
          {
            if ( v23 >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_55;
            if ( *((_DWORD *)gpLeakTrackingAllocator + v23) == 1953067861 )
              break;
            ++v23;
          }
          v24 = 0;
          if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
          {
            v24 = 1;
            v21 = v18 + 16;
            v75 = v18 + 16;
          }
          Pool2 = ExAllocatePool2(*(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
          if ( !Pool2 )
            goto LABEL_46;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v22,
                                     Pool2,
                                     BackTrace) )
              goto LABEL_53;
            Pool2 += 16LL;
          }
          else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                        v22,
                                        Pool2,
                                        BackTrace) )
          {
LABEL_53:
            ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_46:
            Pool2 = 0LL;
            v68 = 0LL;
            goto LABEL_56;
          }
          v68 = Pool2;
        }
        else
        {
LABEL_55:
          Pool2 = ExAllocatePool2(*(_QWORD *)v72 & 0xFFFFFFFFFFFFFFFCuLL | 1, v18);
          v68 = Pool2;
        }
LABEL_56:
        *(_QWORD *)&v74[2] = Pool2;
        if ( !Pool2 )
          goto LABEL_57;
        v63 = 1;
        memmove((void *)Pool2, v20, v18);
        v2 = v77;
      }
    }
    if ( epi16 )
    {
      v29 = *(const void **)&v74[3];
      v30 = epi16;
      v70 = 1953067861;
      v78 = 260LL;
      v31 = gpLeakTrackingAllocator;
      *(_QWORD *)&v84 = &v78;
      *((_QWORD *)&v84 + 1) = &v70;
      v73 = v84;
      v79 = epi16;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74697355) == 0x74697355 )
      {
        v32 = 0LL;
        for ( k = 0LL; ; k = v32 )
        {
          if ( v32 >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_77;
          if ( *((_DWORD *)gpLeakTrackingAllocator + v32) == 1953067861 )
            break;
          ++v32;
        }
        v33 = 0;
        if ( epi16 < 0x1000uLL || (epi16 & 0xFFF) != 0 )
        {
          v33 = 1;
          v30 = epi16 + 16LL;
          v79 = v30;
        }
        v34 = ExAllocatePool2(*(_QWORD *)v73 & 0xFFFFFFFFFFFFFFFCuLL | 1, v30);
        if ( !v34 )
          goto LABEL_68;
        memset(v87, 0, sizeof(v87));
        RtlCaptureStackBackTrace(0, 0x14u, v87, 0LL);
        if ( v33 && (unsigned __int64)(v34 & 0xFFF) + 16 < 0x1000 )
        {
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v31,
                                   v34,
                                   v87) )
            goto LABEL_75;
          v34 += 16LL;
        }
        else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                      v31,
                                      v34,
                                      v87) )
        {
LABEL_75:
          ExFreePoolWithTag((PVOID)v34, 0);
LABEL_68:
          v34 = 0LL;
          v67 = 0LL;
          goto LABEL_78;
        }
        v67 = v34;
      }
      else
      {
LABEL_77:
        v34 = ExAllocatePool2(*(_QWORD *)v73 & 0xFFFFFFFFFFFFFFFCuLL | 1, epi16);
        v67 = v34;
      }
LABEL_78:
      *(_QWORD *)&v74[3] = v34;
      if ( !v34 )
      {
LABEL_57:
        v65 = 0;
        UserSetLastError(8LL, v25, v27, v28);
        goto LABEL_114;
      }
      v64 = 1;
      memmove((void *)v34, v29, epi16);
    }
    if ( !*(_QWORD *)&v74[2] )
      break;
    v35 = RIMIDE_CreateGenericHidDevice(v74, &v71);
    if ( v35 >= 0 )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_QWORD *)MmUserProbeAddress;
      *v2 = v71;
      v65 = 1;
      goto LABEL_114;
    }
    if ( v35 != -2147483631 )
      break;
    if ( qword_1C029C988 )
      qword_1C029C988(v36, v9, v11, v12);
    if ( UserIsUserCritSecInExclusive() )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
      v41 = gcDeferredDestroyTargets;
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v37, v39);
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v41, v37, v39, v40);
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
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v44, v43, v45);
      v47 = CurrentThreadWin32Thread;
      if ( CurrentThreadWin32Thread )
      {
        v48 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
        if ( (*(_DWORD *)(v47 + 44) || *(_DWORD *)(v47 + 48) || v48 > 0)
          && (unsigned int)dword_1C028EE70 > 6
          && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD03,
            (const GUID *)(v47 + 28),
            0LL,
            2u,
            &v88);
        }
        *(_DWORD *)(v47 + 44) = 0;
        v85 = 0LL;
        *(_OWORD *)(v47 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  }
  v65 = 0;
  UserSetLastError(87LL, v9, v11, v12);
LABEL_114:
  if ( v63 )
  {
    v9 = *(_QWORD *)&v74[2];
    if ( *(_QWORD *)&v74[2] )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *(char **)&v74[2]);
  }
  if ( v64 )
  {
    v9 = *(_QWORD *)&v74[3];
    if ( *(_QWORD *)&v74[3] )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *(char **)&v74[3]);
  }
LABEL_120:
  if ( qword_1C029C988 )
    qword_1C029C988(v10, v9, v11, v12);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
    v53 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v49, v51);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v53, v49, v51, v52);
  }
  v54 = AtomicExecutionCheck::GetCount();
  if ( v54 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v54, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v58 = PsGetCurrentThreadWin32Thread(v56, v55, v57);
    v59 = v58;
    if ( v58 )
    {
      v60 = *(_DWORD *)(v58 + 24);
      if ( (*(_DWORD *)(v59 + 44) || *(_DWORD *)(v59 + 48) || v60 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v59 + 28),
          0LL,
          2u,
          &v89);
      }
      *(_DWORD *)(v59 + 44) = 0;
      *(_OWORD *)(v59 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v65;
}
