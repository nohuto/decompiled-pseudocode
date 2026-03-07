__int64 __fastcall NtUserInjectDeviceInput(char *a1, NSInstrumentation::CLeakTrackingAllocator *a2, unsigned int a3)
{
  __int64 v3; // r13
  NSInstrumentation::CLeakTrackingAllocator *v4; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // r8d
  int v11; // esi
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // eax
  ULONG64 v18; // rdx
  __int64 v19; // r8
  PVOID v20; // r15
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // r9
  ULONG v23; // ecx
  __int64 v24; // r9
  NSInstrumentation::CLeakTrackingAllocator *v25; // rcx
  int v26; // eax
  void *QuotaZInit; // rax
  int v28; // eax
  NTSTATUS v29; // r15d
  _UNKNOWN **v30; // r8
  char v31; // r14
  bool v32; // r15
  char LastError; // al
  int v34; // r8d
  int v35; // edx
  unsigned int Count; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  NSInstrumentation::CLeakTrackingAllocator *v47; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  void *v49; // [rsp+80h] [rbp-48h]
  __int64 *v50[3]; // [rsp+88h] [rbp-40h] BYREF
  int v51; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
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
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)a1,
      (char)v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v50, "InjectDeviceInput", 0LL);
  LOBYTE(v51) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v51, v6, v7, v8);
  Object = 0LL;
  v49 = 0LL;
  if ( (_BYTE)v51 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        71,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v11 = 0;
    UserSetLastError(5);
    goto LABEL_121;
  }
  if ( !(_DWORD)v3 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        72,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
LABEL_108:
    v11 = 0;
    UserSetLastError(87);
    v20 = 0LL;
    goto LABEL_109;
  }
  v16 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v30 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)v30,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        73,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v3);
    }
    goto LABEL_108;
  }
  v17 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v17 < 0 )
  {
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        74,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v17);
    }
    v11 = 0;
    UserSetLastError(6);
    v20 = Object;
    goto LABEL_109;
  }
  v47 = (NSInstrumentation::CLeakTrackingAllocator *)Object;
  if ( (*((_DWORD *)Object + 64) & 0x2000) == 0 )
  {
    v21 = WPP_GLOBAL_Control;
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v22 = 75;
LABEL_48:
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      v18,
      v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v22,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_49:
    v23 = 87;
LABEL_50:
    v11 = 0;
    goto LABEL_51;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72, v18, v19) )
  {
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        76,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v23 = 5;
    goto LABEL_50;
  }
  v25 = v47;
  if ( *((_BYTE *)v47 + 120) != 2 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v22 = 77;
    goto LABEL_48;
  }
  if ( (*((_DWORD *)v47 + 68) & 0x80u) != 0 )
  {
    v25 = (NSInstrumentation::CLeakTrackingAllocator *)*(unsigned int *)(*((_QWORD *)v47 + 68) + 360LL);
    if ( ((unsigned __int8)v25 & 8) == 0 || (v26 = 1, ((unsigned __int16)v25 & 0x2000) != 0) )
      v26 = 0;
    if ( v26 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v22 = 78;
      goto LABEL_48;
    }
  }
  if ( v16 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v25, v18, v19, v24) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)v4 + v16);
    v18 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 + v16 > MmUserProbeAddress || v25 < v4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v25,
                         v18,
                         (unsigned int)v16,
                         0x74697355u);
  v49 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, v4, (unsigned int)v16);
  v28 = RIMIDEInjectDeviceInput(v47, v49, (unsigned int)v3, 4LL);
  v29 = v28;
  if ( v28 >= 0 )
  {
    v11 = 1;
    v20 = v47;
    goto LABEL_109;
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
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      80,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      v28);
  }
  v11 = 0;
  v23 = RtlNtStatusToDosError(v29);
LABEL_51:
  UserSetLastError(v23);
  v20 = v47;
LABEL_109:
  if ( v49 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v49);
  if ( v20 )
    ObfDereferenceObject(v20);
  if ( !v11 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v31 = 0;
    }
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v12, v14, v15);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v35,
        v34,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        81,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
  }
LABEL_121:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v13, v12, v14, v15);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v13, v12, v14, v15) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v51 = 0x20000;
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
    *((_DWORD *)PtiCurrentShared(v38, v37, v39, v40) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v45 = SGDGetUserSessionState(v42, v41, v43, v44);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v45 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v50);
  return v11;
}
