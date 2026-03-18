/*
 * XREFs of VideoPortCallout @ 0x1C00D4DF0
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C00D4DB0 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CreateKernelEvent @ 0x1C005D9C0 (CreateKernelEvent.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C00D3E20 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     CSTRemove @ 0x1C0148F70 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  struct tagTHREADINFO **v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  LARGE_INTEGER *v19; // rbx
  unsigned int v20; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct tagKERNELHANDLETABLEENTRY *v24; // rax
  __int64 v25; // rcx
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  LARGE_INTEGER *v29; // rbx
  struct tagTHREADINFO **v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  struct tagKERNELHANDLETABLEENTRY *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h]
  PVOID v47[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  int ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  int v52; // [rsp+98h] [rbp-70h]
  GUID v53; // [rsp+9Ch] [rbp-6Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+B0h] [rbp-58h] BYREF
  int *v55; // [rsp+D0h] [rbp-38h]
  __int64 v56; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+E0h] [rbp-28h] BYREF
  int *v58; // [rsp+100h] [rbp-8h]
  __int64 v59; // [rsp+108h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+110h] [rbp+8h] BYREF
  int *v61; // [rsp+130h] [rbp+28h]
  __int64 v62; // [rsp+138h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+140h] [rbp+38h] BYREF
  int *v64; // [rsp+160h] [rbp+58h]
  __int64 v65; // [rsp+168h] [rbp+60h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+170h] [rbp+68h] BYREF
  int *v67; // [rsp+190h] [rbp+88h]
  __int64 v68; // [rsp+198h] [rbp+90h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1A0h] [rbp+98h] BYREF
  int *v70; // [rsp+1C0h] [rbp+B8h]
  __int64 v71; // [rsp+1C8h] [rbp+C0h]

  v45 = a1;
  v44[1] = 0;
  Object = (PVOID)CreateKernelEvent(SynchronizationEvent, 0);
  if ( Object )
  {
    if ( *(_BYTE *)(v45 + 31) && (!gbVideoInitialized || !CsrApiPort) )
    {
      v47[0] = gpevtVideoInitialized;
      v47[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, v47, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3, v2, v4);
        else
          CurrentThreadWin32Thread = 0LL;
        v48 = CurrentThreadWin32Thread;
        ActivityId_4 = 1;
        if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v48 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v56 = 4LL;
            v44[0] = ActivityId_4 == 1;
            v55 = v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &ActivityId_8,
              0LL,
              3u,
              &v54);
          }
        }
        v6 = 0x200000010000000LL;
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v7 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (W32kEtwEnabledKeyword & v6) != 0
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (v6 & qword_1C028DB20) != 0
          && (v6 & qword_1C028DB28) == qword_1C028DB28 )
        {
          v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v7, v6);
          if ( v19 )
            v19[1] = KeQueryPerformanceCounter(0LL);
        }
        v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v8 )
        {
          v9 = *v8;
          if ( IsThreadCrossSessionAttached() )
            v9 = 0LL;
          if ( v48 )
          {
            v10 = *(unsigned int *)(v48 + 24);
            if ( *(_DWORD *)(v48 + 48) || (int)v10 > 0 )
            {
              *(_DWORD *)(v48 + 44) = 1;
              *(GUID *)(v48 + 28) = ActivityId_8;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v59 = 4LL;
                  v44[0] = ActivityId_4 == 1;
                  v58 = v44;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &ActivityId_8,
                    0LL,
                    3u,
                    &v57);
                  v20 = dword_1C028EE70;
                }
                if ( v20 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v62 = 4LL;
                  v44[0] = ActivityId_4 == 1;
                  v61 = v44;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &ActivityId_8,
                    0LL,
                    3u,
                    &v60);
                }
              }
            }
          }
          gptiCurrent = v9;
          if ( v9 )
          {
            *((_DWORD *)v9 + 377) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
            if ( CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v24 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  v25 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  gpSharedUserCritDeferredUnlockListHead = v24;
                  if ( !*(_DWORD *)(v25 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v22, v23);
                    v25 = *v26;
                  }
                  HMUnlockObject(v25);
                }
              }
            }
          }
        }
        else
        {
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v48);
          gptiCurrent = 0LL;
        }
        v11 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v45, &v44[1]);
        UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
        if ( v11 < 0 )
        {
          if ( v44[1] )
          {
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              v27 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
            else
              v27 = 0LL;
            v51 = v27;
            v52 = 1;
            if ( v27 && (*(int *)(v27 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
            {
              EtwActivityIdControl(3u, &v53);
              if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v65 = 4LL;
                v44[0] = v52 == 1;
                v64 = v44;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD79,
                  &v53,
                  0LL,
                  3u,
                  &v63);
              }
            }
            if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
              || (v28 = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
              && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
              || (v18 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x200000010000000LL) != 0
              && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
            {
              v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v28, v18);
              if ( v29 )
                v29[1] = KeQueryPerformanceCounter(0LL);
            }
            v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            EtwTraceAcquiredExclusiveUserCrit();
            if ( v30 )
            {
              v31 = *v30;
              if ( IsThreadCrossSessionAttached() )
                v31 = 0LL;
              if ( v51 )
              {
                v32 = *(unsigned int *)(v51 + 24);
                if ( *(_DWORD *)(v51 + 48) || (int)v32 > 0 )
                {
                  *(_DWORD *)(v51 + 44) = 1;
                  *(GUID *)(v51 + 28) = v53;
                  if ( (unsigned int)dword_1C028EE70 > 6 )
                  {
                    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v68 = 4LL;
                      v44[0] = v52 == 1;
                      v67 = v44;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD22,
                        &v53,
                        0LL,
                        3u,
                        &v66);
                      v33 = dword_1C028EE70;
                    }
                    if ( v33 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v71 = 4LL;
                      v44[0] = v52 == 1;
                      v70 = v44;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD4F,
                        &v53,
                        0LL,
                        3u,
                        &v69);
                    }
                  }
                }
              }
              gptiCurrent = v31;
              if ( v31 )
              {
                *((_DWORD *)v31 + 377) = 1;
                v34 = PsGetCurrentProcessWin32Process(v32);
                if ( v34 )
                {
                  if ( (*(_DWORD *)(v34 + 12) & 0x8000) != 0
                    && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v39 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v37 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      v38 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      gpSharedUserCritDeferredUnlockListHead = v37;
                      if ( !*(_DWORD *)(v38 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v35, v36);
                        v38 = *v39;
                      }
                      HMUnlockObject(v38);
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
            CSTRemove(4LL, &v45);
            UserSessionSwitchLeaveCrit(v41, v40, v42, v43);
          }
        }
        else
        {
          KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
          v11 = *(_DWORD *)(a1 + 24);
        }
      }
      else
      {
        v11 = -1073741816;
      }
    }
    else
    {
      v11 = -2143420409;
    }
    if ( Object )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Object);
    *(_DWORD *)(a1 + 24) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = -1073741801;
  }
}
