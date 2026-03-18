/*
 * XREFs of ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00E8E0E
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1D90 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E28C0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E5A70 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
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
