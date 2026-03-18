/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C00D1A00
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  struct tagTHREADINFO **v11; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rbx
  LARGE_INTEGER *v19; // rbx
  unsigned int v20; // r8d
  struct tagKERNELHANDLETABLEENTRY *v21; // rax
  __int64 v22; // rcx
  BOOL v23; // [rsp+30h] [rbp-A9h] BYREF
  int InputBuffer; // [rsp+38h] [rbp-A1h] BYREF
  char InputBuffer_4; // [rsp+3Ch] [rbp-9Dh]
  char InputBuffer_5; // [rsp+3Dh] [rbp-9Ch]
  __int16 InputBuffer_6; // [rsp+3Eh] [rbp-9Bh]
  __int64 v28; // [rsp+40h] [rbp-99h] BYREF
  int v29; // [rsp+48h] [rbp-91h]
  GUID ActivityId; // [rsp+4Ch] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+60h] [rbp-79h] BYREF
  BOOL *v32; // [rsp+80h] [rbp-59h]
  __int64 v33; // [rsp+88h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-49h] BYREF
  BOOL *v35; // [rsp+B0h] [rbp-29h]
  __int64 v36; // [rsp+B8h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-19h] BYREF
  BOOL *v38; // [rsp+E0h] [rbp+7h]
  __int64 v39; // [rsp+E8h] [rbp+Fh]

  InputBuffer = gSessionId;
  InputBuffer_4 = a1;
  InputBuffer_5 = a2;
  InputBuffer_6 = (unsigned __int8)a3;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  v6 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  if ( v6 && v6 != 259 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v7);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4, v7);
  else
    CurrentThreadWin32Thread = 0LL;
  v28 = CurrentThreadWin32Thread;
  v29 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v28 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v33 = 4LL;
      v23 = v29 == 1;
      v32 = &v23;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v31);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v9 = W32kEtwEnabledKeyword, v10 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v10 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v9, v10);
    if ( v19 )
      v19[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v11 )
  {
    v12 = *v11;
    if ( IsThreadCrossSessionAttached() )
      v12 = 0LL;
    if ( v28 )
    {
      v13 = *(unsigned int *)(v28 + 24);
      if ( *(_DWORD *)(v28 + 48) || (int)v13 > 0 )
      {
        *(_DWORD *)(v28 + 44) = 1;
        *(GUID *)(v28 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v36 = 4LL;
            v23 = v29 == 1;
            v35 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v34);
            v20 = dword_1C028EE70;
          }
          if ( v20 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v39 = 4LL;
            v23 = v29 == 1;
            v38 = &v23;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v37);
          }
        }
      }
    }
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v21 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v22 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v21;
            if ( !*(_DWORD *)(v22 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v15, v16);
              v22 = *v17;
            }
            HMUnlockObject(v22);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v28);
    gptiCurrent = 0LL;
  }
  return v6;
}
