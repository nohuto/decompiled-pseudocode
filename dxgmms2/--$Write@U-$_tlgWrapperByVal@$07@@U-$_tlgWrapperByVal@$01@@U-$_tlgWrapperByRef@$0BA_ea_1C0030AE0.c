/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@7777@Z @ 0x1C0030AE0
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AD690 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int16 **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  unsigned __int16 *v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-A1h]
  __int64 v19; // [rsp+58h] [rbp-99h]
  __int64 v20; // [rsp+60h] [rbp-91h]
  __int64 v21; // [rsp+68h] [rbp-89h]
  __int64 v22; // [rsp+70h] [rbp-81h]
  __int64 v23; // [rsp+78h] [rbp-79h]
  _DWORD *v24; // [rsp+80h] [rbp-71h]
  __int64 v25; // [rsp+88h] [rbp-69h]
  __int64 v26; // [rsp+90h] [rbp-61h]
  _DWORD v27[2]; // [rsp+98h] [rbp-59h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-51h]
  __int64 v29; // [rsp+A8h] [rbp-49h]
  __int64 v30; // [rsp+B0h] [rbp-41h]
  __int64 v31; // [rsp+B8h] [rbp-39h]
  __int64 v32; // [rsp+C0h] [rbp-31h]
  __int64 v33; // [rsp+C8h] [rbp-29h]
  __int64 v34; // [rsp+D0h] [rbp-21h]
  __int64 v35; // [rsp+D8h] [rbp-19h]
  __int64 v36; // [rsp+E0h] [rbp-11h]
  __int64 v37; // [rsp+E8h] [rbp-9h]

  v36 = a13;
  v34 = a12;
  v32 = a11;
  v30 = a10;
  v28 = a9;
  v24 = v27;
  v37 = 4LL;
  v35 = 4LL;
  v33 = 4LL;
  v13 = *a8;
  v31 = 4LL;
  v29 = 4LL;
  v25 = 2LL;
  v14 = *v13;
  v26 = *((_QWORD *)v13 + 1);
  v27[0] = v14;
  v27[1] = 0;
  v23 = 16LL;
  v15 = *a7;
  v20 = a6;
  v18 = a5;
  v22 = v15;
  v21 = 2LL;
  v19 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0xCu, &v17);
}
