/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C0172630 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004814 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     HMValidateSharedHandle @ 0x1C003DE88 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004E0F0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0175990 (NtUserRemoveInjectionDevice.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C01C6D10 (RIMIDE_InitializePointerDeviceInjection.c)
 */

_BOOL8 __fastcall NtUserInitializePointerDeviceInjectionEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int v6; // r13d
  int v8; // r14d
  int v10; // edx
  __int64 v11; // r15
  PDEVICE_OBJECT v12; // rcx
  _UNKNOWN **v13; // r8
  __int16 v14; // r9
  int v15; // ecx
  _QWORD *v16; // rdx
  ULONG64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOL v20; // esi
  int v21; // eax
  unsigned int Count; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _BYTE v33[4]; // [rsp+50h] [rbp-48h] BYREF
  int v34; // [rsp+54h] [rbp-44h]
  _QWORD v35[3]; // [rsp+68h] [rbp-30h] BYREF

  v6 = a4;
  v8 = a2;
  v33[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v33, a2, a3, a4);
  LODWORD(v11) = 0;
  v35[0] = 0LL;
  if ( v33[0] )
  {
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v13 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v14 = 25;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v10,
      (_DWORD)v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v14,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_11:
    v15 = 5;
LABEL_38:
    v20 = 0;
    UserSetLastError(v15);
    goto LABEL_39;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v12 = WPP_GLOBAL_Control;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v13 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v14 = 26;
    goto LABEL_10;
  }
  if ( a1 == 3 )
  {
    if ( v8 != 1 )
    {
LABEL_37:
      v15 = 87;
      goto LABEL_38;
    }
  }
  else if ( a1 != 2 || (unsigned int)(v8 - 1) > 0xFF )
  {
    goto LABEL_37;
  }
  if ( (unsigned int)(v6 - 1) > 2 )
    goto LABEL_37;
  if ( !a3 || (v11 = HMValidateSharedHandle(a3)) != 0 )
  {
    v21 = RIMIDE_InitializePointerDeviceInjection(a1, v8, v11, v6, 0, a5, (__int64)v35);
    v20 = v21 >= 0;
    if ( v21 == -2147483631 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3350);
    }
    if ( v20 )
    {
      v18 = (__int64)a6;
      v17 = MmUserProbeAddress;
      v16 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = *v16;
      *a6 = v35[0];
    }
  }
  else
  {
    v20 = 0;
  }
LABEL_39:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v17, v16, v18, v19);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v17, (__int64)v16, v18, v19) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v34 = 0x20000;
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
    *((_DWORD *)PtiCurrentShared(v24, v23, v25, v26) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v31 = SGDGetUserSessionState(v28, v27, v29, v30);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v31 + 8));
  return v20;
}
