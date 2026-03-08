/*
 * XREFs of HandleMITWakeSignal @ 0x1C007DE68
 * Callers:
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00C5F00 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 * Callees:
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
 *     ProcessMouseEvent @ 0x1C007C3A0 (ProcessMouseEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C02178E0 (ExecuteMarshaledInterceptRequest.c)
 */

void HandleMITWakeSignal()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int32 i; // esi
  int v5; // edi
  const char *v6; // rax
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO **v10; // r15
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v21; // rbx
  int v22; // r8d
  struct tagTHREADINFO *v23; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v29; // [rsp+98h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v29, "HandleMITWakeSignal", 0LL);
  for ( i = _InterlockedExchange(&gdwMITWakeReason, 0); i; i &= ~v5 )
  {
    v5 = i & -i;
    if ( ((unsigned __int8)i & (unsigned __int8)-(char)i & 7) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 347LL);
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    {
      switch ( v5 )
      {
        case 1:
          v6 = "Mouse";
          break;
        case 2:
          v6 = "InputSinkFromPoint";
          break;
        case 4:
          v6 = "MouseInterceptCallout";
          break;
        default:
          v6 = "UNKNOWN";
          break;
      }
      v28 = (__int64)v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C02CA7E0,
        (__int64)&v28);
    }
    switch ( v5 )
    {
      case 1:
        ProcessMouseEvent(v1, v0, v2, v3);
        break;
      case 2:
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
          && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
          || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x200000010000000LL) != 0
          && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1, Reserved, v2, v3, v27);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        }
        v9 = SGDGetUserSessionState(v1, Reserved, v2, v3);
        v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v9 + 8));
        if ( !v10 )
        {
          EtwTraceAcquiredExclusiveUserCrit();
          goto LABEL_35;
        }
        if ( IsEtwUserCritEnabled() )
        {
          v19 = PsGetCurrentThreadWin32Thread(v16, v15, v17, v18, v27);
          if ( v19 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
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
            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v21, 0);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
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
            UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
            *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
            if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v22,
                v21,
                1000000 * v21 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            if ( v21 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (signed __int64)(PerformanceCounter.QuadPart
                                - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v22,
                  v21,
                  1000 * v21 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
            }
            *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v23 = *v10;
        if ( IsThreadCrossSessionAttached() )
        {
LABEL_35:
          gptiCurrent = 0LL;
        }
        else
        {
          gptiCurrent = v23;
          if ( v23 )
          {
            *((_DWORD *)v23 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process )
              {
                if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                {
                  v12 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      v25 = *v26;
                      v26[2] = 0LL;
                      if ( !*(_DWORD *)(v25 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*v26);
                    }
                  }
                }
              }
            }
          }
        }
        if ( qword_1C02D7FF8 )
          qword_1C02D7FF8();
        UserSessionSwitchLeaveCrit((__int64)v12, v11, v13, v14);
        continue;
      case 4:
        ExecuteMarshaledInterceptRequest();
        break;
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
}
