/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@@Z @ 0x1C0030940
 * Callers:
 *     ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00F4494 (-LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 *a8)
{
  int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h]
  __int64 v12; // [rsp+58h] [rbp-21h]
  __int64 v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  _DWORD *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  _DWORD v18[2]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]

  v21 = 0;
  v16 = 2LL;
  v19 = *a8;
  v20 = *((_DWORD *)a8 + 2);
  v15 = v18;
  v8 = **a7;
  v17 = *((_QWORD *)*a7 + 1);
  v13 = a6;
  v11 = a5;
  v18[0] = v8;
  v18[1] = 0;
  v14 = 2LL;
  v12 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 7u, &v10);
}
