/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C01E1EB8
 * Callers:
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  int v6; // ecx
  int v7; // ecx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-29h] BYREF
  _DWORD *v10; // [rsp+50h] [rbp-9h]
  __int64 v11; // [rsp+58h] [rbp-1h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  _DWORD v13[2]; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+80h] [rbp+27h]
  _DWORD v17[2]; // [rsp+88h] [rbp+2Fh] BYREF

  v15 = 2LL;
  v14 = v17;
  v6 = **a6;
  v16 = *((_QWORD *)*a6 + 1);
  v10 = v13;
  v17[0] = v6;
  v17[1] = 0;
  v11 = 2LL;
  v7 = **a5;
  v12 = *((_QWORD *)*a5 + 1);
  v13[0] = v7;
  v13[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, a2, 0LL, 0LL, 6u, &v9);
}
