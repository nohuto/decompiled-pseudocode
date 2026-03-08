/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x1C01D1990
 * Callers:
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D2214 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01FF3E4 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0201ED0 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-99h] BYREF
  __int64 v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  __int64 v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  __int64 v18; // [rsp+70h] [rbp-59h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  __int64 v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  __int64 v24; // [rsp+A0h] [rbp-29h]
  __int64 v25; // [rsp+A8h] [rbp-21h]
  __int64 v26; // [rsp+B0h] [rbp-19h]
  __int64 v27; // [rsp+B8h] [rbp-11h]
  __int64 v28; // [rsp+C0h] [rbp-9h]
  __int64 v29; // [rsp+C8h] [rbp-1h]

  v28 = a12;
  v26 = a11;
  v24 = a10;
  v22 = a9;
  v20 = a8;
  v18 = a7;
  v16 = a6;
  v14 = a5;
  v29 = 8LL;
  v27 = 8LL;
  v25 = 8LL;
  v23 = 8LL;
  v21 = 8LL;
  v19 = 8LL;
  v17 = 8LL;
  v15 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v13);
}
