/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E5DFC
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00E5804 (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E6564 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E662C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C01C1B90 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  struct CPointerInputFrame *Next; // rdi
  struct CPointerInputFrame *i; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax

  v5 = 1LL;
  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v5) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        a3,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        4u,
        0xCu,
        (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
        *((_DWORD *)this + 10),
        *((_DWORD *)this + 11));
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    for ( i = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
          Next;
          Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v8 + 3424), Next) )
    {
      if ( Next == i )
        break;
      v8 = SGDGetUserSessionState(v5, a2, a3, a4);
    }
    if ( i )
    {
      v9 = SGDGetUserSessionState(v5, a2, a3, a4);
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v9 + 3424), i);
    }
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v10 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v10 = 0;
    }
    *((_DWORD *)this + 1) = v10;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlockWorker((__int64 *)this + 3);
  }
}
