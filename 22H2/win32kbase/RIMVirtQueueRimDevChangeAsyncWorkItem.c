/*
 * XREFs of RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F50
 * Callers:
 *     ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDFF0 (-ivHandlePnpOtherPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E288 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMVirtQueueRimDevChangeAsyncWorkItem(_QWORD *a1, const UNICODE_STRING *a2, int a3)
{
  int v3; // edi
  __int64 v5; // rax
  char v6; // dl
  char v7; // dl
  int v8; // [rsp+28h] [rbp-60h]
  __int64 v9; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v5 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, 0LL, 0LL, 0, 0LL, 0LL, a2, a3, 3);
  if ( v5 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v5);
  }
  else
  {
    v3 = -1073741801;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = a1[9];
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        42LL,
        4u,
        v8,
        0x2Au,
        (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
    }
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x2Bu,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v9);
  }
}
