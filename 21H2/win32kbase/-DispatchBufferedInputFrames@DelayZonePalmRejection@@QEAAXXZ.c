/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01ACBAC
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A9710 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AA2E0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01AD1A4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD228 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018DA80 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(DelayZonePalmRejection *this)
{
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v3; // rdi
  int v4; // eax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *((_DWORD *)this + 11);
      v5 = *((_DWORD *)this + 10);
      WPP_RECORDER_SF_Dd(
        (__int64)gBaseLog,
        4u,
        8u,
        0xCu,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v5,
        v6);
    }
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    v3 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v3 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, Next);
    if ( v3 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(gpTouchProcessor, v3);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v4 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v4 = 0;
    }
    *((_DWORD *)this + 1) = v4;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlock((__int64 *)this + 3);
  }
}
