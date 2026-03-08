/*
 * XREFs of RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01D032C
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0037CCC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C019DFF8 (RIMVirtCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01D1498 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  unsigned int v4; // edi
  char v5; // dl
  const UNICODE_STRING *i; // rax
  unsigned int Data1; // edx
  __int64 v8; // r8
  int Dev; // eax
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-60h]
  int v13; // [rsp+28h] [rbp-58h]
  int v14; // [rsp+38h] [rbp-48h]
  struct _GUID v15; // [rsp+68h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 32) > 2u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1033);
  v4 = -1073741823;
  v15 = GUID_DEVICE_INTERFACE_ARRIVAL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      40,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      *(_QWORD *)(a1 + 48));
  InputTraceLogging::RIM::RimDeviceClassNotification(&v15, (const struct _UNICODE_STRING *)(a1 + 40));
  for ( i = *(const UNICODE_STRING **)(v1 + 424); ; i = *(const UNICODE_STRING **)(*(_QWORD *)&v15.Data1 + 40LL) )
  {
    *(_QWORD *)&v15.Data1 = i;
    if ( !i )
    {
      Dev = RIMVirtCreateDev(
              (char *)v1,
              *(_DWORD *)(v2 + 16),
              a1 + 40,
              *(_DWORD *)(v2 + 20),
              v2,
              (struct _UNICODE_STRING **)&v15);
      v4 = Dev;
      if ( Dev >= 0 )
      {
        Data1 = v15.Data1;
        *(_DWORD *)(*(_QWORD *)&v15.Data1 + 188LL) |= 1u;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          *(_DWORD *)(*(_QWORD *)&v15.Data1 + 184LL) |= 1u;
          v4 = RIMDoOnPnpNotification(v1, *(__int64 *)&v15.Data1, v8, v10);
        }
      }
      goto LABEL_26;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), i + 13, 0) )
      break;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(Data1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(Data1) = 0;
  }
  if ( (_BYTE)Data1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_Sdq(
      WPP_GLOBAL_Control->AttachedDevice,
      Data1,
      v8,
      *(unsigned __int8 *)(*(_QWORD *)&v15.Data1 + 48LL),
      v12,
      v13,
      41,
      v14,
      *(_QWORD *)(a1 + 48),
      *(_BYTE *)(*(_QWORD *)&v15.Data1 + 48LL),
      *(_QWORD *)(*(_QWORD *)&v15.Data1 + 248LL));
  }
  *(_DWORD *)(*(_QWORD *)&v15.Data1 + 188LL) |= 1u;
LABEL_26:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(Data1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(Data1) = 0;
  }
  if ( (_BYTE)Data1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      Data1,
      v8,
      (_DWORD)gRimLog,
      4,
      1,
      43,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v4);
  }
  return v4;
}
