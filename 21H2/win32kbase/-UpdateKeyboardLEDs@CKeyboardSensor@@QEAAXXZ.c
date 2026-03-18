/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0040610 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C0042A40 (UpdateKeyLights.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003C780 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMDeviceIoControl @ 0x1C0043640 (RIMDeviceIoControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00973A8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C00B3E4C (ApiSetEditionUpdateRemoteLights.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C00BCE20 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00BE630 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // r15
  __int64 v6; // rcx
  char v7; // r12
  struct RawInputManagerObject *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  PVOID v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  struct DEVICEINFO *i; // rcx
  char *v19; // rbx
  __int64 v20; // r8
  int v21; // esi
  int v22; // r15d
  int v23; // r12d
  char *v24; // rdi
  int v25; // ebx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  struct tagTHREADINFO **v29; // rbx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 *v38; // rbx
  LARGE_INTEGER *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  struct tagKERNELHANDLETABLEENTRY *v42; // rax
  __int64 v43; // rcx
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  char *Pool2; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  char v49; // [rsp+88h] [rbp-80h]
  PVOID BackTrace[20]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+138h] [rbp+30h] BYREF
  int v52; // [rsp+140h] [rbp+38h]
  GUID ActivityId; // [rsp+144h] [rbp+3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]

  v5 = 0;
  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( (struct _KTHREAD *)qword_1C029A1C8 == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( !gdwUpdateKeyboard )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 157) )
      {
        v7 = gdwUpdateKeyboard;
        LODWORD(v45) = gbNonServiceSession;
        *(_QWORD *)&qword_1C0296560 = gKbdImeStatus;
        gdwUpdateKeyboard &= 0xFFFFFFF8;
        dword_1C0296558 = gktp;
        word_1C029655C = word_1C029A8E8;
        dword_1C0296554 = gklp;
        dword_1C0296568 = dword_1C029A8E0;
        v8 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v9 = *((_QWORD *)this + 1);
        dword_1C0296578 = dword_1C0295010;
        qword_1C0296570 = gRemoteClientKeyboardType;
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v47, v8);
        UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
        v14 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v48,
          (struct CInpPushLock *)&CBaseInput::_sLock);
        v15 = gpLeakTrackingAllocator;
        v16 = 16LL * *((_QWORD *)this + 157);
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) == 0x70694843 )
        {
          v40 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v40) != 1885947971 )
            {
              if ( ++v40 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_12;
            }
            if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
            {
              v5 = 1;
              v16 += 16LL;
            }
            Pool2 = (char *)ExAllocatePool2(260LL, v16);
            v19 = Pool2;
            if ( !Pool2 )
              goto LABEL_65;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v5 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v15,
                                      Pool2,
                                      BackTrace) )
              {
                v19 = Pool2 + 16;
LABEL_13:
                Pool2 = v19;
                if ( !v19 )
                {
LABEL_22:
                  if ( !v49 )
                  {
                    ExReleasePushLockSharedEx(v48, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( (_DWORD)v14 )
                  {
                    v21 = v7 & 1;
                    v22 = v7 & 2;
                    v23 = v7 & 4;
                    v24 = v19;
                    i = 0LL;
                    v25 = v45;
                    do
                    {
                      LODWORD(v45) = 0;
                      if ( v21 )
                      {
                        LODWORD(Length) = 0;
                        RIMDeviceIoControl(
                          v9,
                          *(_QWORD *)v24,
                          720900,
                          (int)&dword_1C0296558,
                          6u,
                          0LL,
                          Length,
                          (__int64)&v45,
                          &giosbKbdControl,
                          1,
                          0,
                          0);
                        i = 0LL;
                      }
                      if ( v22 )
                      {
                        LODWORD(Length) = 0;
                        RIMDeviceIoControl(
                          v9,
                          *(_QWORD *)v24,
                          720904,
                          (int)&dword_1C0296554,
                          4u,
                          0LL,
                          Length,
                          (__int64)&v45,
                          &giosbKbdControl,
                          1,
                          0,
                          0);
                        i = 0LL;
                      }
                      if ( v23 && (v24[8] == 7 && v24[9] == 82 || v25 && qword_1C0296570 == 0x2000200000007LL) )
                      {
                        v41 = *(_QWORD *)v24;
                        LODWORD(Length) = 0;
                        LODWORD(v45) = 0;
                        RIMDeviceIoControl(
                          v9,
                          v41,
                          724996,
                          (int)&qword_1C0296560,
                          0xCu,
                          0LL,
                          Length,
                          (__int64)&v45,
                          &giosbKbdControl,
                          1,
                          0,
                          0);
                        i = 0LL;
                      }
                      v24 += 16;
                      --v14;
                    }
                    while ( v14 );
                    v19 = Pool2;
                  }
                  if ( v19 )
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      v19);
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(i, v17, v20);
                  else
                    CurrentThreadWin32Thread = 0LL;
                  v51 = CurrentThreadWin32Thread;
                  v52 = 1;
                  if ( CurrentThreadWin32Thread
                    && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v51 + 48)) )
                  {
                    EtwActivityIdControl(3u, &ActivityId);
                    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v56 = 4LL;
                      LODWORD(v45) = v52 == 1;
                      v55 = &v45;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (int)&dword_1C028EE70,
                        (int)&dword_1C025AD79,
                        (int)&ActivityId,
                        0,
                        3u,
                        &v54);
                    }
                  }
                  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
                    || (v27 = W32kEtwEnabledKeyword,
                        v28 = 0x8000002010000000uLL,
                        (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
                    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
                    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
                    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
                    || (v28 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
                    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
                    && (qword_1C028DB20 & 0x200000010000000LL) != 0
                    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
                  {
                    v39 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i, v27, v28);
                    if ( v39 )
                      v39[1] = KeQueryPerformanceCounter(0LL);
                  }
                  v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                  EtwTraceAcquiredExclusiveUserCrit();
                  if ( v29 )
                  {
                    v30 = *v29;
                    if ( IsThreadCrossSessionAttached() )
                      v30 = 0LL;
                    if ( v51 )
                    {
                      v32 = *(unsigned int *)(v51 + 24);
                      if ( *(_DWORD *)(v51 + 48) || (int)v32 > 0 )
                      {
                        *(_DWORD *)(v51 + 44) = 1;
                        *(GUID *)(v51 + 28) = ActivityId;
                        v33 = (unsigned int)dword_1C028EE70;
                        if ( (unsigned int)dword_1C028EE70 > 6 )
                        {
                          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                          {
                            v59 = 4LL;
                            LODWORD(v45) = v52 == 1;
                            v58 = &v45;
                            tlgWriteTransfer_EtwWriteTransfer(
                              (int)&dword_1C028EE70,
                              (int)&dword_1C025AD22,
                              (int)&ActivityId,
                              0,
                              3u,
                              &v57);
                            v33 = (unsigned int)dword_1C028EE70;
                          }
                          if ( (unsigned int)v33 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                          {
                            v62 = 4LL;
                            LODWORD(v45) = v52 == 1;
                            v61 = &v45;
                            tlgWriteTransfer_EtwWriteTransfer(
                              (int)&dword_1C028EE70,
                              (int)&dword_1C025AD4F,
                              (int)&ActivityId,
                              0,
                              3u,
                              &v60);
                          }
                        }
                      }
                    }
                    gptiCurrent = v30;
                    if ( v30 )
                    {
                      *((_DWORD *)v30 + 377) = 1;
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32, v31, v33, v34);
                      if ( CurrentProcessWin32Process )
                      {
                        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                        {
                          while ( 1 )
                          {
                            v38 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                            if ( !gpSharedUserCritDeferredUnlockListHead )
                              break;
                            v42 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                      + 2);
                            v43 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                            gpSharedUserCritDeferredUnlockListHead = v42;
                            if ( !*(_DWORD *)(v43 + 8) )
                            {
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v36, v37);
                              v43 = *v38;
                            }
                            HMUnlockObject(v43);
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v51);
                    gptiCurrent = 0LL;
                  }
                  ApiSetEditionUpdateRemoteLights();
                  RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v47);
                  return;
                }
LABEL_14:
                for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
                {
                  if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
                  {
                    if ( (unsigned __int64)(unsigned int)v14 >= *((_QWORD *)this + 157) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v14, v20);
                      goto LABEL_22;
                    }
                    v17 = 2LL * (unsigned int)v14;
                    v14 = (unsigned int)(v14 + 1);
                    *(_QWORD *)&v19[8 * v17] = *((_QWORD *)i + 2);
                    *(_WORD *)&v19[8 * v17 + 8] = *((_WORD *)i + 228);
                  }
                }
                goto LABEL_22;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v15,
                                         Pool2,
                                         BackTrace) )
            {
              goto LABEL_14;
            }
            ExFreePoolWithTag(Pool2, 0);
LABEL_65:
            v19 = 0LL;
            Pool2 = 0LL;
            goto LABEL_22;
          }
        }
LABEL_12:
        v19 = (char *)ExAllocatePool2(260LL, v16);
        goto LABEL_13;
      }
    }
  }
}
