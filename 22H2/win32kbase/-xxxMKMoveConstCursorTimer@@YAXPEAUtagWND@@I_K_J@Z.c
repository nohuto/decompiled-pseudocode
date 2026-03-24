/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184A10
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MouseMove @ 0x1C01AEB60 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1)
{
  char v1; // al
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v27; // rsi
  __int64 v28; // rax
  PVOID *v29; // rdi
  int v30; // [rsp+38h] [rbp-89h] BYREF
  int v31; // [rsp+3Ch] [rbp-85h] BYREF
  PVOID *v32; // [rsp+40h] [rbp-81h] BYREF
  __int64 v33; // [rsp+48h] [rbp-79h]
  unsigned __int8 v34; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+68h] [rbp-59h] BYREF
  int *v37; // [rsp+88h] [rbp-39h]
  __int64 v38; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+98h] [rbp-29h] BYREF
  int *v40; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C8h] [rbp+7h] BYREF
  PVOID **v43; // [rsp+E8h] [rbp+27h]
  __int64 v44; // [rsp+F0h] [rbp+2Fh]

  if ( (dword_1C024F94C & 0x40) == 0 )
    goto LABEL_6;
  v1 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v1 & 3) != 0 )
  {
    v2 = 1;
    goto LABEL_7;
  }
  if ( (v1 & 0xC) == 0 )
  {
LABEL_6:
    v3 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C024F881;
    v2 = (unsigned __int8)byte_1C024F882[v3];
    giMouseMoveTable = v3 + 1;
    if ( !v2 )
      return;
    goto LABEL_7;
  }
  v2 = 4 * (unsigned __int8)byte_1C024F882[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  MouseMove(v2 * gMKDeltaX, v2 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v34 = 1;
    v7 = PsGetCurrentThreadWin32Thread(v5);
    v33 = v7;
    if ( v7 && (*(int *)(v7 + 24) > 0 || *(_DWORD *)(v33 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v31 = v34;
        v38 = 4LL;
        v37 = &v31;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FD7,
          &ActivityId,
          0LL,
          3u,
          &v36);
      }
    }
  }
  else
  {
    v33 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v33 && (*(_DWORD *)(v33 + 48) || *(int *)(v33 + 24) > 0) )
  {
    *(_DWORD *)(v33 + 44) = 1;
    *(GUID *)(v33 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v30 = v34;
        v41 = 4LL;
        v40 = &v30;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217F80,
          &ActivityId,
          0LL,
          3u,
          &v39);
        v15 = dword_1C024AA90;
      }
      if ( v15 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v32) = v34;
        v44 = 4LL;
        v43 = &v32;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024AA90,
          (unsigned __int8 *)dword_1C0217FAD,
          &ActivityId,
          0LL,
          3u,
          &v42);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v18 = PsGetCurrentProcess(v17, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(v18),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v22 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v22 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      v32 = DomainLockRef;
      if ( DomainLockRef == gDomainDummyLock )
      {
        v30 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v30 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      v27 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
          v28 = *v27;
          v27[2] = 0LL;
          if ( !*(_DWORD *)(v28 + 8) )
          {
            v30 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v29 = (PVOID *)GetDomainLockRef(12);
          if ( v29 == gDomainDummyLock )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v29);
          HMUnlockObject(*v27);
          tagDomLock::LockExclusive((PERESOURCE *)v29);
          v27 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v32;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
}
