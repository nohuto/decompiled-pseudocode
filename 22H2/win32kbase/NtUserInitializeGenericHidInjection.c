/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C0146140
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
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C0198D80 (RIMIDE_CreateGenericHidDevice.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT v5; // rcx
  _UNKNOWN **v6; // r8
  __int16 v7; // r9
  int v8; // edi
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  ULONG64 v15; // r8
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  ULONG64 v17; // rdx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  const void *v22; // rsi
  const void *v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  unsigned int Count; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  char v47; // [rsp+50h] [rbp-B8h]
  char v48; // [rsp+51h] [rbp-B7h]
  __int64 v49; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v50[6]; // [rsp+80h] [rbp-88h] BYREF
  int v51; // [rsp+120h] [rbp+18h] BYREF
  int v52; // [rsp+128h] [rbp+20h]

  while ( 1 )
  {
    LOBYTE(v51) = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v51);
    v49 = 0LL;
    memset(v50, 0, 0x40uLL);
    v47 = 0;
    v48 = 0;
    if ( (_BYTE)v51 )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v4) = 0;
      }
      v6 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v7 = 12;
LABEL_9:
      WPP_RECORDER_AND_TRACE_SF_(
        v5->AttachedDevice,
        v4,
        (_DWORD)v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        v7,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_10:
      v8 = 0;
      UserSetLastError(5);
      goto LABEL_72;
    }
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v4) = 0;
      }
      v6 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v7 = 13;
      goto LABEL_9;
    }
    if ( ((PsGetCurrentProcessWow64Process(v13, v4, v14) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (NSInstrumentation::CLeakTrackingAllocator *)(a1 + 4);
    v17 = MmUserProbeAddress;
    if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v16 < (NSInstrumentation::CLeakTrackingAllocator *)a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v50[0] = *a1;
    v50[1] = a1[1];
    v50[2] = a1[2];
    v50[3] = a1[3];
    epi16 = _mm_extract_epi16((__m128i)v50[3], 4);
    if ( epi16 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, MmUserProbeAddress, v15);
      if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v50[3])) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *(NSInstrumentation::CLeakTrackingAllocator **)&v50[3];
      v17 = *(_QWORD *)&v50[3] + epi16;
      v15 = MmUserProbeAddress;
      if ( v17 > MmUserProbeAddress || v17 < *(_QWORD *)&v50[3] )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = WORD4(v50[2]);
    if ( WORD4(v50[2]) )
    {
      v21 = PsGetCurrentProcessWow64Process(v16, v17, v15);
      if ( ((v21 == 0 ? 3 : 0) & LOBYTE(v50[2])) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *(NSInstrumentation::CLeakTrackingAllocator **)&v50[2];
      v17 = *(_QWORD *)&v50[2] + v20;
      if ( *(_QWORD *)&v50[2] + v20 > MmUserProbeAddress || v17 < *(_QWORD *)&v50[2] )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( (_WORD)v20 )
      {
        v22 = *(const void **)&v50[2];
        *(_QWORD *)&v50[2] = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v16, v17, v20, 0x74697355u);
        if ( !*(_QWORD *)&v50[2] )
          goto LABEL_38;
        v47 = 1;
        memmove(*(void **)&v50[2], v22, v20);
      }
    }
    if ( epi16 )
      break;
LABEL_43:
    if ( !*(_QWORD *)&v50[2] )
      goto LABEL_44;
    v24 = RIMIDE_CreateGenericHidDevice(v50, &v49);
    if ( v24 >= 0 )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v49;
      v8 = 1;
      goto LABEL_68;
    }
    if ( v24 != -2147483631 )
    {
LABEL_44:
      v8 = 0;
      UserSetLastError(87);
      goto LABEL_68;
    }
    if ( qword_1C0296058 )
      qword_1C0296058();
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v25, v9, v11, v12) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
      {
        v52 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
      }
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
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
    EtwTraceReleaseUserCrit(v28, v27, v29, v30);
    v35 = SGDGetUserSessionState(v32, v31, v33, v34);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v35 + 8));
  }
  v23 = *(const void **)&v50[3];
  *(_QWORD *)&v50[3] = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v16, v17, epi16, 0x74697355u);
  if ( *(_QWORD *)&v50[3] )
  {
    v48 = 1;
    memmove(*(void **)&v50[3], v23, epi16);
    goto LABEL_43;
  }
LABEL_38:
  v8 = 0;
  UserSetLastError(8);
LABEL_68:
  if ( v47 )
    Win32FreePool(*(char **)&v50[2]);
  if ( v48 )
    Win32FreePool(*(char **)&v50[3]);
LABEL_72:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v10, v9, v11, v12) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  v36 = AtomicExecutionCheck::GetCount();
  if ( v36 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v36, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v38, v37, v39, v40);
  v45 = SGDGetUserSessionState(v42, v41, v43, v44);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v45 + 8));
  return v8;
}
