/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0036400 (RIMDeviceClassNotify.c)
 * Callees:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0036884 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0037CCC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  char v9; // si
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  _BYTE v16[208]; // [rsp+60h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  if ( (unsigned int)v5 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 405LL);
  v7 = *(_QWORD **)(32 * (v5 + 4) + v6);
  v8 = *(_QWORD *)(a1 + 20) - *v7;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 28) - v7[1];
  if ( v8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 407LL);
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v7,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      15,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL));
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40));
  v12 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v12 )
  {
    Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        (_DWORD)gRimLog,
        4,
        1,
        16,
        (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids);
    }
    v9 = RIMQueueDeviceClassNotifyAsyncWorkItem(v6, v5, a1);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      19,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v9);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  return 0LL;
}
