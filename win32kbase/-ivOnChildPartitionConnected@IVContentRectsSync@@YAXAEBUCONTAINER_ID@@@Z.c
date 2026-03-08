/*
 * XREFs of ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0222FE4
 * Callers:
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C02200F0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C0223078 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 */

void __fastcall IVContentRectsSync::ivOnChildPartitionConnected(
        IVContentRectsSync *this,
        const struct CONTAINER_ID *a2)
{
  bool v3; // dl

  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      12,
      (__int64)&WPP_4694d7497e213903646c41283b9c142c_Traceguids);
  IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(this);
}
