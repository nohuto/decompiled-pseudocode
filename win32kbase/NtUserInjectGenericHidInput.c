/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C0173440
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C0003600 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
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
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01C6EA0 (RIMIDE_InjectGenericHidInput.c)
 *     UserGetLastError @ 0x1C0247AF0 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // edi
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _BYTE *v19; // rbp
  _UNKNOWN **v20; // r8
  ULONG v21; // ecx
  PDEVICE_OBJECT v22; // rcx
  _UNKNOWN **v23; // r8
  __int16 v24; // ax
  _UNKNOWN **v25; // r8
  int v26; // ecx
  _UNKNOWN **v27; // r8
  int v28; // r9d
  _UNKNOWN **v29; // r8
  int v30; // eax
  NTSTATUS v31; // esi
  _UNKNOWN **v32; // r8
  char v33; // si
  bool v34; // bp
  char LastError; // al
  int v36; // r8d
  int v37; // edx
  unsigned int Count; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v50; // [rsp+68h] [rbp-30h] BYREF
  int v51; // [rsp+B8h] [rbp+20h] BYREF

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
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
      (char)a1,
      v4,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v50, "InjectGenericHidInput", 0LL);
  LOBYTE(v51) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v51, v6, v7, v8);
  Object = 0LL;
  if ( (_BYTE)v51 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
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
        15,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v11 = 0;
    UserSetLastError(5);
    goto LABEL_102;
  }
  if ( !v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
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
        16,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v11 = 0;
    UserSetLastError(87);
LABEL_95:
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError(WPP_GLOBAL_Control, v12, v14, v15);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v37,
        v36,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        24,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        LastError);
    }
    goto LABEL_102;
  }
  v16 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v19 = Object;
  if ( v16 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    v20 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        (_DWORD)v20,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        17,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v16);
    }
    v21 = 6;
    goto LABEL_35;
  }
  if ( !_bittest((const signed __int32 *)Object + 64, 0xDu) )
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    v23 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v24 = 18;
LABEL_45:
    WPP_RECORDER_AND_TRACE_SF_(
      v22->AttachedDevice,
      v17,
      (_DWORD)v23,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v24,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_46:
    v21 = 87;
LABEL_35:
    v11 = 0;
LABEL_36:
    UserSetLastError(v21);
    goto LABEL_92;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72, v17, v18) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    v25 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        (_DWORD)v25,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        19,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v21 = 5;
    goto LABEL_35;
  }
  if ( v19[120] != 2 )
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    v23 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v24 = 20;
    goto LABEL_45;
  }
  if ( (*((_DWORD *)v19 + 68) & 0x80u) != 0 )
  {
    v26 = *(_DWORD *)(*((_QWORD *)v19 + 68) + 360LL);
    if ( (v26 & 8) != 0 && (v26 & 0x2000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v17) = 0;
      }
      v27 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          (_DWORD)v27,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          21,
          21,
          (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
      }
      goto LABEL_46;
    }
  }
  v28 = *(unsigned __int16 *)(*((_QWORD *)v19 + 66) + 44LL);
  if ( v28 != v3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    v29 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        (_DWORD)v29,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        22,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v3,
        v28);
    }
    goto LABEL_46;
  }
  v30 = RIMIDE_InjectGenericHidInput(v19, 1LL, v4, v3);
  v31 = v30;
  if ( v30 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x14u)
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v12) = 0;
    }
    v32 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        (_DWORD)v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        23,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
        v30);
    }
    v11 = 0;
    v21 = RtlNtStatusToDosError(v31);
    goto LABEL_36;
  }
  v11 = 1;
LABEL_92:
  if ( v19 )
    ObfDereferenceObject(v19);
  if ( !v11 )
    goto LABEL_95;
LABEL_102:
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
    *((_DWORD *)PtiCurrentShared(v40, v39, v41, v42) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v47 = SGDGetUserSessionState(v44, v43, v45, v46);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v47 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v50);
  return v11;
}
