/*
 * XREFs of ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED0C0
 * Callers:
 *     _RegisterLogonProcess @ 0x1C00BDE70 (_RegisterLogonProcess.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     InitCreateSystemThreadsMsg @ 0x1C00C0170 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SendIVWorkerThreadRequest(PVOID *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO **v16; // rbx
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  struct tagKERNELHANDLETABLEENTRY *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rbx
  BOOL v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  GUID ActivityId; // [rsp+4Ch] [rbp-B4h] BYREF
  _DWORD v31[240]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+420h] [rbp+320h] BYREF
  BOOL *v33; // [rsp+440h] [rbp+340h]
  __int64 v34; // [rsp+448h] [rbp+348h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+450h] [rbp+350h] BYREF
  BOOL *v36; // [rsp+470h] [rbp+370h]
  __int64 v37; // [rsp+478h] [rbp+378h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+480h] [rbp+380h] BYREF
  BOOL *v39; // [rsp+4A0h] [rbp+3A0h]
  __int64 v40; // [rsp+4A8h] [rbp+3A8h]

  memset(v31, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v31, 8u, (__int64)a1) )
  {
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
    v27 = 952LL;
    v10 = LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v31, v31, &v27, 0LL);
    if ( v10 >= 0 )
      KeWaitForSingleObject(*a1, WrUserRequest, 0, 0, 0LL);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v11);
    else
      CurrentThreadWin32Thread = 0LL;
    v28 = CurrentThreadWin32Thread;
    v29 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v28 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v34 = 4LL;
        v26 = v29 == 1;
        v33 = &v26;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v32);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v13 = W32kEtwEnabledKeyword, v14 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v14 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v13, v14);
      if ( v15 )
        v15[1] = KeQueryPerformanceCounter(0LL);
    }
    v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v16 )
    {
      v17 = *v16;
      if ( IsThreadCrossSessionAttached() )
        v17 = 0LL;
      if ( v28 )
      {
        v18 = *(unsigned int *)(v28 + 24);
        if ( *(_DWORD *)(v28 + 48) || (int)v18 > 0 )
        {
          *(_DWORD *)(v28 + 44) = 1;
          *(GUID *)(v28 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v37 = 4LL;
              v26 = v29 == 1;
              v36 = &v26;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v35);
              v19 = dword_1C028EE70;
            }
            if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v40 = 4LL;
              v26 = v29 == 1;
              v39 = &v26;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v38);
            }
          }
        }
      }
      gptiCurrent = v17;
      if ( v17 )
      {
        *((_DWORD *)v17 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v25 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v23 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v24 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v23;
              if ( !*(_DWORD *)(v24 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v21, v22);
                v24 = *v25;
              }
              HMUnlockObject(v24);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
      gptiCurrent = 0LL;
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( *a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)*a1);
    *a1 = 0LL;
    v6 = (char *)a1[1];
    if ( v6 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v6);
    a1[1] = 0LL;
    return 3221225495LL;
  }
}
