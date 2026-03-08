/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@7@Z @ 0x1C00148FC
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AD690 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1C00AD88C (-LogData@VIDMM_TELEMETRY_PROCESS_ALLOCATED_CONTENT@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int16 **a8,
        __int64 *a9,
        __int64 *a10)
{
  int v10; // ecx
  __int64 v11; // rcx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-59h]
  __int64 v15; // [rsp+58h] [rbp-51h]
  __int64 v16; // [rsp+60h] [rbp-49h]
  __int64 v17; // [rsp+68h] [rbp-41h]
  __int64 v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  _DWORD *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  __int64 v22; // [rsp+90h] [rbp-19h]
  _DWORD v23[2]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]

  v29 = 0;
  v26 = 0;
  v21 = 2LL;
  v27 = *a10;
  v28 = *((_DWORD *)a10 + 2);
  v24 = *a9;
  v25 = *((_DWORD *)a9 + 2);
  v20 = v23;
  v10 = **a8;
  v22 = *((_QWORD *)*a8 + 1);
  v23[0] = v10;
  v23[1] = 0;
  v19 = 16LL;
  v11 = *a7;
  v16 = a6;
  v14 = a5;
  v18 = v11;
  v17 = 2LL;
  v15 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0076048, a2, 0, 0, 9u, &v13);
}
