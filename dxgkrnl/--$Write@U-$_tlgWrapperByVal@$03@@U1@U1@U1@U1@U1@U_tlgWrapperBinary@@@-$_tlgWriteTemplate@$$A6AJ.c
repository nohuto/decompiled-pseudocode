/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1C004F554
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A7C4 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A9BC (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
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
        __int64 *a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-91h] BYREF
  __int64 v13; // [rsp+50h] [rbp-71h]
  __int64 v14; // [rsp+58h] [rbp-69h]
  __int64 v15; // [rsp+60h] [rbp-61h]
  __int64 v16; // [rsp+68h] [rbp-59h]
  __int64 v17; // [rsp+70h] [rbp-51h]
  __int64 v18; // [rsp+78h] [rbp-49h]
  __int64 v19; // [rsp+80h] [rbp-41h]
  __int64 v20; // [rsp+88h] [rbp-39h]
  __int64 v21; // [rsp+90h] [rbp-31h]
  __int64 v22; // [rsp+98h] [rbp-29h]
  __int64 v23; // [rsp+A0h] [rbp-21h]
  __int64 v24; // [rsp+A8h] [rbp-19h]
  _DWORD *v25; // [rsp+B0h] [rbp-11h]
  __int64 v26; // [rsp+B8h] [rbp-9h]
  __int64 v27; // [rsp+C0h] [rbp-1h]
  _DWORD v28[2]; // [rsp+C8h] [rbp+7h] BYREF

  v25 = v28;
  v26 = 2LL;
  v28[1] = 0;
  v27 = *a11;
  v28[0] = *((unsigned __int16 *)a11 + 4);
  v23 = a10;
  v21 = a9;
  v19 = a8;
  v17 = a7;
  v15 = a6;
  v13 = a5;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 4LL;
  v16 = 4LL;
  v14 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A8E0, a2, 0LL, 0LL, 0xAu, &v12);
}
