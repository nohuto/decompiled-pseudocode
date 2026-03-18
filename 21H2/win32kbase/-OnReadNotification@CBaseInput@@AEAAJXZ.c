/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0005A30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0005B88 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C005DB20 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E6322 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DC43C (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  char v2; // si
  char v3; // bl
  CBaseInput *v4; // rcx
  char *v5; // rcx
  char *v6; // rdx
  unsigned int v7; // r14d
  __int64 CurrentThreadWin32Thread; // rax
  LARGE_INTEGER *v10; // rbx
  struct tagTHREADINFO **v11; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagKERNELHANDLETABLEENTRY *v21; // rax
  __int64 v22; // rcx
  struct tagKERNELHANDLETABLEENTRY *v23; // rbx
  int v24; // r8d
  int v25; // r9d
  int v26; // [rsp+30h] [rbp-99h] BYREF
  __int64 v27; // [rsp+38h] [rbp-91h] BYREF
  char v28[8]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v29; // [rsp+48h] [rbp-81h] BYREF
  int v30; // [rsp+50h] [rbp-79h]
  GUID ActivityId; // [rsp+54h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+68h] [rbp-61h] BYREF
  int *v33; // [rsp+88h] [rbp-41h]
  __int64 v34; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+98h] [rbp-31h] BYREF
  int *v36; // [rsp+B8h] [rbp-11h]
  __int64 v37; // [rsp+C0h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+C8h] [rbp-1h] BYREF
  int *v39; // [rsp+E8h] [rbp+1Fh]
  __int64 v40; // [rsp+F0h] [rbp+27h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v28,
    "OnReadNotification",
    0LL);
  if ( *((int *)this + 8) < 0 )
  {
    v2 = 0;
LABEL_3:
    v3 = 0;
    if ( !v2 )
      goto LABEL_8;
    goto LABEL_4;
  }
  v2 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 48LL))(this) )
    goto LABEL_3;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  v29 = CurrentThreadWin32Thread;
  v30 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v29 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v34 = 4LL;
        v26 = v30 == 1;
        v33 = &v26;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v32);
      }
    }
  }
  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v10 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v10 )
      v10[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v11 )
  {
    v12 = *v11;
    if ( (unsigned int)IsThreadCrossSessionAttached() )
      v12 = 0LL;
    if ( v29 )
    {
      v14 = *(unsigned int *)(v29 + 24);
      if ( *(_DWORD *)(v29 + 48) || (int)v14 > 0 )
      {
        *(_DWORD *)(v29 + 44) = 1;
        *(GUID *)(v29 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v37 = 4LL;
            v26 = v30 == 1;
            v36 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD22,
              (int)&ActivityId,
              0,
              3u,
              &v35);
          }
          if ( (unsigned int)dword_1C028EE70 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v40 = 4LL;
            v26 = v30 == 1;
            v39 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD4F,
              (int)&ActivityId,
              0,
              3u,
              &v38);
          }
        }
      }
    }
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15, v16);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v23 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v21 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v22 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v21;
            if ( !*(_DWORD *)(v22 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v19);
              v22 = *(_QWORD *)v23;
            }
            HMUnlockObject(v22, v18, v19, v20);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v29);
    gptiCurrent = 0LL;
  }
  v3 = 1;
LABEL_4:
  if ( (unsigned int)dword_1C028EE70 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 2LL) )
  {
    v26 = *((_DWORD *)this + 10);
    v27 = *((_QWORD *)this + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C028EE70,
      (unsigned int)&unk_1C02620E7,
      v24,
      v25,
      (__int64)&v27,
      (__int64)&v26);
  }
  (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 56LL))(
    this,
    *((_QWORD *)this + 8),
    *((unsigned int *)this + 6),
    *((unsigned int *)this + 10),
    *((_QWORD *)this + 6));
  if ( CBaseInput::IsInputSuppressRequested(v4) )
    CBaseInput::OnInputSuppressed(this);
  else
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
  v5 = (char *)*((_QWORD *)this + 8);
  v6 = (char *)*((_QWORD *)this + 9);
  if ( v5 != v6 )
  {
    if ( v6 != (char *)this + 80 && v6 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v6);
      v5 = (char *)*((_QWORD *)this + 8);
    }
    *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
    *((_QWORD *)this + 9) = v5;
  }
LABEL_8:
  v7 = CBaseInput::Read(this);
  if ( v3 )
    UserSessionSwitchLeaveCrit();
  if ( v2 )
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 72LL))(this);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v28);
  return v7;
}
