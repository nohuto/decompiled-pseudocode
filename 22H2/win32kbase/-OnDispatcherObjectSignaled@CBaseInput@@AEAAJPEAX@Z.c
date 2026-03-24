/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0045998
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0045DF0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0045D18 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0045D80 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0128388 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01A38DC (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  CBaseInput *v4; // r14
  __int64 v5; // r9
  void **v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v30; // rsi
  int v31; // ebx
  __int64 v33; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v36; // r15d
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  PERESOURCE *v43; // rdi
  int v44; // [rsp+38h] [rbp-D0h] BYREF
  int v45; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  CBaseInput *v48; // [rsp+50h] [rbp-B8h]
  __int64 *v49; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-A0h]
  unsigned __int8 ActivityId_4; // [rsp+70h] [rbp-98h]
  GUID ActivityId_8; // [rsp+74h] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+88h] [rbp-80h] BYREF
  int *v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+B8h] [rbp-50h] BYREF
  int *v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]

  v2 = *(_QWORD *)this;
  v4 = this;
  v48 = this;
  (*(void (__fastcall **)(CBaseInput *))(v2 + 112))(this);
  v6 = (void **)((char *)v4 + 200);
  v7 = 0;
  while ( *v6 != a2 )
  {
    ++v7;
    v6 += 8;
    if ( v7 >= 0x11 )
    {
      v36 = 17;
      goto LABEL_9;
    }
  }
  v8 = (unsigned __int64)v7 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)v4 + v8 + 152)) )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 501LL);
  }
  v36 = *(_DWORD *)((char *)v4 + v8 + 168);
  if ( v7 != v36 )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 502LL);
    v36 = *(_DWORD *)((char *)v4 + v8 + 168);
  }
LABEL_9:
  if ( v36 == 17 )
  {
    v31 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v49, "DispatcherObjectSignaled", 0LL, v5);
    if ( (unsigned int)dword_1C024AA90 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 2LL, v10, v11) )
    {
      v47 = InputTraceLogging::DispatcherHandleNameToString(v36);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C024AA90,
        (__int64)&v47);
    }
    if ( v36 != *((_DWORD *)&unk_1C02096A0 + 6 * v36) )
    {
      v44 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2590LL);
    }
    if ( *((_BYTE *)&unk_1C02096A0 + 24 * v36 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId_8 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        ActivityId_4 = 1;
        v37 = PsGetCurrentThreadWin32Thread(v12);
        v50 = v37;
        if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v50 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C024AA90 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v38, v39) )
            {
              v45 = ActivityId_4;
              v55 = 4LL;
              v54 = &v45;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C024AA90,
                (int)&dword_1C0217FD7,
                (int)&ActivityId_8,
                0,
                3u,
                &v53);
            }
          }
        }
      }
      else
      {
        v50 = 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v14 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v50 && (*(_DWORD *)(v50 + 48) || *(int *)(v50 + 24) > 0) )
      {
        *(_DWORD *)(v50 + 44) = 1;
        *(GUID *)(v50 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v21) )
          {
            v44 = ActivityId_4;
            v58 = 4LL;
            v57 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217F80,
              (int)&ActivityId_8,
              0,
              3u,
              &v56);
            v40 = (unsigned int)dword_1C024AA90;
          }
          if ( (unsigned int)v40 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v40, v41) )
          {
            LODWORD(v46) = ActivityId_4;
            v61 = 4LL;
            v60 = &v46;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217FAD,
              (int)&ActivityId_8,
              0,
              3u,
              &v59);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v33 = PsGetCurrentProcess(v23, v22),
            ProcessSessionId = PsGetProcessSessionIdEx(v33),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v25 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v25 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
        if ( v25
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v25 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v25 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          {
            v44 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          }
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          {
            v44 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
          }
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v30 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
              v42 = *v30;
              v30[2] = 0LL;
              if ( !*(_DWORD *)(v42 + 8) )
              {
                v44 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
              }
              v43 = (PERESOURCE *)GetDomainLockRef(12);
              if ( v43 == (PERESOURCE *)&gDomainDummyLock )
              {
                v45 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v43);
              HMUnlockObject(*v30);
              tagDomLock::LockExclusive(v43);
              v30 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v48;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      v31 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C02096A0 + 3 * v36 + 1))(v4);
      UserSessionSwitchLeaveCrit();
    }
    else
    {
      v31 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C02096A0 + 3 * v36 + 1))(v4);
    }
    if ( v31 < 0 )
    {
      v45 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2601LL);
    }
    CRIMBase::SignalMarshalingCompleted(v4, v36);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v49);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 120LL))(v4);
  return (unsigned int)v31;
}
