/*
 * XREFs of RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0036884
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C00364E8 (RIMAllocateAsyncPnpWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C00376B0 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01BBF20 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueDeviceClassNotifyAsyncWorkItem(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v10; // [rsp+28h] [rbp-60h]

  v3 = 0;
  v6 = RIMAllocateAsyncPnpWorkItem(
         (void *)a1,
         0LL,
         0LL,
         0LL,
         a2,
         (_OWORD *)(a3 + 20),
         (_OWORD *)(a3 + 4),
         *(PCUNICODE_STRING *)(a3 + 40),
         0,
         0);
  if ( v6 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem(a1, v6);
  }
  else
  {
    v3 = -1073741801;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        13,
        2,
        v10,
        13,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
        *(_QWORD *)(a1 + 72),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        *(_DWORD *)(a1 + 84),
        *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL),
        23);
    }
  }
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (_DWORD)gRimLog,
      4,
      1,
      14,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v3);
  }
  return v3;
}
