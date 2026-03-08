/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0008588 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0039080 (-Read@CBaseInput@@QEAAJXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00EF92A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C020BB8C (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  char v2; // si
  __int64 v3; // rcx
  __int64 v4; // r9
  char v5; // bl
  CBaseInput *v6; // rcx
  char *v7; // rdx
  unsigned int v8; // ebx
  PVOID Reserved; // rdx
  unsigned __int64 v11; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO **v14; // r15
  __int64 v15; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  LONGLONG v17; // rbx
  int v18; // r8d
  bool v19; // zf
  struct tagTHREADINFO *v20; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rax
  struct tagKERNELHANDLETABLEENTRY *v24; // rbx
  int v25; // r8d
  int v26; // r9d
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  char v29; // [rsp+80h] [rbp+18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v29,
    "OnReadNotification",
    0LL);
  if ( *((int *)this + 8) < 0 )
  {
    v2 = 0;
LABEL_3:
    v5 = 0;
    if ( !v2 )
      goto LABEL_8;
    goto LABEL_4;
  }
  v2 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 48LL))(this) )
    goto LABEL_3;
  if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v11 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v13 = SGDGetUserSessionState(v3, Reserved, v11, v4);
  v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v13 + 8));
  if ( v14 )
  {
    if ( (unsigned int)IsEtwUserCritEnabled() )
    {
      v15 = PsGetCurrentThreadWin32Thread();
      if ( v15 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(&unk_1C02D1910, 0, 0x1128uLL);
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v17, 0LL);
        if ( (dword_1C02D1900 & 1) == 0 )
        {
          dword_1C02D1900 |= 1u;
          memset(&unk_1C02D1910, 0, 0x1128uLL);
          word_1C02D2A38 = 0;
          byte_1C02D2A3A = 0;
          memset(&unk_1C02D2A40, 0, 0x168uLL);
          qword_1C02D2BB8 = 0LL;
          qword_1C02D2BD0 = 0LL;
          xmmword_1C02D2BA8 = 0LL;
          qword_1C02D2BE8 = 0LL;
          xmmword_1C02D2BC0 = 0LL;
          xmmword_1C02D2BF0 = 0uLL;
          xmmword_1C02D2BD8 = 0LL;
        }
        UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)&unk_1C02D1910);
        v19 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
        *(LARGE_INTEGER *)(v15 + 8) = PerformanceCounter;
        if ( !v19
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v18,
            v17,
            1000000 * v17 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        if ( v17 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
          && (signed __int64)(PerformanceCounter.QuadPart
                            - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v18,
              v17,
              1000 * v17 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    v20 = *v14;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      gptiCurrent = v20;
      if ( v20 )
      {
        *((_DWORD *)v20 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v24 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v23 = *(_QWORD *)v24;
              *((_QWORD *)v24 + 2) = 0LL;
              if ( !*(_DWORD *)(v23 + 8) )
              {
                v27 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*(_QWORD *)v24);
            }
          }
        }
      }
      goto LABEL_58;
    }
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
  }
  gptiCurrent = 0LL;
LABEL_58:
  v5 = 1;
LABEL_4:
  if ( (unsigned int)dword_1C02CA7E0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 2LL) )
  {
    v27 = *((_DWORD *)this + 10);
    v28 = *((_QWORD *)this + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029B844,
      v25,
      v26,
      (__int64)&v28,
      (__int64)&v27);
  }
  (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 56LL))(
    this,
    *((_QWORD *)this + 8),
    *((unsigned int *)this + 6),
    *((unsigned int *)this + 10),
    *((_QWORD *)this + 6));
  if ( CBaseInput::IsInputSuppressRequested(v6) )
    CBaseInput::OnInputSuppressed(this);
  else
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
  v7 = (char *)*((_QWORD *)this + 9);
  if ( *((char **)this + 8) != v7 )
  {
    if ( v7 != (char *)this + 80 && v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
    *((_QWORD *)this + 9) = *((_QWORD *)this + 8);
    *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
  }
LABEL_8:
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  if ( v5 )
    UserSessionSwitchLeaveCrit();
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v8 = CBaseInput::Read(this);
  if ( v2 )
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 72LL))(this);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
  return v8;
}
