/*
 * XREFs of ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x1C01F1D44
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01F1E90 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVContentRectsSync::BroadcastUpdateToAllContainers(IVContentRectsSync *this)
{
  int v1; // edx
  int v2; // r8d
  int v3; // [rsp+50h] [rbp+8h] BYREF

  if ( isRootPartition() && CIVChannel::ContainerConnected(3u) )
  {
    LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_4694d7497e213903646c41283b9c142c_Traceguids);
    }
    v3 = 0;
    IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate((struct CONTAINER_ID *)&v3);
  }
}
