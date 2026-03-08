/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x1C0071A84
 * Callers:
 *     ?SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1C03D345C (-SmmTelemetryDisableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 *     ?SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1C03D3510 (-SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  __int64 v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  _DWORD *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  _DWORD v19[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]

  v22 = a9;
  v20 = a8;
  v16 = v19;
  v23 = 4LL;
  v21 = 4LL;
  v17 = 2LL;
  v9 = **a7;
  v18 = *((_QWORD *)*a7 + 1);
  v14 = a6;
  v19[0] = v9;
  v12 = a5;
  v13 = 8LL;
  v19[1] = 0;
  v15 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, 0LL, 0LL, 8u, &v11);
}
