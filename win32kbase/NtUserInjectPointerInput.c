__int64 __fastcall NtUserInjectPointerInput(char *a1, NSInstrumentation::CLeakTrackingAllocator *a2, unsigned int a3)
{
  __int64 v3; // r14
  NSInstrumentation::CLeakTrackingAllocator *v4; // rsi
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
  int v16; // eax
  ULONG64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rdi
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  ULONG v22; // ecx
  __int64 v23; // r9
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  int v25; // eax
  int v26; // r12d
  __int64 v27; // rdi
  void *QuotaZInit; // rax
  int v29; // edx
  int v30; // r8d
  PDEVICE_OBJECT v31; // rcx
  _UNKNOWN **v32; // r8
  __int16 v33; // ax
  unsigned int Next; // r9d
  int v35; // r14d
  char v36; // r14
  bool v37; // r15
  char LastError; // al
  int v39; // r8d
  int v40; // edx
  unsigned int Count; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  struct _DEVICE_OBJECT *v52; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  void *v54; // [rsp+80h] [rbp-48h]
  __int64 *v55[3]; // [rsp+88h] [rbp-40h] BYREF
  int v56; // [rsp+E8h] [rbp+20h] BYREF

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
      54,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)a1,
      (char)v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v55, "InjectPointerInput", 0LL);
  LOBYTE(v56) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v56, v6, v7, v8);
  v54 = 0LL;
  Object = 0LL;
  if ( (_BYTE)v56 )
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
        55,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v11 = 0;
    UserSetLastError(5);
    goto LABEL_160;
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
        56,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v11 = 0;
    UserSetLastError(87);
    v13 = 0LL;
    goto LABEL_148;
  }
  v16 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v16 < 0 )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        57,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v16);
    }
    v11 = 0;
    UserSetLastError(6);
    v13 = (PDEVICE_OBJECT)Object;
    goto LABEL_148;
  }
  v19 = Object;
  v52 = (struct _DEVICE_OBJECT *)Object;
  if ( (*((_DWORD *)Object + 64) & 0x2000) != 0 )
  {
    if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72, v17, v18) )
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          59,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
      }
      v22 = 5;
      goto LABEL_50;
    }
    if ( (v19[68] & 0x80u) == 0 )
    {
      v20 = WPP_GLOBAL_Control;
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v21 = 60;
      goto LABEL_48;
    }
    v24 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)v19 + 68);
    if ( (*((_DWORD *)v24 + 90) & 8) == 0 || (v25 = 1, (*((_DWORD *)v24 + 90) & 0x2000) != 0) )
      v25 = 0;
    if ( !v25 )
    {
      v20 = WPP_GLOBAL_Control;
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v21 = 61;
      goto LABEL_48;
    }
    v26 = *((_DWORD *)v24 + 6);
    v27 = 152 * v3;
    if ( 152 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v24, v17, v18, v23) == 0 ? 3 : 0) & (unsigned __int8)v4) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)v4 + v27);
      v17 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 + v27 > MmUserProbeAddress || v24 < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v24, v17, 152 * v3, 0x74697355u);
    v54 = QuotaZInit;
    if ( !QuotaZInit )
      ExRaiseStatus(-1073741801);
    memmove(QuotaZInit, v4, 152 * v3);
    v29 = (int)v54;
    v30 = *(_DWORD *)v54;
    if ( *(_DWORD *)v54 == 3 )
    {
      if ( v26 != 5 )
      {
        v31 = WPP_GLOBAL_Control;
        LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        v32 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_103;
        v33 = 63;
LABEL_102:
        WPP_RECORDER_AND_TRACE_SF_d(
          v31->AttachedDevice,
          v29,
          (_DWORD)v32,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          v33,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          v26);
LABEL_103:
        v11 = 0;
        UserSetLastError(87);
        goto LABEL_52;
      }
      if ( (_DWORD)v3 != 1 )
      {
        LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v30,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            64,
            (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
            v3);
        }
        goto LABEL_49;
      }
    }
    else
    {
      if ( v30 != 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v29) = 0;
        }
        if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v30,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            67,
            (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
            *(_DWORD *)v54);
        }
        goto LABEL_49;
      }
      if ( v26 != 3 )
      {
        v31 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v29) = 0;
        }
        v32 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_103;
        v33 = 65;
        goto LABEL_102;
      }
      Next = (unsigned int)v52[1].Dpc.DpcListEntry.Next[96].Next;
      if ( (unsigned int)v3 > Next )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v29) = 0;
        }
        if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v30,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            66,
            (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
            v3,
            Next);
        }
        goto LABEL_49;
      }
    }
    v35 = RIMIDEInjectHIDReportFromPointerInfo(v52, v54, (unsigned int)v3);
    if ( v35 >= 0 )
    {
      v11 = 1;
      goto LABEL_52;
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
        68,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v35);
    }
    v11 = 0;
    v22 = RtlNtStatusToDosError(v35);
    goto LABEL_51;
  }
  v20 = WPP_GLOBAL_Control;
  LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_49;
  v21 = 58;
LABEL_48:
  WPP_RECORDER_AND_TRACE_SF_(
    v20->AttachedDevice,
    v17,
    v18,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    21,
    v21,
    (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_49:
  v22 = 87;
LABEL_50:
  v11 = 0;
LABEL_51:
  UserSetLastError(v22);
LABEL_52:
  v13 = v52;
LABEL_148:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( v54 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v54);
  if ( !v11 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v12, v14, v15);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v40,
        v39,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        69,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
  }
LABEL_160:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v13, v12, v14, v15);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v13, v12, v14, v15) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v56 = 0x20000;
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
    *((_DWORD *)PtiCurrentShared(v43, v42, v44, v45) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v50 = SGDGetUserSessionState(v47, v46, v48, v49);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v50 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v55);
  return v11;
}
