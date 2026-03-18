/*
 * XREFs of RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01AAA30
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00459F4 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01A1430 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotifyAsyncWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  int Dev; // edi
  const UNICODE_STRING *i; // rax
  unsigned int Data1; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // dl
  int v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+28h] [rbp-70h]
  struct _GUID v15; // [rsp+60h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 32) > 2u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  Dev = -1073741823;
  v15 = GUID_DEVICE_INTERFACE_ARRIVAL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      37,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      *(_QWORD *)(a1 + 48));
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(&v15, (const struct _UNICODE_STRING *)(a1 + 40));
  for ( i = *(const UNICODE_STRING **)(v4 + 424); ; i = *(const UNICODE_STRING **)(*(_QWORD *)&v15.Data1 + 40LL) )
  {
    *(_QWORD *)&v15.Data1 = i;
    if ( !i )
    {
      Dev = RIMVirtCreateDev(
              (CDeviceIdentity **)v4,
              *(unsigned int *)(v5 + 16),
              a1 + 40,
              *(unsigned int *)(v5 + 20),
              v5,
              (struct _UNICODE_STRING **)&v15);
      if ( Dev >= 0 )
      {
        Data1 = v15.Data1;
        *(_DWORD *)(*(_QWORD *)&v15.Data1 + 188LL) |= 1u;
        if ( !*(_DWORD *)(v5 + 20) )
        {
          *(_DWORD *)(*(_QWORD *)&v15.Data1 + 184LL) |= 1u;
          Dev = RIMDoOnPnpNotification(v4, *(__int64 *)&v15.Data1, v9, v10);
        }
      }
      goto LABEL_18;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), i + 13, 0) )
      break;
  }
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_Sdq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      *(unsigned __int8 *)(*(_QWORD *)&v15.Data1 + 48LL),
      v13,
      v14,
      0x26u,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      *(const wchar_t **)(a1 + 48));
  *(_DWORD *)(*(_QWORD *)&v15.Data1 + 188LL) |= 1u;
LABEL_18:
  LOBYTE(Data1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)Data1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      Data1,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      40,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      Dev);
  }
  return (unsigned int)Dev;
}
