/*
 * XREFs of IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C0223078
 * Callers:
 *     ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x1C0222F2C (-BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ.c)
 *     ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0222FE4 (-ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0157A30 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C0218FEC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220F10 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220FC4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(struct CONTAINER_ID *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  _QWORD v7[2]; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT *v8; // [rsp+60h] [rbp-28h]

  CIVGenericSerializer::CIVGenericSerializer(v7);
  v3 = (int)v8;
  if ( v8 )
  {
    CContentRects::GetContentRects(4u, v8, (unsigned int *)&v8[4]);
    if ( *(_WORD *)a1 || *((_WORD *)a1 + 1) )
      v4 = ivrIVSend((const struct CIVSerializer *)v7, 3u, a1);
    else
      v4 = ivrIVBroadcast((const struct CIVSerializer *)v7, 3u, a1);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          11,
          (__int64)&WPP_4694d7497e213903646c41283b9c142c_Traceguids,
          v4);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        10,
        (__int64)&WPP_4694d7497e213903646c41283b9c142c_Traceguids);
    }
  }
  v7[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v7);
}
