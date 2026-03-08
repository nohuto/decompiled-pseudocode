/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C02157D0
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00F3FC0 (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0215F38 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216000 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C01F0A80 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  int v6; // edx
  struct CPointerInputFrame *Next; // rdi
  struct CPointerInputFrame *i; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax

  v5 = 1LL;
  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v5) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 12;
      LOBYTE(v6) = v5;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        12,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        *((_DWORD *)this + 10),
        *((_DWORD *)this + 11));
    }
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    for ( i = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
          Next;
          Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v9 + 3424), Next) )
    {
      if ( Next == i )
        break;
      v9 = SGDGetUserSessionState(v5, a2, a3, a4);
    }
    if ( i )
    {
      v10 = SGDGetUserSessionState(v5, a2, a3, a4);
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(*(CTouchProcessor **)(v10 + 3424), i);
    }
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v11 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v11 = 0;
    }
    *((_DWORD *)this + 1) = v11;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlockWorker((__int64 *)this + 3);
  }
}
