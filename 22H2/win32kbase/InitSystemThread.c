/*
 * XREFs of InitSystemThread @ 0x1C0085D20
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ClearAppStarting @ 0x1C0048460 (ClearAppStarting.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     InitClientInfo @ 0x1C00860D0 (InitClientInfo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  PERESOURCE *v36; // rdi
  int v37; // [rsp+30h] [rbp-99h] BYREF
  int v38; // [rsp+34h] [rbp-95h] BYREF
  PERESOURCE *v39; // [rsp+38h] [rbp-91h] BYREF
  _BYTE ActivityId[28]; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+68h] [rbp-61h] BYREF
  int *v42; // [rsp+88h] [rbp-41h]
  __int64 v43; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+98h] [rbp-31h] BYREF
  int *v45; // [rsp+B8h] [rbp-11h]
  __int64 v46; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+C8h] [rbp-1h] BYREF
  void **v48; // [rsp+E8h] [rbp+1Fh]
  __int64 v49; // [rsp+F0h] [rbp+27h]

  PsGetThreadProcess(KeGetCurrentThread());
  v3 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_OWORD *)&ActivityId[12] = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId[8] = 1;
    v33 = PsGetCurrentThreadWin32Thread(v4);
    *(_QWORD *)ActivityId = v33;
    if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(*(_QWORD *)ActivityId + 48LL)) )
    {
      EtwActivityIdControl(3u, (LPGUID)&ActivityId[12]);
      if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v38 = ActivityId[8];
        v43 = 4LL;
        v42 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C024AA90,
          (int)&dword_1C0217FD7,
          (int)&ActivityId[12],
          0,
          3u,
          &v41);
      }
    }
  }
  else
  {
    *(_QWORD *)ActivityId = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)ActivityId
    && (*(_DWORD *)(*(_QWORD *)ActivityId + 48LL) || *(int *)(*(_QWORD *)ActivityId + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)ActivityId + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)ActivityId + 28LL) = *(_OWORD *)&ActivityId[12];
    if ( (unsigned int)dword_1C024AA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        v37 = ActivityId[8];
        v46 = 4LL;
        v45 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C024AA90,
          (int)&dword_1C0217F80,
          (int)&ActivityId[12],
          0,
          3u,
          &v44);
        v34 = dword_1C024AA90;
      }
      if ( v34 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
      {
        LODWORD(v39) = ActivityId[8];
        v49 = 4LL;
        v48 = (void **)&v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (int)&dword_1C024AA90,
          (int)&dword_1C0217FAD,
          (int)&ActivityId[12],
          0,
          3u,
          &v47);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v30 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v30),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      v39 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v37 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      {
        v37 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v21 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v21[2];
          v35 = *v21;
          v21[2] = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
          {
            v37 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v36 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
          {
            v38 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v21);
          tagDomLock::LockExclusive(v36);
          v21 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v39;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23 = Win32AllocPoolWithQuota(272LL, 0x69637355u);
  *(_QWORD *)(v22 + 480) = v23;
  if ( v23 )
  {
    v24 = *(_OWORD *)(v22 + 392);
    v25 = *(_QWORD *)(v22 + 408);
    *(_DWORD *)(v22 + 488) = *(_DWORD *)(v22 + 488) & 0xFFFFFFF3 | 4;
    *(_OWORD *)ActivityId = v24;
    *(_QWORD *)&ActivityId[16] = v25;
    if ( (unsigned int)InitClientInfo(v22) )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(v22 + 496);
        if ( v26 )
          Win32FreePool(v26);
        v27 = Win32AllocPoolWithQuota(*(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *(_QWORD *)(v22 + 496) = v27;
        if ( v27 )
        {
          *(_QWORD *)(v27 + 8) = v27 + 16;
          memmove(*(void **)(*(_QWORD *)(v22 + 496) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 496) + 8LL) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(v22 + 496) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(v22 + 496) = *(_WORD *)a1;
        }
      }
      v28 = *(_QWORD *)(v22 + 424);
      if ( v28 && (*(_DWORD *)(v28 + 12) & 0x40) != 0 )
        ClearAppStarting(v28);
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741801;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
