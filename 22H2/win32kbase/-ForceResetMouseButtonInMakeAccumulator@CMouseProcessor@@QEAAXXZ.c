/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00BC334
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C00BC310 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  bool v2; // dl

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      18,
      (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
  *((_DWORD *)this + 893) = 0;
}
