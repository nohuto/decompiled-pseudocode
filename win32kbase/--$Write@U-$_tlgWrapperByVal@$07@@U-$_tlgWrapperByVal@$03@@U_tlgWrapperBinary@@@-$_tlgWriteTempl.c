/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C023B410
 * Callers:
 *     ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C00F5B60 (-OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C00F5C86 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C00F5DF0 (-OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C023B870 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C023B9C4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  _DWORD *v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  _DWORD v16[2]; // [rsp+88h] [rbp+27h] BYREF

  v13 = v16;
  v14 = 2LL;
  v16[1] = 0;
  v15 = *a7;
  v16[0] = *((unsigned __int16 *)a7 + 4);
  v11 = a6;
  v9 = a5;
  v12 = 4LL;
  v10 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C92F8, a2, 0LL, 0LL, 6u, &v8);
}
