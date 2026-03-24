/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00488D0
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0048E60 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C00B0860 (UpdateKeyLights.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C000B528 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0045494 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     RIMDeviceIoControl @ 0x1C0051E70 (RIMDeviceIoControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C00B2348 (ApiSetEditionUpdateRemoteLights.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C00B5DE0 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00B6D20 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rcx
  char v3; // r12
  struct RawInputManagerObject *v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rdi
  struct DEVICEINFO *i; // rcx
  __int64 v8; // rsi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  PERESOURCE *v44; // rdi
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  int v46; // [rsp+68h] [rbp-A0h] BYREF
  int v47; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v48; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+74h] [rbp-94h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v51[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h] BYREF
  char v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  unsigned __int8 v55; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+B8h] [rbp-50h] BYREF
  int *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+E8h] [rbp-20h] BYREF
  int *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]

  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( (struct _KTHREAD *)qword_1C02554D8 == KeGetCurrentThread() )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    if ( !gdwUpdateKeyboard )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 152LL);
    }
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v2 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 155) )
      {
        v3 = gdwUpdateKeyboard;
        v47 = gbNonServiceSession;
        *(_QWORD *)&qword_1C0251790 = gKbdImeStatus;
        gdwUpdateKeyboard &= 0xFFFFFFF8;
        dword_1C0251784 = gktp;
        word_1C0251788 = word_1C0255AF0;
        dword_1C0251780 = gklp;
        dword_1C0251798 = dword_1C0255AE8;
        v4 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v5 = *((_QWORD *)this + 1);
        dword_1C02517A8 = dword_1C02500E8;
        qword_1C02517A0 = gRemoteClientKeyboardType;
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v51, v4);
        UserSessionSwitchLeaveCrit();
        v6 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v52,
          (struct CInpPushLock *)&CBaseInput::_sLock);
        v50 = Win32AllocPool(16LL * *((_QWORD *)this + 155), 0x70694843u);
        v8 = v50;
        if ( v50 )
        {
          for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
          {
            if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
            {
              if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 155) )
              {
                v46 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 217LL);
                break;
              }
              v33 = 2LL * (unsigned int)v6;
              v6 = (unsigned int)(v6 + 1);
              *(_QWORD *)(v8 + 8 * v33) = *((_QWORD *)i + 2);
              *(_WORD *)(v8 + 8 * v33 + 8) = *((_WORD *)i + 232);
            }
          }
        }
        if ( !v53 )
        {
          ExReleasePushLockSharedEx(v52, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (_DWORD)v6 )
        {
          v9 = v3 & 1;
          v10 = v3 & 2;
          v11 = v3 & 4;
          v12 = v8;
          i = 0LL;
          v13 = v47;
          do
          {
            v46 = 0;
            if ( v9 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v5,
                *(_QWORD *)v12,
                720900,
                (int)&dword_1C0251784,
                6u,
                0LL,
                Length,
                (__int64)&v46,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v10 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v5,
                *(_QWORD *)v12,
                720904,
                (int)&dword_1C0251780,
                4u,
                0LL,
                Length,
                (__int64)&v46,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v11
              && (*(_BYTE *)(v12 + 8) == 7 && *(_BYTE *)(v12 + 9) == 82 || v13 && qword_1C02517A0 == 0x2000200000007LL) )
            {
              v37 = *(_QWORD *)v12;
              LODWORD(Length) = 0;
              v47 = 0;
              RIMDeviceIoControl(
                v5,
                v37,
                724996,
                (int)&qword_1C0251790,
                0xCu,
                0LL,
                Length,
                (__int64)&v47,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            v12 += 16LL;
            --v6;
          }
          while ( v6 );
          v8 = v50;
        }
        if ( v8 )
          Win32FreePool(v8);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v55 = 1;
          v38 = PsGetCurrentThreadWin32Thread(v14);
          v54 = v38;
          if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024BA90 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v39, v40) )
              {
                v48 = v55;
                v59 = 4LL;
                v58 = &v48;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024BA90,
                  (int)&dword_1C0218FF7,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v57);
              }
            }
          }
        }
        else
        {
          v54 = 0LL;
        }
        v16 = 0LL;
        while ( 1 )
        {
          v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v17 )
            v16 = *v17;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v19, v18);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v16 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v54
          && (*(_DWORD *)(v54 + 48) || *(int *)(v54 + 24) > 0) )
        {
          *(_DWORD *)(v54 + 44) = 1;
          *(GUID *)(v54 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024BA90 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, (unsigned int)dword_1C024BA90, v23) )
            {
              v49 = v55;
              v62 = 4LL;
              v61 = &v49;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C024BA90,
                (int)&dword_1C0218FA0,
                (int)&ActivityId,
                0,
                3u,
                &v60);
              v41 = (unsigned int)dword_1C024BA90;
            }
            if ( (unsigned int)v41 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v41, v42) )
            {
              LODWORD(v50) = v55;
              v65 = 4LL;
              v64 = &v50;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C024BA90,
                (int)&dword_1C0218FCD,
                (int)&ActivityId,
                0,
                3u,
                &v63);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v16;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v34 = PsGetCurrentProcess(v25, v24),
              ProcessSessionId = PsGetProcessSessionIdEx(v34),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v27 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v27 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
          if ( v27
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v27 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v27 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            {
              v46 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
            }
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            {
              v46 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
            }
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v32 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v43 = *v32;
              v32[2] = 0LL;
              if ( !*(_DWORD *)(v43 + 8) )
              {
                v46 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v44 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v44 == (PERESOURCE *)&gDomainDummyLock )
              {
                v47 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v44);
              HMUnlockObject(*v32);
              tagDomLock::LockExclusive(v44);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        ApiSetEditionUpdateRemoteLights();
        RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v51);
      }
    }
  }
}
