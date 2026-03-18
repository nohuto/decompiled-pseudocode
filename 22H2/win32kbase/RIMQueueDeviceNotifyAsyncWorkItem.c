/*
 * XREFs of RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A20B0
 * Callers:
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1F10 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E288 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueDeviceNotifyAsyncWorkItem(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  char v6; // dl
  char v7; // dl
  int v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v5 = RIMAllocateAsyncPnpWorkItem(a1, (_QWORD *)a2, 0LL, 0LL, *(unsigned __int8 *)(a2 + 120), 0LL, a3, 0LL, 0, 1);
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
      v10 = a1[9];
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        24LL,
        4u,
        v9,
        0x18u,
        (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
    }
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x19u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v10);
  }
  return v3;
}
