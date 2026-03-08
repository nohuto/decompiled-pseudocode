/*
 * XREFs of RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01D0EAC
 * Callers:
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01D07BC (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMVirtQueueDeviceClassNotifyAsyncWorkItem(void *a1, int a2, char *a3, const UNICODE_STRING *a4)
{
  unsigned int v4; // ebx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // r8d
  char v10; // dl
  int v12; // [rsp+28h] [rbp-60h]

  v4 = 0;
  v7 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, (__int64)a3, (__int64)a4, a2, 0LL, 0LL, a4, 0, 2);
  if ( v7 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v7);
  }
  else
  {
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a3);
    v4 = -1073741801;
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        34LL,
        4u,
        v12,
        0x22u,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
  }
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      35,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v4);
  }
  return v4;
}
