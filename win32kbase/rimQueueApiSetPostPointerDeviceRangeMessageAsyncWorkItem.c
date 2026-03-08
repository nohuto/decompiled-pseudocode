/*
 * XREFs of rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C01BC4DC
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C01B31F4 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(void *a1, __int64 a2, int a3)
{
  _QWORD *v4; // rax
  char v5; // dl
  int v6; // [rsp+28h] [rbp-50h]

  v4 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, a3, 7);
  if ( v4 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v4);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v5 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        48LL,
        2u,
        v6,
        0x30u,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
  }
}
