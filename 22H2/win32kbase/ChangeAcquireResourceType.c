/*
 * XREFs of ChangeAcquireResourceType @ 0x1C0007820
 * Callers:
 *     NtUserGetKeyState @ 0x1C0006DA0 (NtUserGetKeyState.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0037134 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void ChangeAcquireResourceType()
{
  LARGE_INTEGER *v0; // rbx
  struct tagTHREADINFO *v1; // r14
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  struct tagKERNELHANDLETABLEENTRY *v16; // rsi
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  PERESOURCE *v31; // rdi
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  PERESOURCE *v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+80h] [rbp-88h] BYREF
  int *v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+B0h] [rbp-58h] BYREF
  int *v43; // [rsp+D0h] [rbp-38h]
  __int64 v44; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E0h] [rbp-28h] BYREF
  int *v46; // [rsp+100h] [rbp-8h]
  __int64 v47; // [rsp+108h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+8h] BYREF

  if ( qword_1C0256C48 )
    qword_1C0256C48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v23 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v24 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v23 + 44) || *(_DWORD *)(v23 + 48) || v24 > 0)
        && (unsigned int)dword_1C024AA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v21, v22) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F61, v23 + 28, 0, 2u, &v48);
      }
      *(_DWORD *)(v23 + 44) = 0;
      *(_OWORD *)(v23 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  v0 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( v0 )
    v0[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v25 = PsGetCurrentThreadWin32Thread();
    v36 = v25;
    if ( v25 && (*(int *)(v25 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v26, v27) )
        {
          v32 = ActivityId_4;
          v41 = 4LL;
          v40 = &v32;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024AA90,
            (int)&dword_1C0217FD7,
            (int)&ActivityId_8,
            0,
            3u,
            &v39);
        }
      }
    }
  }
  else
  {
    v36 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
  {
    *(_DWORD *)(v36 + 44) = 1;
    *(GUID *)(v36 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v8) )
      {
        v33 = ActivityId_4;
        v44 = 4LL;
        v43 = &v33;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId_8, 0, 3u, &v42);
        v28 = (unsigned int)dword_1C024AA90;
      }
      if ( (unsigned int)v28 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v28, v29) )
      {
        v34 = ActivityId_4;
        v47 = 4LL;
        v46 = &v34;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId_8, 0, 3u, &v45);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v1;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v17 = PsGetCurrentProcess(v10, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( v12
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v12 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v12 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      v35 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v16 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v16 + 2);
          v30 = *(_QWORD *)v16;
          *((_QWORD *)v16 + 2) = 0LL;
          if ( !*(_DWORD *)(v30 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          v31 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v31 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          ExReleaseResourceAndLeaveCriticalRegion(*v31);
          HMUnlockObject(*(_QWORD *)v16);
          tagDomLock::LockExclusive((tagDomLock *)v31);
          v16 = gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v35;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  gptiCurrent = v1;
}
