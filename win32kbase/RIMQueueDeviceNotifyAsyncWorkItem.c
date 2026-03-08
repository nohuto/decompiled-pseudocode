/*
 * XREFs of RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01D01A4
 * Callers:
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01D0004 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueDeviceNotifyAsyncWorkItem(void *a1, __int64 a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  int v6; // edx
  int v7; // r8d
  char v8; // dl
  int v10; // [rsp+28h] [rbp-60h]

  v3 = 0;
  v5 = RIMAllocateAsyncPnpWorkItem(a1, (_QWORD *)a2, 0LL, 0LL, *(unsigned __int8 *)(a2 + 120), 0LL, a3, 0LL, 0, 1);
  if ( v5 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, (__int64)v5);
  }
  else
  {
    v3 = -1073741801;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        26LL,
        4u,
        v10,
        0x1Au,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      27,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v3);
  }
  return v3;
}
