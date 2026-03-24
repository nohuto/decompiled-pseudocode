/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0048E60
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00488D0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C00491A0 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00491C4 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher *v1; // r14
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  void (*v8)(void); // rax
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rdi
  __int64 *v28; // rsi
  __int64 v29; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  PERESOURCE *v38; // rbx
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  LegacyInputDispatcher *v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  unsigned __int8 v44; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+88h] [rbp-78h] BYREF
  int *v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+B8h] [rbp-48h] BYREF
  int *v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+E8h] [rbp-18h] BYREF
  int *v53; // [rsp+108h] [rbp+8h]
  __int64 v54; // [rsp+110h] [rbp+10h]

  v42 = this;
  v1 = this;
  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v44 = 1;
        v32 = PsGetCurrentThreadWin32Thread(v10);
        v43 = v32;
        if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024BA90 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v33, v34) )
            {
              v39 = v44;
              v48 = 4LL;
              v47 = &v39;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C024BA90,
                (int)&dword_1C0218FF7,
                (int)&ActivityId,
                0,
                3u,
                &v46);
            }
          }
        }
      }
      else
      {
        v43 = 0LL;
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v13 )
          v12 = *v13;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v12 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
      {
        *(_DWORD *)(v43 + 44) = 1;
        *(GUID *)(v43 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024BA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, v19) )
          {
            v40 = v44;
            v51 = 4LL;
            v50 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FA0,
              (int)&ActivityId,
              0,
              3u,
              &v49);
            v35 = (unsigned int)dword_1C024BA90;
          }
          if ( (unsigned int)v35 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v35, v36) )
          {
            v41 = v44;
            v54 = 4LL;
            v53 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024BA90,
              (int)&dword_1C0218FCD,
              (int)&ActivityId,
              0,
              3u,
              &v52);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v29 = PsGetCurrentProcess(v21, v20),
            ProcessSessionId = PsGetProcessSessionIdEx(v29),
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
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v28 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
              v37 = *v28;
              v28[2] = 0LL;
              if ( !*(_DWORD *)(v37 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              v38 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v38 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              ExReleaseResourceAndLeaveCriticalRegion(*v38);
              HMUnlockObject(*v28);
              tagDomLock::LockExclusive(v38);
              v28 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v1 = v42;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit();
    }
    v3 = KeWaitForMultipleObjects(
           *((_DWORD *)v1 + 13),
           *((PVOID **)v1 + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)v1 + 56),
           *((_BYTE *)v1 + 57),
           0LL,
           *((PKWAIT_BLOCK *)v1 + 3));
    v4 = (unsigned int)v3;
    if ( v3 < 0 )
      return (unsigned int)v4;
    v5 = *((_DWORD *)v1 + 13);
    if ( v3 >= v5 )
      goto LABEL_74;
    v6 = *((_DWORD *)v1 + 10);
    v7 = v6;
    if ( v6 >= v5 && v6 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3129LL);
      v7 = *((_DWORD *)v1 + 10);
    }
    if ( (unsigned int)v4 < v7 || v7 == 64 )
    {
LABEL_74:
      if ( (unsigned int)v4 >= *((_DWORD *)v1 + 10) )
        return (unsigned int)v4;
      v8 = *(void (**)(void))(*((_QWORD *)v1 + 4) + 16 * v4);
      if ( !v8 )
        return (unsigned int)v4;
      v8();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(v1, v4);
    }
  }
}
