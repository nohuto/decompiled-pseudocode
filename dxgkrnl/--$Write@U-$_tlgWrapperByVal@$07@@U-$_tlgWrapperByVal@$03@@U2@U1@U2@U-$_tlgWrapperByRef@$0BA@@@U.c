/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434AEBU?$_tlgWrapperByRef@$0BA@@@444@Z @ 0x1C00560D0
 * Callers:
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C00561C4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v16; // [rsp+50h] [rbp-91h]
  __int64 v17; // [rsp+58h] [rbp-89h]
  __int64 v18; // [rsp+60h] [rbp-81h]
  __int64 v19; // [rsp+68h] [rbp-79h]
  __int64 v20; // [rsp+70h] [rbp-71h]
  __int64 v21; // [rsp+78h] [rbp-69h]
  __int64 v22; // [rsp+80h] [rbp-61h]
  __int64 v23; // [rsp+88h] [rbp-59h]
  __int64 v24; // [rsp+90h] [rbp-51h]
  __int64 v25; // [rsp+98h] [rbp-49h]
  __int64 v26; // [rsp+A0h] [rbp-41h]
  __int64 v27; // [rsp+A8h] [rbp-39h]
  __int64 v28; // [rsp+B0h] [rbp-31h]
  __int64 v29; // [rsp+B8h] [rbp-29h]
  __int64 v30; // [rsp+C0h] [rbp-21h]
  __int64 v31; // [rsp+C8h] [rbp-19h]
  __int64 v32; // [rsp+D0h] [rbp-11h]
  __int64 v33; // [rsp+D8h] [rbp-9h]

  v32 = a13;
  v30 = a12;
  v28 = a11;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v13 = *a10;
  v24 = a9;
  v22 = a8;
  v20 = a7;
  v18 = a6;
  v16 = a5;
  v26 = v13;
  v27 = 16LL;
  v25 = 4LL;
  v23 = 8LL;
  v21 = 4LL;
  v19 = 4LL;
  v17 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A8E0, a2, 0LL, 0LL, 0xBu, &v15);
}
