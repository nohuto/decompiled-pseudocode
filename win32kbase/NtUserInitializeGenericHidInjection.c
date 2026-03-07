__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r12
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  _UNKNOWN **v8; // r8
  __int16 v9; // r9
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // r8
  __int64 v18; // r9
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  ULONG64 v20; // rdx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  const void *v25; // rsi
  const void *v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  unsigned int Count; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  char v50; // [rsp+50h] [rbp-B8h]
  char v51; // [rsp+51h] [rbp-B7h]
  int v52; // [rsp+54h] [rbp-B4h]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v54[6]; // [rsp+80h] [rbp-88h] BYREF
  int v55; // [rsp+120h] [rbp+18h] BYREF
  int v56; // [rsp+128h] [rbp+20h]

  v4 = (_QWORD *)a2;
  while ( 1 )
  {
    LOBYTE(v55) = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v55, a2, a3, a4);
    v53 = 0LL;
    memset(v54, 0, 0x40uLL);
    v50 = 0;
    v51 = 0;
    if ( (_BYTE)v55 )
    {
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v6) = 0;
      }
      v8 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v9 = 12;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_(
        v7->AttachedDevice,
        v6,
        (_DWORD)v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        v9,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_11:
      v52 = 0;
      UserSetLastError(5);
      goto LABEL_75;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v6) = 0;
      }
      v8 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      v9 = 13;
      goto LABEL_10;
    }
    if ( ((PsGetCurrentProcessWow64Process(v14, v6, v15, v16) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (NSInstrumentation::CLeakTrackingAllocator *)(a1 + 4);
    v20 = MmUserProbeAddress;
    if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v19 < (NSInstrumentation::CLeakTrackingAllocator *)a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v54[0] = *a1;
    v54[1] = a1[1];
    v54[2] = a1[2];
    v54[3] = a1[3];
    epi16 = _mm_extract_epi16((__m128i)v54[3], 4);
    if ( epi16 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19, MmUserProbeAddress, v17, v18);
      if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v54[3])) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_QWORD *)&v54[3];
      v19 = (NSInstrumentation::CLeakTrackingAllocator *)(*(_QWORD *)&v54[3] + epi16);
      v17 = MmUserProbeAddress;
      if ( (unsigned __int64)v19 > MmUserProbeAddress || (unsigned __int64)v19 < *(_QWORD *)&v54[3] )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v23 = WORD4(v54[2]);
    if ( WORD4(v54[2]) )
    {
      v24 = PsGetCurrentProcessWow64Process(v19, v20, v17, v18);
      if ( ((v24 == 0 ? 3 : 0) & LOBYTE(v54[2])) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_QWORD *)&v54[2];
      v19 = (NSInstrumentation::CLeakTrackingAllocator *)(*(_QWORD *)&v54[2] + v23);
      if ( *(_QWORD *)&v54[2] + v23 > MmUserProbeAddress || (unsigned __int64)v19 < *(_QWORD *)&v54[2] )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( (_WORD)v23 )
      {
        v25 = *(const void **)&v54[2];
        *(_QWORD *)&v54[2] = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v19, v20, v23, 0x74697355u);
        if ( !*(_QWORD *)&v54[2] )
          goto LABEL_39;
        v50 = 1;
        memmove(*(void **)&v54[2], v25, v23);
      }
    }
    if ( epi16 )
    {
      v26 = *(const void **)&v54[3];
      *(_QWORD *)&v54[3] = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v19, v20, epi16, 0x74697355u);
      if ( !*(_QWORD *)&v54[3] )
      {
LABEL_39:
        v52 = 0;
        UserSetLastError(8);
        goto LABEL_69;
      }
      v51 = 1;
      memmove(*(void **)&v54[3], v26, epi16);
    }
    if ( !*(_QWORD *)&v54[2] )
      break;
    v27 = RIMIDE_CreateGenericHidDevice(v54, &v53);
    if ( v27 >= 0 )
    {
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_QWORD *)MmUserProbeAddress;
      *v4 = v53;
      v52 = 1;
      goto LABEL_69;
    }
    if ( v27 != -2147483631 )
      break;
    if ( qword_1C02D71D0 )
      qword_1C02D71D0(v28, v10, v12, v13);
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v28, v10, v12, v13) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
      {
        v56 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
      }
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1220);
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
      *((_DWORD *)PtiCurrentShared(v31, v30, v32, v33) + 387) = 0;
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit();
    v38 = SGDGetUserSessionState(v35, v34, v36, v37);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v38 + 8));
  }
  v52 = 0;
  UserSetLastError(87);
LABEL_69:
  if ( v50 )
  {
    v10 = *(_QWORD *)&v54[2];
    if ( *(_QWORD *)&v54[2] )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)&v54[2]);
  }
  if ( v51 )
  {
    v10 = *(_QWORD *)&v54[3];
    if ( *(_QWORD *)&v54[3] )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)&v54[3]);
  }
LABEL_75:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v11, v10, v12, v13);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v11, v10, v12, v13) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v55 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v55 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v55 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1220);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  v39 = AtomicExecutionCheck::GetCount();
  if ( v39 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v39, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared(v41, v40, v42, v43) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v48 = SGDGetUserSessionState(v45, v44, v46, v47);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v48 + 8));
  return v52;
}
