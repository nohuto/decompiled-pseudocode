/*
 * XREFs of RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01D0004
 * Callers:
 *     RIMDeviceNotify @ 0x1C01C7910 (RIMDeviceNotify.c)
 * Callees:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01D01A4 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x1C01D1340 (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r11
  char v6; // r11
  int v7; // edx
  __int64 v8; // r10
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r8d
  _BYTE v14[208]; // [rsp+60h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
  v4 = *(_QWORD *)(a2 + 336);
  if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 799);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_Sd(*(_QWORD *)(v8 + 24), v7, v9, (_DWORD)gRimLog);
  }
  v11 = RIMQueueDeviceNotifyAsyncWorkItem(v4, *(_QWORD *)(a2 + 32), a1 + 4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v12,
      (_DWORD)gRimLog,
      4,
      1,
      29,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v11);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
  return v11;
}
