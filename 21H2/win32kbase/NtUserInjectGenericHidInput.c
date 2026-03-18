/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C015D580
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
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01A0020 (RIMIDE_InjectGenericHidInput.c)
 *     UserGetLastError @ 0x1C0210CAC (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // rbp
  _UNKNOWN **v19; // r8
  __int64 v20; // rcx
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  int v24; // eax
  NTSTATUS v25; // ebx
  _UNKNOWN **v26; // r8
  char v27; // bl
  bool v28; // si
  char LastError; // al
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int Count; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v41; // rbx
  int v42; // eax
  _BYTE v44[8]; // [rsp+60h] [rbp-78h] BYREF
  PVOID Object; // [rsp+68h] [rbp-70h] BYREF
  __int64 *v46; // [rsp+70h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+78h] [rbp-60h] BYREF

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      21,
      14,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
      (char)a1,
      v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v46, "InjectGenericHidInput", 0LL);
  v44[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v44);
  Object = 0LL;
  if ( v44[0] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
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
        15,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v9 = 0;
    UserSetLastError(5LL, v6, v7, v8);
    goto LABEL_102;
  }
  if ( !v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
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
        16,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v9 = 0;
    UserSetLastError(87LL, v6, v7, v8);
LABEL_95:
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v10, v12, v13);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v30,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        24,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        LastError);
    }
    goto LABEL_102;
  }
  v14 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v18 = Object;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        (_DWORD)v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        17,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v14);
    v20 = 6LL;
    goto LABEL_35;
  }
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v22 = 18;
LABEL_45:
    WPP_RECORDER_AND_TRACE_SF_(
      v21->AttachedDevice,
      v15,
      (_DWORD)v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v22,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_46:
    v20 = 87LL;
LABEL_35:
    v9 = 0;
LABEL_36:
    UserSetLastError(v20, v15, (__int64)v19, v17);
    goto LABEL_92;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 88, v15, v16) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        (_DWORD)v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        19,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v20 = 5LL;
    goto LABEL_35;
  }
  if ( v18[136] != 2 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v22 = 20;
    goto LABEL_45;
  }
  if ( (*((_DWORD *)v18 + 72) & 0x80u) != 0 )
  {
    v23 = *(_DWORD *)(*((_QWORD *)v18 + 70) + 360LL);
    if ( (v23 & 8) != 0 && (v23 & 0x2000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v15) = 0;
      }
      v19 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          (_DWORD)v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          21,
          (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
      goto LABEL_46;
    }
  }
  v17 = *(unsigned __int16 *)(*((_QWORD *)v18 + 68) + 44LL);
  if ( (_DWORD)v17 != v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    v19 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        (_DWORD)v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        22,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v3,
        v17);
    goto LABEL_46;
  }
  v24 = RIMIDE_InjectGenericHidInput(v18, 1LL, v4, v3);
  v25 = v24;
  if ( v24 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    v26 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v26,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        23,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids,
        v24);
    }
    v9 = 0;
    v20 = RtlNtStatusToDosError(v25);
    goto LABEL_36;
  }
  v9 = 1;
LABEL_92:
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( !v9 )
    goto LABEL_95;
LABEL_102:
  if ( qword_1C029C988 )
    qword_1C029C988(v11, v10, v12, v13);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v33, v32, v34, v35);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v38, v37, v39);
    v41 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v42 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v41 + 44) || *(_DWORD *)(v41 + 48) || v42 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v41 + 28),
          0LL,
          2u,
          &v47);
      }
      *(_DWORD *)(v41 + 44) = 0;
      *(_OWORD *)(v41 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v46);
  return v9;
}
