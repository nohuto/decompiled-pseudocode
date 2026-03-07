__int64 __fastcall NtUserSetFeatureReportResponse(
        char *a1,
        NSInstrumentation::CLeakTrackingAllocator *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r13
  ULONG64 v7; // rdx
  PDEVICE_OBJECT v8; // rcx
  _UNKNOWN **v9; // r8
  __int16 v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // r14
  char *QuotaZInit; // rax
  char *v22; // rdi
  int v23; // eax
  PVOID v24; // r15
  unsigned int *v25; // rsi
  _DWORD *v26; // r12
  unsigned int v27; // eax
  unsigned int Count; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  char *v40; // [rsp+68h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp+20h] BYREF

  v4 = (unsigned int)a3;
  Object = 0LL;
  v40 = 0LL;
  LOBYTE(v41) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v41, (__int64)a2, a3, a4);
  if ( (_BYTE)v41 )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = 28;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_(
      v8->AttachedDevice,
      v7,
      (_DWORD)v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v10,
      (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
LABEL_11:
    v11 = 0;
    UserSetLastError(5);
    goto LABEL_62;
  }
  if ( (unsigned int)(v4 - 1) > 6 || (v16 = 12 * v4, (unsigned __int64)(12 * v4) > 0xFFFFFFFF) )
  {
    v11 = 0;
    UserSetLastError(87);
    goto LABEL_62;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v9 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v10 = 29;
    goto LABEL_10;
  }
  if ( v16 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v17, v7, v18, v19) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v16);
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 + v16 > MmUserProbeAddress || v17 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v20 = (unsigned int)v16;
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v17,
                         v7,
                         (unsigned int)v16,
                         0x74697355u);
  v22 = QuotaZInit;
  v40 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, a2, v20);
  v23 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v24 = Object;
  v13 = (__int64)Object + 72;
  if ( !Object )
    v13 = 0LL;
  if ( v23 < 0 )
    goto LABEL_56;
  if ( (*(_DWORD *)(v13 + 200) & 0x80u) == 0 )
    goto LABEL_56;
  v25 = *(unsigned int **)(v13 + 472);
  if ( *(_DWORD *)(*((_QWORD *)Object + 57) + 16LL) || (v25[90] & 0x2000) == 0 )
    goto LABEL_56;
  v15 = 0LL;
  v41 = 0;
  if ( (_DWORD)v4 )
  {
    v26 = v22 + 4;
    while ( 1 )
    {
      v13 = *((unsigned __int16 *)v26 - 2);
      if ( (_WORD)v13 != 13 )
        break;
      if ( *((_WORD *)v26 - 1) == 85 )
      {
        v12 = (unsigned int)*v26;
        if ( (int)v12 > 256 || (v14 = v25[6], (unsigned int)(v14 - 1) > 3) )
        {
          v14 = v25[6];
          if ( (_DWORD)v14 != 7 || (int)v12 > 5 )
            break;
        }
        v13 = v25[192];
        v27 = v13 - 1;
        if ( (_DWORD)v14 != 7 )
          v27 = v25[192];
        if ( (_DWORD)v12 != v27 )
        {
          if ( !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v25, v12, v14, v15) )
            break;
          LODWORD(v15) = v41;
        }
      }
      else
      {
        if ( *((_WORD *)v26 - 1) != 89 || v25[6] != 7 || *v26 > 1u )
          break;
        v25[238] = *v26;
      }
      v15 = (unsigned int)(v15 + 1);
      v41 = v15;
      v26 += 3;
      if ( (unsigned int)v15 >= (unsigned int)v4 )
        goto LABEL_55;
    }
LABEL_56:
    v11 = 0;
    UserSetLastError(87);
    goto LABEL_57;
  }
LABEL_55:
  v11 = 1;
LABEL_57:
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( v22 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v22);
LABEL_62:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v13, v12, v14, v15);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v13, v12, v14, v15) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v41 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v41 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v41 = 0x20000;
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
    *((_DWORD *)PtiCurrentShared(v30, v29, v31, v32) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v37 = SGDGetUserSessionState(v34, v33, v35, v36);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v37 + 8));
  return v11;
}
