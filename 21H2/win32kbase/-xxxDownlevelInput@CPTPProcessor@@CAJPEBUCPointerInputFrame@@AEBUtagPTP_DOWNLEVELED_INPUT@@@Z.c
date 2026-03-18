/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0794 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     InternalMapVirtualKeyEx @ 0x1C003F3A0 (InternalMapVirtualKeyEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01DDC28 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C020BE4C (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // r12
  DWORD LowPart; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // cf
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  LARGE_INTEGER *v21; // rdi
  struct tagTHREADINFO **v22; // rdi
  struct tagTHREADINFO *v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct tagKERNELHANDLETABLEENTRY *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rdi
  BOOL v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 ActivityId; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE ActivityId_8[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+70h] [rbp-90h] BYREF
  BOOL *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+A0h] [rbp-60h] BYREF
  BOOL *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+D0h] [rbp-30h] BYREF
  BOOL *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 145);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2);
  v11 = *(unsigned int *)a2;
  if ( (int)v11 < 0 )
    goto LABEL_57;
  if ( (int)v11 > 1 )
  {
    if ( (_DWORD)v11 == 2 )
    {
      v12 = *((_QWORD *)gptiCurrent + 55);
      v13 = *((_DWORD *)a2 + 1) != 0;
      ActivityId = 0LL;
      *(_QWORD *)ActivityId_8 = v5;
      *(_DWORD *)((char *)&ActivityId + 2) = (unsigned __int16)(v13 ? 16546 : -16222);
      *(_OWORD *)&ActivityId_8[8] = 0LL;
      if ( v12 )
        LOBYTE(ActivityId) = InternalMapVirtualKeyEx(0xA2u, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
      xxxProcessKeyEvent((unsigned __int8 *)&ActivityId, 0LL, 0, 0, 0LL, 0LL);
      return v2;
    }
LABEL_57:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9);
    return (unsigned int)-1073741811;
  }
  v37 = 0LL;
  v36 = 0LL;
  WORD1(v36) = 128;
  v14 = 1024;
  if ( (_DWORD)v11 )
    v14 = 2048;
  WORD2(v36) = v14;
  WORD3(v36) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit(v11, v8, v9, v10);
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v36, v6, LowPart, 1000);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v16, v15, v17);
    ActivityId = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    ActivityId = 0LL;
  }
  *(_DWORD *)ActivityId_8 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(ActivityId + 48)) )
  {
    EtwActivityIdControl(3u, (LPGUID)&ActivityId_8[4]);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v40 = 4LL;
      v33 = *(_DWORD *)ActivityId_8 == 1;
      v39 = &v33;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        (const GUID *)&ActivityId_8[4],
        0LL,
        3u,
        &v38);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v19 = W32kEtwEnabledKeyword, v20 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v20 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v19, v20);
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
  }
  v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v22 )
  {
    v23 = *v22;
    if ( IsThreadCrossSessionAttached() )
      v23 = 0LL;
    if ( ActivityId )
    {
      v24 = *(unsigned int *)(ActivityId + 24);
      if ( *(_DWORD *)(ActivityId + 48) || (int)v24 > 0 )
      {
        *(_DWORD *)(ActivityId + 44) = 1;
        *(_OWORD *)(ActivityId + 28) = *(_OWORD *)&ActivityId_8[4];
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v43 = 4LL;
            v33 = *(_DWORD *)ActivityId_8 == 1;
            v42 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              (const GUID *)&ActivityId_8[4],
              0LL,
              3u,
              &v41);
            v25 = dword_1C028EE70;
          }
          if ( v25 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v46 = 4LL;
            v33 = *(_DWORD *)ActivityId_8 == 1;
            v45 = &v33;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              (const GUID *)&ActivityId_8[4],
              0LL,
              3u,
              &v44);
          }
        }
      }
    }
    gptiCurrent = v23;
    if ( v23 )
    {
      *((_DWORD *)v23 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v31 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v29 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v30 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v29;
            if ( !*(_DWORD *)(v30 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v27, v28);
              v30 = *v31;
            }
            HMUnlockObject(v30);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&ActivityId);
    gptiCurrent = 0LL;
  }
  return v2;
}
