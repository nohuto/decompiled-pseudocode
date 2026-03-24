/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8240
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_s @ 0x1C01526CC (WPP_RECORDER_SF_s.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01B3D80 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B4CD8 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 **v2; // r12
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
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
  PVOID *DomainLockRef; // rbx
  __int64 *v28; // r14
  __int64 v29; // rax
  PVOID *v30; // rdi
  PEVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 **v36; // [rsp+48h] [rbp-C0h]
  _QWORD v37[6]; // [rsp+50h] [rbp-B8h] BYREF
  char v38; // [rsp+80h] [rbp-88h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  unsigned __int8 v40; // [rsp+90h] [rbp-78h]
  GUID ActivityId; // [rsp+94h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+A8h] [rbp-60h] BYREF
  int *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D8h] [rbp-30h] BYREF
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]

  v2 = a2;
  v36 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      12,
      50,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_FULL_STATES");
  v37[2] = v2;
  v3 = 1;
  v37[1] = 0LL;
  v37[4] = 0LL;
  v37[5] = 0LL;
  v38 = 1;
  v4 = IVDeSerializeIVKeyboardStatesPacket(v2, (struct CIVSerializer *)v37);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v32) = v4;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, 2, 12, 51, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids, v32);
    }
    v3 = 0;
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v40 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v39 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v34 = v40;
          v44 = 4LL;
          v43 = &v34;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FF7,
            &ActivityId,
            0LL,
            3u,
            &v42);
        }
      }
    }
    else
    {
      v39 = 0LL;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
    {
      *(_DWORD *)(v39 + 44) = 1;
      *(GUID *)(v39 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024BA90 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          v33 = v40;
          v47 = 4LL;
          v46 = &v33;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FA0,
            &ActivityId,
            0LL,
            3u,
            &v45);
          v16 = dword_1C024BA90;
        }
        if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
        {
          LODWORD(v35) = v40;
          v50 = 4LL;
          v49 = &v35;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024BA90,
            (unsigned __int8 *)dword_1C0218FCD,
            &ActivityId,
            0LL,
            3u,
            &v48);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
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
        DomainLockRef = (PVOID *)GetDomainLockRef(12);
        if ( DomainLockRef == gDomainDummyLock )
        {
          v33 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
        }
        if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
        {
          v33 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
        }
        ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
        v28 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
            v29 = *v28;
            v28[2] = 0LL;
            if ( !*(_DWORD *)(v29 + 8) )
            {
              v33 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
            }
            v30 = (PVOID *)GetDomainLockRef(12);
            if ( v30 == gDomainDummyLock )
            {
              v34 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
            }
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v30);
            HMUnlockObject(*v28);
            tagDomLock::LockExclusive((PERESOURCE *)v30);
            v28 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v36;
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      }
    }
    ApplyFullKeyboardStates(*v2, (__int128 *)v2[1]);
    UserSessionSwitchLeaveCrit();
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v37);
  return v3;
}
