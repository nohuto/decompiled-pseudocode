/*
 * XREFs of ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00F3FC0
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211380 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C02157D0 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(DelayZonePalmRejection *this)
{
  bool v2; // dl

  if ( *((_BYTE *)this + 9) )
  {
    v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        11,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
    *((_BYTE *)this + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(this);
  }
}
