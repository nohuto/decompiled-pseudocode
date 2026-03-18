/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B9CD0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MouseMove @ 0x1C01E8110 (MouseMove.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO **v15; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct tagKERNELHANDLETABLEENTRY *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rbx
  void (__fastcall *v25)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  BOOL v27; // [rsp+38h] [rbp-79h] BYREF
  __int64 v28; // [rsp+40h] [rbp-71h] BYREF
  int v29; // [rsp+48h] [rbp-69h]
  GUID ActivityId; // [rsp+4Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+60h] [rbp-51h] BYREF
  BOOL *v32; // [rsp+80h] [rbp-31h]
  __int64 v33; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-21h] BYREF
  BOOL *v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+B8h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp+Fh] BYREF
  BOOL *v38; // [rsp+E0h] [rbp+2Fh]
  __int64 v39; // [rsp+E8h] [rbp+37h]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    v4 = (char)a1;
    LOWORD(a1) = BYTE1(a1);
    gMKDeltaX = v4;
    gMKDeltaY = (char)a1;
    UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
    v5 = gMKDeltaX;
    v6 = gMKDeltaY;
    if ( (dword_1C0295A24 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v7 = 4 * (unsigned __int8)byte_1C0295962;
      v5 = v7 * gMKDeltaX;
      v6 = v7 * gMKDeltaY;
    }
    MouseMove(v5, v6);
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
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
        v27 = v29 == 1;
        v32 = &v27;
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
      || (v12 = W32kEtwEnabledKeyword, v13 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v13 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v12, v13);
      if ( v14 )
        v14[1] = KeQueryPerformanceCounter(0LL);
    }
    v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v15 )
    {
      v16 = *v15;
      if ( IsThreadCrossSessionAttached() )
        v16 = 0LL;
      if ( v28 )
      {
        v17 = *(unsigned int *)(v28 + 24);
        if ( *(_DWORD *)(v28 + 48) || (int)v17 > 0 )
        {
          *(_DWORD *)(v28 + 44) = 1;
          *(GUID *)(v28 + 28) = ActivityId;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v36 = 4LL;
              v27 = v29 == 1;
              v35 = &v27;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v34);
              v18 = dword_1C028EE70;
            }
            if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v39 = 4LL;
              v27 = v29 == 1;
              v38 = &v27;
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
      gptiCurrent = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v24 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v22 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              v23 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              gpSharedUserCritDeferredUnlockListHead = v22;
              if ( !*(_DWORD *)(v23 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v20, v21);
                v23 = *v24;
              }
              HMUnlockObject(v23);
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
    if ( !HIDWORD(xmmword_1C0295A4C) || (gdwPUDFlags & 0x2000) != 0 )
    {
      v25 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v25 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v25);
    }
  }
  return 0LL;
}
