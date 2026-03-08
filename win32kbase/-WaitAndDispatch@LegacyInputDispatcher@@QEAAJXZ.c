/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0032C90
 * Callers:
 *     <none>
 * Callees:
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C0032FA0 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00335F4 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  void (*v17)(void); // rax
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v21; // rax
  struct tagTHREADINFO **v22; // r14
  __int64 v23; // rsi
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v25; // rbx
  int v26; // r8d
  bool v27; // zf
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)(SGDGetUserSessionState(this, a2, a3, a4) + 12672) )
        goto LABEL_3;
      v9 = *(unsigned int *)(SGDGetUserSessionState(v6, v5, v7, v8) + 12616);
      if ( (v9 & 7) == 0 )
        goto LABEL_3;
      if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
        || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
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
      v21 = SGDGetUserSessionState(v9, Reserved, v10, v11);
      v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v21 + 8));
      if ( v22 )
      {
        if ( (unsigned int)IsEtwUserCritEnabled() )
        {
          v23 = PsGetCurrentThreadWin32Thread();
          if ( v23 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v25 = PerformanceCounter.QuadPart - *(_QWORD *)(v23 + 8);
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
            UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v25, 0LL);
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
            v27 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
            *(LARGE_INTEGER *)(v23 + 8) = PerformanceCounter;
            if ( !v27
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v26,
                v25,
                1000000 * v25 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            if ( v25 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (signed __int64)(PerformanceCounter.QuadPart
                                - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v26,
                  v25,
                  1000 * v25 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
            }
            *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v28 = *v22;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          gptiCurrent = v28;
          if ( v28 )
          {
            *((_DWORD *)v28 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v31 = gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v37 = *(_QWORD *)v31;
                  *((_QWORD *)v31 + 2) = 0LL;
                  if ( !*(_DWORD *)(v37 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                  HMUnlockObject(*(_QWORD *)v31);
                }
              }
            }
          }
          goto LABEL_32;
        }
      }
      else
      {
        EtwTraceAcquiredExclusiveUserCrit();
      }
      gptiCurrent = 0LL;
LABEL_32:
      if ( NeedsUpdateKeyboardLEDs() )
      {
        v36 = SGDGetUserSessionState(v33, v32, v34, v35);
        CKeyboardSensor::UpdateKeyboardLEDs(*(CKeyboardSensor **)(v36 + 12672));
      }
      UserSessionSwitchLeaveCrit(v33, v32, v34);
LABEL_3:
      v12 = KeWaitForMultipleObjects(
              *((_DWORD *)this + 13),
              *((PVOID **)this + 1),
              WaitAny,
              WrUserRequest,
              *((_BYTE *)this + 56),
              *((_BYTE *)this + 57),
              0LL,
              *((PKWAIT_BLOCK *)this + 3));
      v13 = (unsigned int)v12;
      if ( v12 < 0 )
        return (unsigned int)v13;
      v14 = *((_DWORD *)this + 13);
      if ( (unsigned int)v13 >= v14 )
        break;
      v15 = *((_DWORD *)this + 10);
      if ( v15 >= v14 && v15 != 64 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3281LL);
      v16 = *((_DWORD *)this + 10);
      if ( (unsigned int)v13 < v16 || v16 == 64 )
        break;
      LegacyInputDispatcher::Dispatch(this, v13);
    }
    if ( (unsigned int)v13 >= *((_DWORD *)this + 10) )
      break;
    v17 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v13);
    if ( !v17 )
      break;
    v17();
  }
  return (unsigned int)v13;
}
