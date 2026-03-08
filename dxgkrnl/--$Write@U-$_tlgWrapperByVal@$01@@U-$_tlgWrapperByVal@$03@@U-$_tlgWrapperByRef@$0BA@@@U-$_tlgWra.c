/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x1C001C684
 * Callers:
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01691C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v17; // [rsp+50h] [rbp-A9h]
  __int64 v18; // [rsp+58h] [rbp-A1h]
  __int64 v19; // [rsp+60h] [rbp-99h]
  __int64 v20; // [rsp+68h] [rbp-91h]
  __int64 v21; // [rsp+70h] [rbp-89h]
  __int64 v22; // [rsp+78h] [rbp-81h]
  __int64 v23; // [rsp+80h] [rbp-79h]
  __int64 v24; // [rsp+88h] [rbp-71h]
  __int64 v25; // [rsp+90h] [rbp-69h]
  __int64 v26; // [rsp+98h] [rbp-61h]
  __int64 v27; // [rsp+A0h] [rbp-59h]
  __int64 v28; // [rsp+A8h] [rbp-51h]
  __int64 v29; // [rsp+B0h] [rbp-49h]
  __int64 v30; // [rsp+B8h] [rbp-41h]
  __int64 v31; // [rsp+C0h] [rbp-39h]
  __int64 v32; // [rsp+C8h] [rbp-31h]
  __int64 v33; // [rsp+D0h] [rbp-29h]
  __int64 v34; // [rsp+D8h] [rbp-21h]
  __int64 v35; // [rsp+E0h] [rbp-19h]
  __int64 v36; // [rsp+E8h] [rbp-11h]

  v35 = a14;
  v33 = a13;
  v31 = a12;
  v29 = a11;
  v27 = a10;
  v25 = a9;
  v23 = a8;
  v36 = 1LL;
  v34 = 1LL;
  v32 = 8LL;
  v14 = *a7;
  v19 = a6;
  v17 = a5;
  v21 = v14;
  v30 = 8LL;
  v28 = 1LL;
  v26 = 4LL;
  v24 = 8LL;
  v22 = 16LL;
  v20 = 4LL;
  v18 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A8A8, a2, a3, 0LL, 0xCu, &v16);
}
