/*
 * XREFs of ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C02226E8
 * Callers:
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C02200F0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall IVForegroundSync::ivOnChildPartitionConnected(IVForegroundSync *this, const struct CONTAINER_ID *a2)
{
  bool v2; // dl

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      20,
      (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
}
