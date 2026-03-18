/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E70
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C0146E40 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     HMValidateSharedHandle @ 0x1C005E0B0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F80 (NtUserRemoveInjectionDevice.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0198FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 */

_BOOL8 __fastcall NtUserInitializePointerDeviceInjectionEx(int a1, int a2, __int64 a3, int a4, int a5, _QWORD *a6)
{
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

  v33[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v33);
  LODWORD(v11) = 0;
  v35[0] = 0LL;
  if ( v33[0] )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v14 = 25;
LABEL_9:
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v10,
      (_DWORD)v13,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v14,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_10:
    v15 = 5;
LABEL_36:
    v20 = 0;
    UserSetLastError(v15);
    goto LABEL_37;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v14 = 26;
    goto LABEL_9;
  }
  if ( a1 == 3 )
  {
    if ( a2 != 1 )
    {
LABEL_35:
      v15 = 87;
      goto LABEL_36;
    }
  }
  else if ( a1 != 2 || (unsigned int)(a2 - 1) > 0xFF )
  {
    goto LABEL_35;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
    goto LABEL_35;
  if ( !a3 || (v11 = HMValidateSharedHandle(a3)) != 0 )
  {
    v21 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v11, a4, 0, a5, (__int64)v35);
    v20 = v21 >= 0;
    if ( v21 == -2147483631 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3351);
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
LABEL_37:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v17, (__int64)v16, v18, v19) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
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
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v24, v23, v25, v26);
  v31 = SGDGetUserSessionState(v28, v27, v29, v30);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v31 + 8));
  return v20;
}
