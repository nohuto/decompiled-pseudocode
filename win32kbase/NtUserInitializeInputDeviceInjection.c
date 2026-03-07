__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        __int64 a2,
        NSInstrumentation::CLeakTrackingAllocator *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        ULONG64 a7)
{
  __int64 v7; // r13
  _QWORD *v9; // rdx
  char *v10; // rdi
  __int64 v11; // r15
  PDEVICE_OBJECT v12; // rcx
  _UNKNOWN **v13; // r8
  __int16 v14; // r9
  int v15; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
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
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _BYTE v44[4]; // [rsp+50h] [rbp-88h] BYREF
  int v45; // [rsp+54h] [rbp-84h]
  int v46; // [rsp+58h] [rbp-80h]
  int v47; // [rsp+5Ch] [rbp-7Ch]
  int v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+70h] [rbp-68h] BYREF
  char *v50; // [rsp+78h] [rbp-60h]
  int v51; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  PERESOURCE v54; // [rsp+98h] [rbp-40h]
  unsigned __int16 v56; // [rsp+E8h] [rbp+10h]

  v56 = a2;
  v7 = (unsigned int)a4;
  while ( 1 )
  {
    v44[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v44, a2, (__int64)a3, a4);
    v10 = 0LL;
    v50 = 0LL;
    v11 = 0LL;
    v49 = 0LL;
    if ( v44[0] )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      v13 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v14 = 10;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        v12->AttachedDevice,
        (_DWORD)v9,
        (_DWORD)v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        v14,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_11:
      v15 = 5;
LABEL_61:
      v46 = 0;
      UserSetLastError(v15);
      goto LABEL_62;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v9) = 0;
      }
      v13 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v14 = 11;
      goto LABEL_10;
    }
    v19 = 32 * v7;
    if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v15 = 87;
      goto LABEL_61;
    }
    if ( a5 )
    {
      v11 = HMValidateSharedHandle(a5);
      if ( !v11 )
      {
        v46 = 0;
        goto LABEL_58;
      }
    }
    if ( v19 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16, v9, v17, v18) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a3 + v19);
      v9 = (_QWORD *)MmUserProbeAddress;
      if ( (unsigned __int64)a3 + v19 > MmUserProbeAddress || v16 < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v16,
                           (unsigned __int64)v9,
                           (unsigned int)v19,
                           0x74697355u);
    v10 = QuotaZInit;
    v50 = QuotaZInit;
    if ( !QuotaZInit )
      ExRaiseStatus(-1073741801);
    memmove(QuotaZInit, a3, 32 * v7);
    v21 = RIMIDE_InitializeDeviceInjection(a1, v56, v10, (unsigned int)v7, v11, a6, &v49);
    v51 = v21;
    if ( v21 >= 0 )
    {
      v9 = (_QWORD *)a7;
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress;
      if ( a7 >= MmUserProbeAddress )
        v9 = (_QWORD *)MmUserProbeAddress;
      *v9 = v49;
      v46 = 1;
      goto LABEL_58;
    }
    if ( v21 != -2147483631 )
      break;
    if ( qword_1C02D71D0 )
      qword_1C02D71D0(v23, v22, v17, v18);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v23, v22, v17, v18) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
      {
        v47 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
      }
      if ( gphePrimaryDestroyTarget )
      {
        v48 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
      }
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      {
        v45 = 0x20000;
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
    if ( gptiCurrent )
    {
      CurrentThread = KeGetCurrentThread();
      if ( W32GetThreadWin32Thread((__int64)CurrentThread) )
        *((_DWORD *)PtiCurrentShared(v26, v25, v27, v28) + 387) = 0;
    }
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit();
    v54 = *(PERESOURCE *)(SGDGetUserSessionState(v30, v29, v31, v32) + 8);
    ExReleaseResourceAndLeaveCriticalRegion(v54);
  }
  v46 = 0;
  UserSetLastError(87);
LABEL_58:
  if ( v10 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
LABEL_62:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v16, v9, v17, v18);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v16, (__int64)v9, v17, v18) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v45 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v45 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v45 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1220);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  v33 = AtomicExecutionCheck::GetCount();
  if ( v33 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v33, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared(v35, v34, v36, v37) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v42 = SGDGetUserSessionState(v39, v38, v40, v41);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v42 + 8));
  return v46;
}
