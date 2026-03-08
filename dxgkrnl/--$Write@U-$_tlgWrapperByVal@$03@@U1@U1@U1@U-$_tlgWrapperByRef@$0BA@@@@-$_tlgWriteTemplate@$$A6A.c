/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C0022AAC
 * Callers:
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C0022908 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-31h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  __int64 v14; // [rsp+60h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  __int64 v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+98h] [rbp+17h]

  v21 = 16LL;
  v19 = 4LL;
  v17 = 4LL;
  v9 = *a9;
  v18 = a8;
  v16 = a7;
  v14 = a6;
  v12 = a5;
  v20 = v9;
  v15 = 4LL;
  v13 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A8E0, a2, 0LL, 0LL, 7u, &v11);
}
