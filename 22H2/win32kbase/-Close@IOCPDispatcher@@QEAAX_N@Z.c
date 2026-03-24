/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00A8F60
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00B3994 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C01B1CF4 (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     ProtectHandle @ 0x1C0025F3C (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C00A92A0 (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C00A930C (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  HANDLE *v3; // rsi
  int v4; // edx
  HANDLE v5; // rcx
  int v6; // eax
  _UNKNOWN **v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v28; // r14
  HANDLE v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rax
  PERESOURCE *v33; // rdi
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  IOCPDispatcher *v40; // [rsp+48h] [rbp-B8h]
  _OWORD v41[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  unsigned __int8 v43; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+90h] [rbp-70h] BYREF
  int *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C0h] [rbp-40h] BYREF
  int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+F0h] [rbp-10h] BYREF
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]

  v40 = this;
  v3 = (HANDLE *)this;
  if ( *((_QWORD *)this + 343) )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)v3);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit();
      v37 = 0;
      memset(v41, 0, sizeof(v41));
      while ( 1 )
      {
        v5 = v3[343];
        LOBYTE(v34) = 0;
        v39 = -200000LL;
        v6 = ZwRemoveIoCompletionEx(v5, v41, 1LL, &v37, &v39, v34);
        if ( v6 < 0 )
          break;
        if ( v6 == 258 )
          goto LABEL_6;
      }
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          22,
          (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
          v6);
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v43 = 1;
        v30 = PsGetCurrentThreadWin32Thread(v8);
        v42 = v30;
        if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v36 = v43;
            v47 = 4LL;
            v46 = &v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &ActivityId,
              0LL,
              3u,
              &v45);
          }
        }
      }
      else
      {
        v42 = 0LL;
      }
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v11 )
          v10 = *v11;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v10 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v35 = v43;
            v50 = 4LL;
            v49 = &v35;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &ActivityId,
              0LL,
              3u,
              &v48);
            v31 = dword_1C024AA90;
          }
          if ( v31 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v38 = v43;
            v53 = 4LL;
            v52 = &v38;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &ActivityId,
              0LL,
              3u,
              &v51);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v19 = PsGetCurrentProcess(v18, v17),
            ProcessSessionId = PsGetProcessSessionIdEx(v19),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v23 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v23 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
        if ( v23
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          {
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          {
            v35 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v28 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
              v32 = *v28;
              v28[2] = 0LL;
              if ( !*(_DWORD *)(v32 + 8) )
              {
                v35 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v33 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v33 == (PERESOURCE *)&gDomainDummyLock )
              {
                v36 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v33);
              HMUnlockObject(*v28);
              tagDomLock::LockExclusive(v33);
              v28 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v3 = (HANDLE *)v40;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
    v29 = v3[344];
    if ( v29 )
    {
      ProtectHandle(v29, v4, 0LL, 0);
      ObCloseHandle(v3[344], 1);
      v3[344] = 0LL;
    }
    ZwClose(v3[343]);
    v3[343] = 0LL;
  }
}
