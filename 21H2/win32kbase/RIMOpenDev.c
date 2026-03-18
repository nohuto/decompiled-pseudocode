/*
 * XREFs of RIMOpenDev @ 0x1C004AC3C
 * Callers:
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     RIMOpenDevWorker @ 0x1C004B0E0 (RIMOpenDevWorker.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     ApiSetGetMaxOpenRetries @ 0x1C004E000 (ApiSetGetMaxOpenRetries.c)
 *     RIMCloseDev @ 0x1C004E108 (RIMCloseDev.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     rimIsCrossSessionDevice @ 0x1C017D478 (rimIsCrossSessionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS v15; // esi
  __int64 v16; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  struct tagTHREADINFO **v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 *v29; // rbx
  HANDLE v30; // rcx
  LARGE_INTEGER *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagKERNELHANDLETABLEENTRY *v36; // rax
  __int64 v37; // rcx
  PVOID v38; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h]
  __int128 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+88h] [rbp-78h] BYREF
  PVOID *v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+B8h] [rbp-48h] BYREF
  PVOID *v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E8h] [rbp-18h] BYREF
  PVOID *v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]

  ApiSetGetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  Handle = 0LL;
  v41 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMUserCritFreeZwCreateFile__private_reporting,
    26503901LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  v8 = *(_QWORD *)(a1 + 336);
  Object = *(PVOID *)(a1 + 32);
  RawInputManagerDeviceObjectReference(Object);
  *(_QWORD *)(v8 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  v15 = RIMOpenDevWorker(a1, a2, a3, a4);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v14, v13, v16);
  else
    CurrentThreadWin32Thread = 0LL;
  v42 = CurrentThreadWin32Thread;
  v43 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v42 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v47 = 4LL;
      LODWORD(v38) = v43 == 1;
      v46 = &v38;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v45);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v18 = W32kEtwEnabledKeyword, v19 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v19 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v32 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v18, v19);
    if ( v32 )
      v32[1] = KeQueryPerformanceCounter(0LL);
  }
  v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v20 )
  {
    v21 = *v20;
    if ( IsThreadCrossSessionAttached() )
      v21 = 0LL;
    if ( v42 )
    {
      v23 = *(unsigned int *)(v42 + 24);
      if ( *(_DWORD *)(v42 + 48) || (int)v23 > 0 )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        v24 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v50 = 4LL;
            LODWORD(v38) = v43 == 1;
            v49 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD22,
              (int)&ActivityId,
              0,
              3u,
              &v48);
            v24 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v24 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v53 = 4LL;
            LODWORD(v38) = v43 == 1;
            v52 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD4F,
              (int)&ActivityId,
              0,
              3u,
              &v51);
          }
        }
      }
    }
    gptiCurrent = v21;
    if ( v21 )
    {
      *((_DWORD *)v21 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v22, v24, v25);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v29 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v36 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v37 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v36;
            if ( !*(_DWORD *)(v37 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v27, v28);
              v37 = *v29;
            }
            HMUnlockObject(v37);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v42);
    gptiCurrent = 0LL;
  }
  RIMLockExclusive(v8 + 104);
  ObfDereferenceObject(Object);
  v30 = Handle;
  *(_DWORD *)(a1 + 288) = v15;
  *(_QWORD *)(a1 + 224) = v30;
  *(_OWORD *)(a1 + 256) = v41;
  if ( v15 >= 0 )
  {
    v38 = 0LL;
    v15 = ObReferenceObjectByHandle(v30, 0, (POBJECT_TYPE)IoFileObjectType, 0, &v38, 0LL);
    *(_QWORD *)(a1 + 232) = v38;
    if ( v15 >= 0 && dword_1C028F6FC != 3 && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v15;
}
