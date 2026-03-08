/*
 * XREFs of rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01DA354
 * Callers:
 *     rimProcessHidInput @ 0x1C01D2DF8 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01D517C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall rimQueueApiSetHidRawInputAsyncWorkItem(void *a1, __int64 a2)
{
  _QWORD *v3; // rax
  char v4; // dl
  int v5; // [rsp+28h] [rbp-50h]

  v3 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 6);
  if ( v3 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v3);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v4 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        70LL,
        2u,
        v5,
        0x46u,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
}
