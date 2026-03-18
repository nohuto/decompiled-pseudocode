/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C00050DC
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0005050 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C00052B0 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
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

__int64 __fastcall CKeyboardProcessor::ProcessInput(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO **v9; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagKERNELHANDLETABLEENTRY *v19; // rbx
  unsigned int v20; // ebx
  LARGE_INTEGER *v22; // rbx
  struct tagKERNELHANDLETABLEENTRY *v23; // rax
  __int64 v24; // rcx
  ULONG v25; // [rsp+20h] [rbp-B1h]
  BOOL v26; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v27; // [rsp+38h] [rbp-99h] BYREF
  int v28; // [rsp+40h] [rbp-91h]
  GUID ActivityId; // [rsp+44h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+58h] [rbp-79h] BYREF
  BOOL *v31; // [rsp+78h] [rbp-59h]
  __int64 v32; // [rsp+80h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-49h] BYREF
  BOOL *v34; // [rsp+A8h] [rbp-29h]
  __int64 v35; // [rsp+B0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+B8h] [rbp-19h] BYREF
  BOOL *v37; // [rsp+D8h] [rbp+7h]
  __int64 v38; // [rsp+E0h] [rbp+Fh]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  v27 = CurrentThreadWin32Thread;
  v28 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v27 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        v32 = 4LL;
        v26 = v28 == 1;
        v31 = &v26;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, (int)&ActivityId, 0, 3u, &v30);
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
    v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v22 )
      v22[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v10 = *v9;
    if ( (unsigned int)IsThreadCrossSessionAttached() )
      v10 = 0LL;
    if ( v27 )
    {
      v12 = (struct tagTHREADINFO *)*(unsigned int *)(v27 + 24);
      if ( *(_DWORD *)(v27 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v27 + 44) = 1;
        *(GUID *)(v27 + 28) = ActivityId;
        v13 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v35 = 4LL;
            v26 = v28 == 1;
            v34 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD22,
              (int)&ActivityId,
              0,
              3u,
              &v33);
            v13 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v13 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
          {
            v38 = 4LL;
            v26 = v28 == 1;
            v37 = &v26;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C028EE70,
              (int)&dword_1C025AD4F,
              (int)&ActivityId,
              0,
              3u,
              &v36);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13, v14);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v12 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v19 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v23 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v24 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v23;
              if ( !*(_DWORD *)(v24 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v16, v17);
                v24 = *(_QWORD *)v19;
              }
              HMUnlockObject(v24, v16, v17, v18);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
    gptiCurrent = 0LL;
  }
  LOBYTE(v25) = a5;
  v20 = CKeyboardProcessor::ProcessInputNoLock(v12, a2, a3, a4, v25);
  UserSessionSwitchLeaveCrit();
  return v20;
}
