/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@66@Z @ 0x1C00309FC
 * Callers:
 *     ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00F4494 (-LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10)
{
  int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+50h] [rbp-59h]
  __int64 v14; // [rsp+58h] [rbp-51h]
  __int64 v15; // [rsp+60h] [rbp-49h]
  __int64 v16; // [rsp+68h] [rbp-41h]
  _DWORD *v17; // [rsp+70h] [rbp-39h]
  __int64 v18; // [rsp+78h] [rbp-31h]
  __int64 v19; // [rsp+80h] [rbp-29h]
  _DWORD v20[2]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  __int64 v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]

  v29 = 0;
  v26 = 0;
  v23 = 0;
  v27 = *a10;
  v28 = *((_DWORD *)a10 + 2);
  v18 = 2LL;
  v24 = *a9;
  v25 = *((_DWORD *)a9 + 2);
  v21 = *a8;
  v22 = *((_DWORD *)a8 + 2);
  v17 = v20;
  v10 = **a7;
  v19 = *((_QWORD *)*a7 + 1);
  v15 = a6;
  v13 = a5;
  v20[0] = v10;
  v20[1] = 0;
  v16 = 2LL;
  v14 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 9u, &v12);
}
