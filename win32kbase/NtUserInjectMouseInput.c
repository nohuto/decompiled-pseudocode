/*
 * XREFs of NtUserInjectMouseInput @ 0x1C0173C50
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C0003600 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C000431C (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004814 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0004878 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004E0F0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C01C4968 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserGetLastError @ 0x1C0247AF0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // esi
  __int64 v11; // rdx
  _UNKNOWN **v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  char *QuotaZInit; // rax
  int v23; // edx
  _UNKNOWN **v24; // r8
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  _UNKNOWN **v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  _UNKNOWN **v32; // r8
  PVOID v33; // r13
  _BYTE *v34; // rdi
  _UNKNOWN **v35; // r8
  int v36; // edx
  _UNKNOWN **v37; // r8
  ULONG v38; // ecx
  _UNKNOWN **v39; // r8
  int v40; // eax
  NTSTATUS v41; // r14d
  _UNKNOWN **v42; // r8
  _UNKNOWN **v43; // r8
  char v44; // r15
  bool v45; // r12
  char LastError; // al
  int v47; // r8d
  int v48; // edx
  unsigned int Count; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  char *v60; // [rsp+60h] [rbp-48h]
  __int64 *v61[3]; // [rsp+68h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  PVOID v63; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a2;
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
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)Src,
      v2);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v61, "InjectMouseInput", 0LL);
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object, v4, v5, v6);
  if ( (_BYTE)Object )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        31,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v10 = 0;
    UserSetLastError(5);
    goto LABEL_127;
  }
  v60 = 0LL;
  v63 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v20 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v20 = v17 & CurrentProcessWin32Process;
  }
  if ( (unsigned int)(v2 - 1) > 0xF )
  {
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v43 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v43,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        32,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v2);
    }
    v25 = 87;
    goto LABEL_114;
  }
  v21 = 32 * v2;
  if ( 32 * v2 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v17, v16, v18, v19) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int64)&Src[v21];
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)&Src[v21] > MmUserProbeAddress || v17 < (unsigned __int64)Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         (NSInstrumentation::CLeakTrackingAllocator *)v17,
                         v16,
                         32 * v2,
                         0x6D697355u);
  v60 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, Src, 32 * v2);
  if ( *(_QWORD *)(v20 + 888) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v24 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v23,
          (_DWORD)v24,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          34,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
      }
      v25 = 5;
LABEL_114:
      v10 = 0;
      UserSetLastError(v25);
      v33 = 0LL;
      goto LABEL_115;
    }
    v26 = RIMIDECreatePseudoMouseOrKeyboardDevice(0, (__int64 *)(v20 + 888));
    if ( v26 < 0 )
    {
      LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v28 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          (_DWORD)v28,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          35,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          v26);
      }
      v25 = 1359;
      goto LABEL_114;
    }
  }
  v29 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v20 + 888), 3u, 1, &v63);
  if ( v29 < 0 )
  {
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v32 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        (_DWORD)v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        36,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v29);
    }
    v10 = 0;
    UserSetLastError(6);
    v33 = v63;
    goto LABEL_115;
  }
  v34 = v63;
  Object = v63;
  if ( (*((_DWORD *)v63 + 64) & 0x2000) == 0 )
  {
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v35 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        (_DWORD)v35,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        37,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v10 = 0;
    UserSetLastError(87);
    v33 = Object;
    goto LABEL_115;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)v63 + 72, v30, v31) )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v37 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        (_DWORD)v37,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        38,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v38 = 5;
LABEL_81:
    v10 = 0;
    goto LABEL_82;
  }
  if ( v34[120] )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v39 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        (_DWORD)v39,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        39,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v38 = 87;
    goto LABEL_81;
  }
  v40 = RIMIDEInjectMouseFromMouseInputStruct(v34, v60, (unsigned int)v2);
  v41 = v40;
  if ( v40 >= 0 )
  {
    v10 = 1;
    goto LABEL_83;
  }
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v42 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      (_DWORD)v42,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      40,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      v40);
  }
  v10 = 0;
  v38 = RtlNtStatusToDosError(v41);
LABEL_82:
  UserSetLastError(v38);
LABEL_83:
  v33 = Object;
LABEL_115:
  if ( v60 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v60);
  if ( v33 )
    ObfDereferenceObject(v33);
  if ( !v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v44 = 0;
    }
    v12 = &WPP_RECORDER_INITIALIZED;
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(&WPP_RECORDER_INITIALIZED, v11, v13, v14);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v48,
        v47,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        41,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
  }
LABEL_127:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v12, v11, v13, v14);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v12, v11, v13, v14) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1220);
    }
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
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared(v51, v50, v52, v53) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v58 = SGDGetUserSessionState(v55, v54, v56, v57);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v58 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v61);
  return v10;
}
