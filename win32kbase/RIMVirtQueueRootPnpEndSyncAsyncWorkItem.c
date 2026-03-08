/*
 * XREFs of RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01D11C4
 * Callers:
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F800 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMVirtQueueRootPnpEndSyncAsyncWorkItem(void *a1, const UNICODE_STRING *a2)
{
  char v2; // di
  _QWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  char v7; // dl
  int v8; // [rsp+28h] [rbp-60h]

  v2 = 0;
  v4 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, 0LL, 0LL, 0, 0LL, 0LL, a2, 0, 4);
  if ( v4 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v4);
  }
  else
  {
    v2 = 23;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        52LL,
        4u,
        v8,
        0x34u,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      53,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v2);
  }
}
