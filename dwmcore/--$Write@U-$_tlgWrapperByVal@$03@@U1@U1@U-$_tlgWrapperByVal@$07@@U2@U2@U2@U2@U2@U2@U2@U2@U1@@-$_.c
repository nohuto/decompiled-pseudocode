/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@444444443@Z @ 0x1801994E4
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C478 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]

  v43 = a17;
  v41 = a16;
  v39 = a15;
  v37 = a14;
  v35 = a13;
  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v44 = 4LL;
  v42 = 8LL;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 8LL;
  v34 = 8LL;
  v32 = 8LL;
  v30 = 8LL;
  v28 = 8LL;
  v26 = 8LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xFu, &v18);
}
