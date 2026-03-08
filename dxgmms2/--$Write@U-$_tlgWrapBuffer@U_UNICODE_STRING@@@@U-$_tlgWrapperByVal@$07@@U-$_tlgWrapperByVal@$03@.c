/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C00306B0
 * Callers:
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00F4134 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned __int16 *v12; // rax
  int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-A9h] BYREF
  _DWORD *v16; // [rsp+50h] [rbp-89h]
  __int64 v17; // [rsp+58h] [rbp-81h]
  __int64 v18; // [rsp+60h] [rbp-79h]
  _DWORD v19[2]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v20; // [rsp+70h] [rbp-69h]
  __int64 v21; // [rsp+78h] [rbp-61h]
  __int64 v22; // [rsp+80h] [rbp-59h]
  __int64 v23; // [rsp+88h] [rbp-51h]
  __int64 v24; // [rsp+90h] [rbp-49h]
  __int64 v25; // [rsp+98h] [rbp-41h]
  __int64 v26; // [rsp+A0h] [rbp-39h]
  __int64 v27; // [rsp+A8h] [rbp-31h]
  __int64 v28; // [rsp+B0h] [rbp-29h]
  __int64 v29; // [rsp+B8h] [rbp-21h]
  __int64 v30; // [rsp+C0h] [rbp-19h]
  __int64 v31; // [rsp+C8h] [rbp-11h]
  __int64 v32; // [rsp+D0h] [rbp-9h]
  __int64 v33; // [rsp+D8h] [rbp-1h]

  v32 = a12;
  v30 = a11;
  v28 = a10;
  v26 = a9;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v16 = v19;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v12 = *a5;
  v27 = 4LL;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 8LL;
  v17 = 2LL;
  v13 = *v12;
  v18 = *((_QWORD *)v12 + 1);
  v19[0] = v13;
  v19[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, a3, 0LL, 0xBu, &v15);
}
