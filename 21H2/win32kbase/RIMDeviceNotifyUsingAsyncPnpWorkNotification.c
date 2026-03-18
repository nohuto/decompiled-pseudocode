/*
 * XREFs of RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8
 * Callers:
 *     RIMDeviceNotify @ 0x1C01A0D30 (RIMDeviceNotify.c)
 * Callees:
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x1C01A12D8 (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01AA8A8 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  bool v7; // r11
  char v8; // r11
  int v9; // edx
  __int64 v10; // r10
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r8
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF

  CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v16);
  v6 = *(_QWORD *)(a2 + 336);
  if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    LOBYTE(v9) = v8;
    WPP_RECORDER_AND_TRACE_SF_Sd(*(_QWORD *)(v10 + 24), v9, v11, (_DWORD)gRimLog);
  }
  v13 = RIMQueueDeviceNotifyAsyncWorkItem((struct RawInputManagerObject *)v6);
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      28,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v13);
  CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v16, v12, v14);
  return v13;
}
