/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C00031D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C0003600 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0003708 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
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
 *     UserGetLastError @ 0x1C0247AF0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  __int64 v2; // r13
  _UNKNOWN **v4; // r8
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  void *QuotaZInit; // rax
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  struct _DEVICE_OBJECT *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  NTSTATUS v19; // r14d
  int v20; // esi
  PDEVICE_OBJECT v21; // rcx
  unsigned int Count; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v29; // edx
  int v30; // r8d
  int v31; // eax
  int v32; // edx
  int v33; // r8d
  _UNKNOWN **v34; // r8
  __int64 v35; // rcx
  PDEVICE_OBJECT v36; // rcx
  __int16 v37; // r9
  __int64 v38; // rcx
  _UNKNOWN **v39; // r8
  char v40; // r14
  bool v41; // r15
  char LastError; // al
  int v43; // r8d
  int v44; // edx
  void *v45; // [rsp+60h] [rbp-48h]
  _BYTE v46[24]; // [rsp+68h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  struct _DEVICE_OBJECT *v48; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      42,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)Src,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v46,
    "InjectKeyboardInput",
    0LL);
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&Object);
  v45 = 0LL;
  v48 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !(_BYTE)Object )
  {
    if ( (unsigned int)(v2 - 1) > 0xF )
    {
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v39 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          (_DWORD)v39,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          44,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
          v2);
      }
      v20 = 0;
      UserSetLastError(87LL);
    }
    else
    {
      v8 = 3 * v2;
      v9 = 24 * v2;
      if ( 24 * v2 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (unsigned __int64)&Src[v9];
        v6 = MmUserProbeAddress;
        if ( (unsigned __int64)&Src[v9] > MmUserProbeAddress || v8 < (unsigned __int64)Src )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                     (NSInstrumentation::CLeakTrackingAllocator *)v8,
                     v6,
                     24 * v2,
                     0x6B697355u);
      v45 = QuotaZInit;
      if ( !QuotaZInit )
        ExRaiseStatus(-1073741801);
      memmove(QuotaZInit, Src, 24 * v2);
      if ( *(_QWORD *)(v7 + 896) != -1LL )
      {
LABEL_20:
        v11 = RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(v7 + 896), 3LL, 1LL, &v48);
        if ( v11 < 0 )
        {
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v13,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              21,
              48,
              (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
              v11);
          }
          v20 = 0;
          UserSetLastError(6LL);
          v21 = v48;
          goto LABEL_26;
        }
        v14 = v48;
        Object = v48;
        if ( ((__int64)v48->Dpc.DpcData & 0x2000) != 0 )
        {
          if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked(&v48->DeviceType) )
          {
            LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v12,
                v13,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                21,
                50,
                (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
            }
            v38 = 5LL;
            goto LABEL_102;
          }
          if ( LOBYTE(v14->Queue.Wcb.NumberOfMapRegisters) == 1 )
          {
            v15 = RIMIDEInjectKeyboardFromKeybdInputStruct(v14, v45, (unsigned int)v2);
            v19 = v15;
            if ( v15 >= 0 )
            {
              v20 = 1;
              v21 = (PDEVICE_OBJECT)Object;
LABEL_26:
              if ( v21 )
                ObfDereferenceObject(v21);
              if ( v45 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v45);
              if ( !v20 )
              {
                v21 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
                  || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
                {
                  v40 = 0;
                }
                v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LastError = UserGetLastError(WPP_GLOBAL_Control, v16, v17, v18);
                  LOBYTE(v43) = v41;
                  LOBYTE(v44) = v40;
                  WPP_RECORDER_AND_TRACE_SF_D(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v44,
                    v43,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    2,
                    21,
                    53,
                    (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
                    LastError);
                }
              }
              goto LABEL_31;
            }
            LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
            if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v16,
                v17,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                21,
                52,
                (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
                v15);
            }
            v20 = 0;
            v38 = RtlNtStatusToDosError(v19);
LABEL_105:
            UserSetLastError(v38);
            v21 = (PDEVICE_OBJECT)Object;
            goto LABEL_26;
          }
          v36 = WPP_GLOBAL_Control;
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_99:
            v38 = 87LL;
LABEL_102:
            v20 = 0;
            goto LABEL_105;
          }
          v37 = 51;
        }
        else
        {
          v36 = WPP_GLOBAL_Control;
          LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_99;
          v37 = 49;
        }
        WPP_RECORDER_AND_TRACE_SF_(
          v36->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          v37,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
        goto LABEL_99;
      }
      if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
      {
        v31 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v7 + 896);
        if ( v31 >= 0 )
          goto LABEL_20;
        LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v33,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            47,
            (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
            v31);
        }
        v35 = 1359LL;
      }
      else
      {
        LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v29,
            v30,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            21,
            46,
            (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
        }
        v35 = 5LL;
      }
      v20 = 0;
      UserSetLastError(v35);
    }
    v21 = 0LL;
    goto LABEL_26;
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v34 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      (_DWORD)v34,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      43,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
  }
  v20 = 0;
  UserSetLastError(5LL);
LABEL_31:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v21, v16, v17, v18);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1206LL);
    }
    if ( gphePrimaryDestroyTarget )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1214LL);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1220LL);
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
  if ( gptiCurrent && W32GetThreadWin32Thread(KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v27 = SGDGetUserSessionState(v24, v23, v25, v26);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v27 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v46);
  return v20;
}
