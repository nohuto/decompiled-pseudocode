/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@4444444444AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0049290
 * Callers:
 *     ?LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEBUDXG_BLACKBOX_DISPLAY_SOURCE_INFO@@@Z @ 0x1C02F4664 (-LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEB.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
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
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        const CHAR **a22)
{
  const CHAR *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  __int64 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  const CHAR *v61; // [rsp+160h] [rbp+60h]
  int v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+16Ch] [rbp+6Ch]

  v22 = *a22;
  if ( *a22 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = File;
    v24 = 1;
  }
  v62 = v24;
  v59 = a21;
  v57 = a20;
  v55 = a19;
  v53 = a18;
  v51 = a17;
  v49 = a16;
  v47 = a15;
  v45 = a14;
  v43 = a13;
  v41 = a12;
  v39 = a11;
  v37 = a10;
  v35 = a9;
  v33 = a8;
  v31 = a7;
  v29 = a6;
  v27 = a5;
  v61 = v22;
  v63 = 0;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v44 = 4LL;
  v42 = 4LL;
  v40 = 1LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 8LL;
  v28 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, a3, 0LL, 0x14u, &v26);
}
