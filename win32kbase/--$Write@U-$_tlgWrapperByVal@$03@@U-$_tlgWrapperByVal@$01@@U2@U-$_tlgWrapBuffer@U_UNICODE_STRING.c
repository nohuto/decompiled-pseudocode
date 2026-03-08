/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C020C964
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C020E7E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int16 **a8,
        __int64 a9)
{
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  __int64 v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  _DWORD *v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  _DWORD v21[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]

  v22 = a9;
  v23 = 8LL;
  v18 = v21;
  v19 = 2LL;
  v9 = **a8;
  v20 = *((_QWORD *)*a8 + 1);
  v16 = a7;
  v14 = a6;
  v12 = a5;
  v21[0] = v9;
  v21[1] = 0;
  v17 = 2LL;
  v15 = 2LL;
  v13 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, a2, 0LL, 0LL, 8u, &v11);
}
