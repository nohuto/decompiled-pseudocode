/*
 * XREFs of NtUserInjectMouseInput @ 0x1C015DD80
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00043E8 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00046D4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004E54 (RIMIDECheckCurrentProcessForInjectionCapability.c)
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
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C019DE20 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r14d
  __int64 v9; // rdx
  _UNKNOWN **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 Pool2; // rsi
  __int64 v14; // rdx
  _UNKNOWN **v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  size_t v18; // rdi
  PVOID v19; // r14
  size_t v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _UNKNOWN **v31; // r8
  _BYTE *v32; // r12
  _UNKNOWN **v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r9
  _UNKNOWN **v36; // r8
  __int64 v37; // rcx
  int v38; // eax
  NTSTATUS v39; // edi
  _UNKNOWN **v40; // r8
  char v41; // si
  bool v42; // r15
  char LastError; // al
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  unsigned int Count; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v56; // rdi
  int v57; // eax
  char v59[8]; // [rsp+50h] [rbp-1A8h] BYREF
  void *Src; // [rsp+58h] [rbp-1A0h]
  __int64 v61; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  int v63; // [rsp+70h] [rbp-188h] BYREF
  unsigned int v64; // [rsp+78h] [rbp-180h]
  int v65; // [rsp+88h] [rbp-170h]
  __int64 v66; // [rsp+90h] [rbp-168h]
  __int128 v67; // [rsp+A0h] [rbp-158h]
  __int64 v68; // [rsp+B8h] [rbp-140h] BYREF
  size_t v69; // [rsp+C0h] [rbp-138h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-130h]
  __int64 CurrentProcessWin32Process; // [rsp+D0h] [rbp-128h]
  __int64 *v72; // [rsp+D8h] [rbp-120h] BYREF
  __int128 v73; // [rsp+E0h] [rbp-118h]
  PVOID BackTrace[20]; // [rsp+100h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1A0h] [rbp-58h] BYREF

  v2 = a2;
  v64 = a2;
  v3 = a1;
  Src = a1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      30,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)a1,
      v2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v72, "InjectMouseInput", 0LL);
  v65 = 0;
  v59[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v59);
  if ( v59[0] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v4) = 0;
    }
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        31,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v8 = 0;
    UserSetLastError(5LL, v4, v6, v7);
    goto LABEL_135;
  }
  Pool2 = 0LL;
  v66 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v17 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v17 > 0xF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        (_DWORD)v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        32,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v2);
    v25 = 87LL;
    goto LABEL_122;
  }
  v18 = 32 * v2;
  if ( v18 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v17, v14, v15) == 0 ? 3 : 0) & (unsigned __int8)v3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&v3[v18] > MmUserProbeAddress || &v3[v18] < v3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v63 = 1835627349;
  v68 = 260LL;
  v19 = gpLeakTrackingAllocator;
  *(_QWORD *)&v73 = &v68;
  *((_QWORD *)&v73 + 1) = &v63;
  v67 = v73;
  v20 = v18;
  v69 = v18;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D697355) == 0x6D697355 )
  {
    v21 = 0LL;
    v70 = 0LL;
    while ( v21 < *((unsigned int *)gpLeakTrackingAllocator + 11) )
    {
      if ( *((_DWORD *)gpLeakTrackingAllocator + v21) == 1835627349 )
      {
        v22 = 0;
        if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
        {
          v22 = 1;
          v20 = v18 + 16;
          v69 = v18 + 16;
        }
        Pool2 = ExAllocatePool2(*(_QWORD *)v67 & 0xFFFFFFFFFFFFFFFCuLL | 1, v20);
        if ( !Pool2 )
        {
LABEL_33:
          Pool2 = 0LL;
          v61 = 0LL;
LABEL_34:
          v3 = (char *)Src;
          goto LABEL_45;
        }
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v19,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_39:
            v61 = Pool2;
            goto LABEL_34;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v19,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_39;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_33;
      }
      v70 = ++v21;
    }
    v3 = (char *)Src;
  }
  Pool2 = ExAllocatePool2(*(_QWORD *)v67 & 0xFFFFFFFFFFFFFFFCuLL | 1, v18);
  v61 = Pool2;
LABEL_45:
  v66 = Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  memmove((void *)Pool2, v3, v18);
  v23 = CurrentProcessWin32Process;
  if ( *(_QWORD *)(CurrentProcessWin32Process + 904) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      v15 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          (_DWORD)v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          34,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
      v25 = 5LL;
LABEL_122:
      v8 = 0;
      UserSetLastError(v25, v14, (__int64)v15, v16);
      v32 = 0LL;
      goto LABEL_123;
    }
    v26 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, (__int64 *)(v23 + 904), v24);
    if ( v26 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      v15 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          (_DWORD)v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          35,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          v26);
      v25 = 1359LL;
      goto LABEL_122;
    }
  }
  v27 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v23 + 904), 3u, 1, &Object);
  if ( v27 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v28) = 0;
    }
    v31 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        (_DWORD)v31,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        36,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v27);
    v8 = 0;
    UserSetLastError(6LL, v28, (__int64)v31, v30);
    v32 = Object;
    goto LABEL_123;
  }
  v32 = Object;
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v28) = 0;
    }
    v33 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        (_DWORD)v33,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        37,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v8 = 0;
    UserSetLastError(87LL, v28, (__int64)v33, v30);
    goto LABEL_123;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 88, v28, v29) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v34) = 0;
    }
    v36 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v36,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        38,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v37 = 5LL;
LABEL_93:
    v8 = 0;
    goto LABEL_94;
  }
  if ( v32[136] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v34) = 0;
    }
    v36 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v36,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        39,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v37 = 87LL;
    goto LABEL_93;
  }
  v38 = RIMIDEInjectMouseFromMouseInputStruct(v32, Pool2, v64);
  v39 = v38;
  if ( v38 >= 0 )
  {
    v8 = 1;
    goto LABEL_123;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v9) = 0;
  }
  v40 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      (_DWORD)v40,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      40,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      v38);
  }
  v8 = 0;
  v37 = RtlNtStatusToDosError(v39);
LABEL_94:
  UserSetLastError(v37, v34, (__int64)v36, v35);
LABEL_123:
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  if ( v32 )
    ObfDereferenceObject(v32);
  if ( !v8 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v41 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v41 = 0;
    }
    v10 = &WPP_RECORDER_INITIALIZED;
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(&WPP_RECORDER_INITIALIZED, v9, v11, v12);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v41;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v45,
        v44,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        41,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
  }
LABEL_135:
  if ( qword_1C029C988 )
    qword_1C029C988(v10, v9, v11, v12);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48);
    v50 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v46, v48);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v50, v46, v48, v49);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v53, v52, v54);
    v56 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v57 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v56 + 44) || *(_DWORD *)(v56 + 48) || v57 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v56 + 28),
          0LL,
          2u,
          &v75);
      }
      *(_DWORD *)(v56 + 44) = 0;
      *(_OWORD *)(v56 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v72);
  return v8;
}
