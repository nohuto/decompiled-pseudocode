/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C0146880
 * Callers:
 *     <none>
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     HMValidateSharedHandle @ 0x1C005E0B0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C0198EB0 (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        NSInstrumentation::CLeakTrackingAllocator *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        ULONG64 a7)
{
  __int64 v7; // r13
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char *v11; // r14
  __int64 v12; // r15
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // r9
  int v15; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r9
  int v19; // edi
  char *QuotaZInit; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int Count; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _BYTE v45[4]; // [rsp+50h] [rbp-68h] BYREF
  int v46; // [rsp+54h] [rbp-64h]
  int v47; // [rsp+58h] [rbp-60h]
  int v48; // [rsp+5Ch] [rbp-5Ch]
  int v49; // [rsp+60h] [rbp-58h]
  __int64 v50; // [rsp+70h] [rbp-48h] BYREF
  char *v51; // [rsp+78h] [rbp-40h]
  int v52; // [rsp+80h] [rbp-38h]

  v7 = a4;
  while ( 1 )
  {
    v45[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v45);
    v11 = 0LL;
    v51 = 0LL;
    v12 = 0LL;
    v50 = 0LL;
    if ( v45[0] )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v14 = 10;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        v13->AttachedDevice,
        (_DWORD)v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        v14,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_11:
      v15 = 5;
LABEL_61:
      v19 = 0;
      UserSetLastError(v15);
      goto LABEL_62;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v14 = 11;
      goto LABEL_10;
    }
    v17 = 32 * v7;
    if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v15 = 87;
      goto LABEL_61;
    }
    if ( a5 )
    {
      v12 = HMValidateSharedHandle(a5);
      if ( !v12 )
      {
        v19 = 0;
        goto LABEL_58;
      }
    }
    if ( v17 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16, v9, v10) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a3 + v17);
      v9 = (_QWORD *)MmUserProbeAddress;
      if ( (unsigned __int64)a3 + v17 > MmUserProbeAddress || v16 < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v16,
                           (unsigned __int64)v9,
                           (unsigned int)v17,
                           0x74697355u);
    v11 = QuotaZInit;
    v51 = QuotaZInit;
    if ( !QuotaZInit )
      ExRaiseStatus(-1073741801);
    memmove(QuotaZInit, a3, 32 * v7);
    v21 = RIMIDE_InitializeDeviceInjection(a1, a2, v11, (unsigned int)v7, v12, a6, &v50);
    v52 = v21;
    if ( v21 >= 0 )
    {
      v9 = (_QWORD *)a7;
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v9 = (_QWORD *)MmUserProbeAddress;
      *v9 = v50;
      v19 = 1;
      v49 = 1;
      goto LABEL_58;
    }
    if ( v21 != -2147483631 )
      break;
    if ( qword_1C0296058 )
      qword_1C0296058();
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v23, v22, v10, v18) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
      {
        v47 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
      }
      if ( gphePrimaryDestroyTarget )
      {
        v48 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
      }
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      {
        v46 = 0x20000;
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
    EtwTraceReleaseUserCrit(v26, v25, v27, v28);
    v33 = SGDGetUserSessionState(v30, v29, v31, v32);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v33 + 8));
  }
  v19 = 0;
  v49 = 0;
  UserSetLastError(87);
LABEL_58:
  if ( v11 )
    Win32FreePool(v11);
LABEL_62:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v16, (__int64)v9, v10, v18) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  v34 = AtomicExecutionCheck::GetCount();
  if ( v34 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v34, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v36, v35, v37, v38);
  v43 = SGDGetUserSessionState(v40, v39, v41, v42);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v43 + 8));
  return v19;
}
