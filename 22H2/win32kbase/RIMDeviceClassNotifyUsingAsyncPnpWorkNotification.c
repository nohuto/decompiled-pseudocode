/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C00C3A20 (RIMDeviceClassNotify.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0072890 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00B5ECC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  _QWORD *v6; // rcx
  int v7; // ebp
  char v8; // dl
  int v9; // edx
  int v10; // r8d
  char v11; // dl
  __int64 v13; // [rsp+40h] [rbp-128h]
  _BYTE v14[208]; // [rsp+60h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
  v4 = *(unsigned int *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  if ( (unsigned int)v4 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 407LL);
  v6 = *(_QWORD **)(32 * (v4 + 4) + v5);
  if ( *(_QWORD *)(a1 + 20) != *v6 || *(_QWORD *)(a1 + 28) != v6[1] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 409LL);
  v7 = -1073741823;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0xFu,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(*(_QWORD *)(a1 + 40) + 8LL));
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40));
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        16,
        (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
    }
    v7 = RIMQueueDeviceClassNotifyAsyncWorkItem(v5, v4, a1);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x11u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v13);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
  return 0LL;
}
