/*
 * XREFs of rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E288 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall rimQueueRimDevChangeAsyncWorkItem(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // [rsp+28h] [rbp-50h]

  v3 = a3;
  v6 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, a3, 5);
  if ( v6 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v6);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (LOBYTE(v7) = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        17,
        2,
        v9,
        17,
        (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
        a1[9],
        a1[4],
        a1[5],
        v3,
        *(_QWORD *)(a2 + 216),
        23);
    }
  }
}
