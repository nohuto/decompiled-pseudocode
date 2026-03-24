/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A7D2C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A83A8 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C003CFB0 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01A58BC (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     xxxProcessKeyEvent @ 0x1C01B1220 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C01CE394 (ApiSetEditionSynthesizeMouseWheel.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // r12d
  int v9; // ecx
  __int64 v10; // r8
  bool v11; // cf
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v36; // r14
  __int64 v37; // rax
  PVOID *v38; // rdi
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  PVOID *v42; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v46; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+98h] [rbp-68h] BYREF
  int *v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp-38h] BYREF
  int *v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F8h] [rbp-8h] BYREF
  PVOID **v57; // [rsp+118h] [rbp+18h]
  __int64 v58; // [rsp+120h] [rbp+20h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 142);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v9 = *(_DWORD *)a2;
  if ( *(int *)a2 < 0 )
    goto LABEL_64;
  if ( v9 > 1 )
  {
    if ( v9 == 2 )
    {
      v10 = *((_QWORD *)gptiCurrent + 55);
      v11 = *((_DWORD *)a2 + 1) != 0;
      v43[0] = 0LL;
      v43[1] = v5;
      *(_DWORD *)((char *)v43 + 2) = (unsigned __int16)(v11 ? 16546 : -16222);
      v44 = 0LL;
      if ( v10 )
        LOBYTE(v43[0]) = InternalMapVirtualKeyEx(0xA2u, 0LL, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
      xxxProcessKeyEvent(v43, 0LL, 0LL, 0LL, 0LL, 0LL);
      return v2;
    }
LABEL_64:
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 315);
    return (unsigned int)-1073741811;
  }
  v49 = 0LL;
  v48 = 0LL;
  WORD1(v48) = 128;
  v12 = 1024;
  if ( v9 )
    v12 = 2048;
  WORD2(v48) = v12;
  WORD3(v48) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit();
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v48, v6, LowPart, 1000);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v16 = PsGetCurrentThreadWin32Thread(v14);
    v45 = v16;
    if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v41 = v46;
        v52 = 4LL;
        v51 = &v41;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FF7,
          &ActivityId,
          0LL,
          3u,
          &v50);
      }
    }
  }
  else
  {
    v45 = 0LL;
  }
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v18 )
      v17 = *v18;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v17 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v40 = v46;
        v55 = 4LL;
        v54 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FA0,
          &ActivityId,
          0LL,
          3u,
          &v53);
        v24 = dword_1C024BA90;
      }
      if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        LODWORD(v42) = v46;
        v58 = 4LL;
        v57 = &v42;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024BA90,
          (unsigned __int8 *)dword_1C0218FCD,
          &ActivityId,
          0LL,
          3u,
          &v56);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v17;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = PsGetCurrentProcess(v26, v25),
        ProcessSessionId = PsGetProcessSessionIdEx(v27),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v31 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v31 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
    if ( v31
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v31 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v31 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      v42 = DomainLockRef;
      if ( DomainLockRef == gDomainDummyLock )
      {
        v40 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v40 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      v36 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v36[2];
          v37 = *v36;
          v36[2] = 0LL;
          if ( !*(_DWORD *)(v37 + 8) )
          {
            v40 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
          }
          v38 = (PVOID *)GetDomainLockRef(12);
          if ( v38 == gDomainDummyLock )
          {
            v41 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v38);
          HMUnlockObject(*v36);
          tagDomLock::LockExclusive((PERESOURCE *)v38);
          v36 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v42;
      }
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
    }
  }
  return v2;
}
