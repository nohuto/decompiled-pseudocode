/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E5A70
 * Callers:
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00E8E0E (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E6194 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C01C4D10 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // cl
  int v6; // edx
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v8; // rdi
  int v9; // eax

  v5 = 1;
  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
    v8 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v8 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
               (struct _LIST_ENTRY *)gpTouchProcessor,
               Next);
    if ( v8 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext((struct _LIST_ENTRY *)gpTouchProcessor, v8);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v9 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v9 = 0;
    }
    *((_DWORD *)this + 1) = v9;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlockWorker((__int64 *)this + 3, a2, a3, a4);
  }
}
