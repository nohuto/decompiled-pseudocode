/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@777@Z @ 0x1C0030D80
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AD690 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int16 **a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12)
{
  int v12; // ecx
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v16; // [rsp+50h] [rbp-89h]
  __int64 v17; // [rsp+58h] [rbp-81h]
  __int64 v18; // [rsp+60h] [rbp-79h]
  __int64 v19; // [rsp+68h] [rbp-71h]
  __int64 v20; // [rsp+70h] [rbp-69h]
  __int64 v21; // [rsp+78h] [rbp-61h]
  _DWORD *v22; // [rsp+80h] [rbp-59h]
  __int64 v23; // [rsp+88h] [rbp-51h]
  __int64 v24; // [rsp+90h] [rbp-49h]
  _DWORD v25[2]; // [rsp+98h] [rbp-41h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-39h]
  int v27; // [rsp+A8h] [rbp-31h]
  int v28; // [rsp+ACh] [rbp-2Dh]
  __int64 v29; // [rsp+B0h] [rbp-29h]
  int v30; // [rsp+B8h] [rbp-21h]
  int v31; // [rsp+BCh] [rbp-1Dh]
  __int64 v32; // [rsp+C0h] [rbp-19h]
  int v33; // [rsp+C8h] [rbp-11h]
  int v34; // [rsp+CCh] [rbp-Dh]
  __int64 v35; // [rsp+D0h] [rbp-9h]
  int v36; // [rsp+D8h] [rbp-1h]
  int v37; // [rsp+DCh] [rbp+3h]

  v37 = 0;
  v34 = 0;
  v31 = 0;
  v35 = *a12;
  v36 = *((_DWORD *)a12 + 2);
  v28 = 0;
  v23 = 2LL;
  v32 = *a11;
  v33 = *((_DWORD *)a11 + 2);
  v29 = *a10;
  v30 = *((_DWORD *)a10 + 2);
  v26 = *a9;
  v27 = *((_DWORD *)a9 + 2);
  v22 = v25;
  v12 = **a8;
  v24 = *((_QWORD *)*a8 + 1);
  v25[0] = v12;
  v25[1] = 0;
  v21 = 16LL;
  v13 = *a7;
  v18 = a6;
  v16 = a5;
  v20 = v13;
  v19 = 2LL;
  v17 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0xBu, &v15);
}
