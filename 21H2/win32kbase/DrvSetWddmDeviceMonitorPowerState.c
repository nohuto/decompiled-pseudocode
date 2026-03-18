/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00D2E20 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  wchar_t *v7; // rcx
  unsigned int v8; // esi
  wchar_t *j; // rbx
  wchar_t *k; // rax
  int v11; // eax
  int v12; // edi
  __int64 *v13; // rdi
  wchar_t *v14; // rdi
  unsigned int v15; // esi
  unsigned int i; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r14d
  _QWORD *v25; // rdi
  int v26; // eax
  int v27; // r15d
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  LARGE_INTEGER *v31; // rdi
  struct tagTHREADINFO **v32; // rdi
  struct tagTHREADINFO *v33; // rdi
  __int64 v34; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  void *v39; // rcx
  __int64 v40; // rax
  PVOID v41; // rdi
  unsigned __int64 v42; // rdx
  char *Pool2; // rbx
  char v44; // r15
  unsigned int v45; // r8d
  struct tagKERNELHANDLETABLEENTRY *v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD InputBuffer[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+110h] [rbp+10h] BYREF
  int v53; // [rsp+118h] [rbp+18h]
  GUID ActivityId; // [rsp+11Ch] [rbp+1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+160h] [rbp+60h] BYREF
  unsigned int *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF
  unsigned int *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]

  v4 = a2;
  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v50 = a4;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  WdLogSingleEntry2(5LL, a1, v4);
  if ( a3 )
    goto LABEL_10;
  v7 = gpGraphicsDeviceList;
  v8 = 0;
  while ( v7 )
  {
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0 && *((_QWORD *)v7 + 29) && (!a1 || *((_QWORD *)v7 + 18) == a1) )
      ++v8;
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  if ( 24 * v8 )
  {
    v41 = gpLeakTrackingAllocator;
    v42 = 24 * v8;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) != 0x706D7447
      || (v40 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_70:
      Pool2 = (char *)ExAllocatePool2(260LL, v42);
      goto LABEL_29;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v40) != 1886221383 )
    {
      if ( ++v40 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_70;
    }
    v44 = 0;
    if ( v42 < 0x1000 || ((24 * (_WORD)v8) & 0xFFF) != 0 )
    {
      v44 = 1;
      v42 += 16LL;
    }
    Pool2 = (char *)ExAllocatePool2(260LL, v42);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v44 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v41,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16;
          goto LABEL_29;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v41,
                                   Pool2,
                                   BackTrace) )
      {
LABEL_29:
        if ( Pool2 )
        {
          v14 = gpGraphicsDeviceList;
          v15 = 0;
          while ( v14 )
          {
            if ( (*((_DWORD *)v14 + 40) & 0x800000) != 0
              && *((_QWORD *)v14 + 29)
              && (!a1 || *((_QWORD *)v14 + 18) == a1) )
            {
              for ( i = 0; i < v15; ++i )
              {
                if ( *(_QWORD *)&Pool2[24 * i + 16] == *((_QWORD *)v14 + 18) )
                  break;
              }
              if ( v15 == i )
              {
                v38 = 3LL * v15;
                *(_QWORD *)&Pool2[8 * v38] = *((_QWORD *)v14 + 17);
                v39 = (void *)*((_QWORD *)v14 + 29);
                *(_QWORD *)&Pool2[8 * v38 + 8] = v39;
                *(_QWORD *)&Pool2[8 * v38 + 16] = *((_QWORD *)v14 + 18);
                ObfReferenceObject(v39);
                ++v15;
              }
            }
            v14 = (wchar_t *)*((_QWORD *)v14 + 16);
          }
          KeResetEvent(gpevtMonitorPowerWaiter);
          gfMonitorPowerInProgress = 1;
          UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
          v24 = 0;
          if ( v15 )
          {
            v25 = Pool2;
            do
            {
              DrvDxgkLogCodePointPacket(90, v24, v15, 0);
              v26 = GreDeviceIoControlImpl((PDEVICE_OBJECT)*v25, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v48, 1u, 1);
              v27 = v26;
              if ( v26 < 0 )
                WdLogSingleEntry2(2LL, *v25, v26);
              ObfDereferenceObject((PVOID)v25[1]);
              DrvDxgkLogCodePointPacket(91, v27, 0, 0);
              ++v24;
              v25 += 3;
            }
            while ( v24 < v15 );
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v22, v21, v23);
          else
            CurrentThreadWin32Thread = 0LL;
          v52 = CurrentThreadWin32Thread;
          v53 = 1;
          if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v52 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v57 = 4LL;
              v48 = v53 == 1;
              v56 = &v48;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &ActivityId,
                0LL,
                3u,
                &v55);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v29 = W32kEtwEnabledKeyword,
                v30 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v30 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v22, v29, v30);
            if ( v31 )
              v31[1] = KeQueryPerformanceCounter(0LL);
          }
          v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v32 )
          {
            v33 = *v32;
            if ( IsThreadCrossSessionAttached() )
              v33 = 0LL;
            if ( v52 )
            {
              v34 = *(unsigned int *)(v52 + 24);
              if ( *(_DWORD *)(v52 + 48) || (int)v34 > 0 )
              {
                *(_DWORD *)(v52 + 44) = 1;
                *(GUID *)(v52 + 28) = ActivityId;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v60 = 4LL;
                    v48 = v53 == 1;
                    v59 = &v48;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &ActivityId,
                      0LL,
                      3u,
                      &v58);
                    v45 = dword_1C028EE70;
                  }
                  if ( v45 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v63 = 4LL;
                    v48 = v53 == 1;
                    v62 = &v48;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &ActivityId,
                      0LL,
                      3u,
                      &v61);
                  }
                }
              }
            }
            gptiCurrent = v33;
            if ( v33 )
            {
              *((_DWORD *)v33 + 377) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
              if ( CurrentProcessWin32Process )
              {
                if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v46 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    v47 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    gpSharedUserCritDeferredUnlockListHead = v46;
                    if ( !*(_DWORD *)(v47 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v36, v37);
                      v47 = *v13;
                    }
                    HMUnlockObject(v47);
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v52);
            gptiCurrent = 0LL;
          }
          gfMonitorPowerInProgress = 0;
          KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            Pool2);
          return;
        }
        goto LABEL_113;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    Pool2 = 0LL;
    goto LABEL_29;
  }
LABEL_113:
  WdLogSingleEntry1(6LL, v8);
LABEL_10:
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && *((_QWORD *)j + 17) && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      for ( k = gpGraphicsDeviceList; k; k = (wchar_t *)*((_QWORD *)k + 16) )
      {
        if ( *((_QWORD *)k + 18) == *((_QWORD *)j + 18) )
          break;
      }
      if ( k == j )
      {
        DrvDxgkLogCodePointPacket(90, 0, 0, 0);
        v11 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v48, 1u, 1);
        v12 = v11;
        if ( v11 < 0 )
          WdLogSingleEntry2(2LL, j, v11);
        DrvDxgkLogCodePointPacket(91, v12, 0, 0);
      }
    }
  }
  WdLogSingleEntry0(5LL);
}
