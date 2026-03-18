/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C0003160
 * Callers:
 *     <none>
 * Callees:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00037A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
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
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 Pool2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  size_t v11; // r15
  PVOID v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  char v15; // r15
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _DEVICE_OBJECT *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  NTSTATUS v25; // r15d
  int v26; // edi
  PDEVICE_OBJECT v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int Count; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  PDEVICE_OBJECT v37; // rcx
  __int16 v38; // r9
  __int64 v39; // rcx
  ULONG v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  char v43; // si
  bool v44; // r14
  char LastError; // al
  int v46; // r8d
  int v47; // edx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v49; // rsi
  int v50; // eax
  _BYTE v51[8]; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1A0h]
  __int64 v53; // [rsp+60h] [rbp-198h]
  struct _DEVICE_OBJECT *v54; // [rsp+68h] [rbp-190h] BYREF
  int v55; // [rsp+70h] [rbp-188h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-180h]
  int v57; // [rsp+88h] [rbp-170h]
  void *v58; // [rsp+90h] [rbp-168h]
  __int128 v59; // [rsp+A0h] [rbp-158h]
  __int64 v60; // [rsp+B8h] [rbp-140h] BYREF
  size_t v61; // [rsp+C0h] [rbp-138h]
  unsigned __int64 i; // [rsp+C8h] [rbp-130h]
  __int64 CurrentProcessWin32Process; // [rsp+D0h] [rbp-128h]
  _BYTE v64[8]; // [rsp+D8h] [rbp-120h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-118h]
  PVOID BackTrace[20]; // [rsp+100h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+1A0h] [rbp-58h] BYREF

  v2 = a2;
  v56 = a2;
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
      42,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)Src,
      v2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v64,
    "InjectKeyboardInput",
    0LL);
  v57 = 0;
  v51[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)v51);
  Pool2 = 0LL;
  v58 = 0LL;
  v54 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7, v8);
  if ( !v51[0] )
  {
    if ( (unsigned int)(v2 - 1) > 0xF )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          44,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
          v2);
      v26 = 0;
      UserSetLastError(87LL, v9, v10);
      goto LABEL_149;
    }
    v11 = 24 * v2;
    Object = (PVOID)(24 * v2);
    if ( 24 * v2 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v11] > MmUserProbeAddress || &Src[v11] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v55 = 1802072917;
    v60 = 260LL;
    v12 = gpLeakTrackingAllocator;
    *(_QWORD *)&v65 = &v60;
    *((_QWORD *)&v65 + 1) = &v55;
    v59 = v65;
    v13 = v11;
    v61 = v11;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6B697355) != 0x6B697355 )
    {
LABEL_14:
      Pool2 = ExAllocatePool2(*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFFCuLL | 1, v11);
      v53 = Pool2;
LABEL_15:
      v58 = (void *)Pool2;
      if ( !Pool2 )
        ExRaiseStatus(-1073741801);
      memmove((void *)Pool2, Src, v11);
      v16 = CurrentProcessWin32Process;
      if ( *(_QWORD *)(CurrentProcessWin32Process + 912) != -1LL )
      {
LABEL_39:
        v17 = RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(v16 + 912), 3LL, 1LL, &v54);
        if ( v17 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v18) = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              21,
              48,
              (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
              v17);
          v26 = 0;
          UserSetLastError(6LL, v18, v19);
          v27 = v54;
          goto LABEL_46;
        }
        v20 = v54;
        Object = v54;
        if ( ((__int64)v54->SecurityDescriptor & 0x2000) != 0 )
        {
          if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked(&v54->Queue.Wcb.DmaWaitEntry.Blink) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
              || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v18) = 0;
            }
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v18,
                v19,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                21,
                50,
                (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
            v39 = 5LL;
            goto LABEL_118;
          }
          if ( LOBYTE(v20->Queue.Wcb.CurrentIrp) == 1 )
          {
            v21 = RIMIDEInjectKeyboardFromKeybdInputStruct(v20, Pool2, v56);
            v25 = v21;
            if ( v21 < 0 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
                || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v22) = 0;
              }
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v22,
                  v23,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  2,
                  21,
                  52,
                  (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
                  v21);
              }
              v26 = 0;
              v40 = RtlNtStatusToDosError(v25);
              UserSetLastError(v40, v41, v42);
            }
            else
            {
              v26 = 1;
            }
            goto LABEL_45;
          }
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v18) = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_115:
            v39 = 87LL;
LABEL_118:
            v26 = 0;
            UserSetLastError(v39, v18, v19);
LABEL_45:
            v27 = (PDEVICE_OBJECT)Object;
LABEL_46:
            if ( v27 )
              ObfDereferenceObject(v27);
            if ( Pool2 )
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                (void *)Pool2);
            if ( !v26 )
            {
              v27 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
                || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                v43 = 0;
              }
              v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LastError = UserGetLastError(WPP_GLOBAL_Control, v22, v23, v24);
                LOBYTE(v46) = v44;
                LOBYTE(v47) = v43;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v47,
                  v46,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  2,
                  21,
                  53,
                  (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
                  LastError);
              }
            }
            goto LABEL_51;
          }
          v38 = 51;
        }
        else
        {
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v18) = 0;
          }
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_115;
          v38 = 49;
        }
        WPP_RECORDER_AND_TRACE_SF_(
          v37->AttachedDevice,
          v18,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          v38,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
        goto LABEL_115;
      }
      if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
      {
        v35 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v16 + 912);
        if ( v35 >= 0 )
          goto LABEL_39;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v33) = 0;
        }
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v33,
            v34,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            47,
            (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
            v35);
        v36 = 1359LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v33) = 0;
        }
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v33,
            v34,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            46,
            (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
        v36 = 5LL;
      }
      v26 = 0;
      UserSetLastError(v36, v33, v34);
LABEL_149:
      v27 = 0LL;
      goto LABEL_46;
    }
    v14 = 0LL;
    for ( i = 0LL; ; i = v14 )
    {
      if ( v14 >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_14;
      if ( *((_DWORD *)gpLeakTrackingAllocator + v14) == 1802072917 )
        break;
      ++v14;
    }
    v15 = 0;
    if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
    {
      v15 = 1;
      v13 += 16LL;
      v61 = v13;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFFCuLL | 1, v13);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v12,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
LABEL_30:
          v53 = Pool2;
LABEL_31:
          v11 = (size_t)Object;
          goto LABEL_15;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v12,
                                   Pool2,
                                   BackTrace) )
      {
        goto LABEL_30;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
    v53 = 0LL;
    goto LABEL_31;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v9) = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      43,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
  v26 = 0;
  UserSetLastError(5LL, v9, v10);
LABEL_51:
  if ( qword_1C029C988 )
    qword_1C029C988(v27, v22, v23, v24);
  if ( (unsigned int)UserIsUserCritSecInExclusive(v27, v22, v23, v24) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v28, v30);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread(KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v49 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v50 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v49 + 44) || *(_DWORD *)(v49 + 48) || v50 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD03, v49 + 28, 0, 2u, &v67);
      }
      *(_DWORD *)(v49 + 44) = 0;
      *(_OWORD *)(v49 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v64);
  return v26;
}
