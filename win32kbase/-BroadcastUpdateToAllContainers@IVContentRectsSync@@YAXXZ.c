/*
 * XREFs of ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x1C0222F2C
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0157C48 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C0223078 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVContentRectsSync::BroadcastUpdateToAllContainers(
        IVContentRectsSync *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  int v5; // r8d
  int v6; // [rsp+50h] [rbp+8h] BYREF

  if ( isRootPartition((__int64)this, a2, a3, a4) && CIVChannel::ContainerConnected(3u) )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_4694d7497e213903646c41283b9c142c_Traceguids);
    }
    v6 = 0;
    IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate((struct CONTAINER_ID *)&v6);
  }
}
